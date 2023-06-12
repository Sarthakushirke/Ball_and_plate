%% Applying input saturation to allow linearity:

clear all; close all;


g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0.1;0;0.1;0]; % Initial point

Ts = 0.1;
ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); %discritization using matlab function 
A = ss_d.A;
B = ss_d.B;
C = ss_d.C;
D = ss_d.D;
[nx,nu] = size(B);

Ts = 0.1;
ss_c = ss(Ac, Bc, Cc, Dc);
sys_tf = tf(ss_c);
sys_tf1 = tf(ss_c(1, 1));
sys_tf2 = tf(ss_c(2, 2));

[A_1, B_1, C_1, D_1] = ssdata(sys_tf1);
[A_2, B_2, C_2, D_2] = ssdata(sys_tf2);

dsys1=c2d(sys_tf1,Ts,'z');
[num,den]=tfdata(dsys1,'v');

dsys2=c2d(sys_tf2,Ts,'z');
[num2,den2]=tfdata(dsys2,'v');

%% Design controller
% sisotool(sys_tf1)
Kp = -0.1;
Ki = -0.001;
Kd = -18;

%% Ball & plate system
k_sim = 1000;
t= Ts*(0:k_sim); % Time vector
r = 0.1; % Radius of the circular reference trajectory
T = 20; % Period of the circular reference trajectory
x_center = 0.1;
y_center = 0.1;
x_ref = [r*cos(2*pi*t/T); zeros(1, k_sim+1); r*sin(2*pi*t/T); zeros(1, k_sim+1)]; % Reference trajectory

x_ref(1,:) = x_ref(1,:) + x_center; % Add x-coordinate of the center
x_ref(3,:) = x_ref(3,:) + y_center; % Add y-coordinate of the center
 %time steps 
xk = [x0 zeros(nx,k_sim)]; %constructing the displacment matrix including I.c
uk = zeros(nu,k_sim); %constructing the velocity matrix
D_x = 0;
I_x = 0;
error_previous_x = 0;
derivative_previous_x = 0;
I_y = 0;
D_y = 0;
error_previous_y = 0;
derivative_previous_y = 0;
track_error_hist = [];
for k = 1:k_sim
     % Error compensation in x
     track_error =  x_ref(:,k)- xk(:,k);
     track_error_hist = [track_error_hist track_error];
     track_error_x = track_error(1);
     track_error_y = track_error(3);
     P_x = Kp * track_error_x;
     I_x = I_x + Ki * track_error_x;
     D_x = Kd * (track_error_x - error_previous_x);
     P_y = Kp * track_error_y;
     I_y = I_y + Ki * track_error_y;
     D_y = Kd * (track_error_y - error_previous_y); 
     
    uk(:,k) = [(P_x + I_x + D_x); (P_y + I_y + D_y)];
%     uk(:,k) = [-0.01; -0.01];
%     uk(:,k) = min(max(uk(:,k),((-5*pi)/180)*ones(nu,1)),((5*pi)/180)*ones(nu,1));
    xk(:,k+1) = A*xk(:,k)+B*uk(:,k); % constructing X based on the S.S eq.
    error_previous_x = track_error_x;
    error_previous_y = track_error_y;
    derivative_previous_x = D_x;
    derivative_previous_y = D_y;
end

figure()
plot(0:k_sim, xk(1,:), 'b', 0:k_sim, x_ref(1,:), 'r--') % Plot x component of the state and reference trajectory
title('Reference Tracking');
xlabel('k');
ylabel('x');

figure()
plot(0:k_sim, xk(3,:), 'b', 0:k_sim, x_ref(3,:), 'r--') % Plot y component of the state and reference trajectory
title('Reference Tracking');
xlabel('k');
ylabel('y');

figure()
plot(xk(1,:), xk(3,:), 'b', x_ref(1,:), x_ref(3,:), 'r--') % Plot the trajectory in the xy plane
title('Reference Tracking');
xlabel('x');
ylabel('y');

legend('Tracked Trajectory', 'Reference Trajectory');

%% test if controller is cl stable
s = tf('s');
N = 1;
Ctest = Kp + 1/s*(Ki) + Kd*(1/(1+N*(1/s)));
C_d = c2d(Ctest,Ts);
step(1/1+dsys1*C_d)

