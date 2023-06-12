clear all; close all;
g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0;0;0;0]; % Initial point

Ts = 0.1;
ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); %discritization using matlab function 
A = ss_d.A;
B = ss_d.B;
C = ss_d.C;
D = ss_d.D;
[nx,nu] = size(B);

ctrb_M = ctrb(A,B);

Q = [5 0 0 0; 0 0.1 0 0; 0 0 5 0;0 0 0 0.1];
R = [3 0;0 3];
[K,P,~] = dlqr(A,B,Q,R); % In MATLAB documentation, u(k)=-Kx(k)
K_lqr = -K; % In this lecture, we use the form u(k)=+Kx(k)

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
error = zeros(nx,k_sim+1);
for k = 1:k_sim
    track_error = xk(:,k) - x_ref(:,k);
    error(:,k)= track_error;
    uk(:,k) = K_lqr*track_error; % constructing U based on the control law eq.
    xk(:,k+1) = A*xk(:,k)+B*uk(:,k); % constructing X based on the S.S eq.
end

figure(1)
plot(0:k_sim, xk(1,:), 'b', 0:k_sim, x_ref(1,:), 'r--') % Plot x component of the state and reference trajectory
title('Reference Tracking');
xlabel('k');
ylabel('x');

figure(2)
plot(0:k_sim, xk(3,:), 'b', 0:k_sim, x_ref(3,:), 'r--') % Plot y component of the state and reference trajectory
title('Reference Tracking');
xlabel('k');
ylabel('y');

figure(3)
plot(xk(1,:), xk(3,:), 'b', x_ref(1,:), x_ref(3,:), 'r--') % Plot the trajectory in the xy plane
title('Reference Tracking');
xlabel('x');
ylabel('y');
legend('Tracked Trajectory', 'Reference Trajectory');


%% Applying input saturation to allow linearity:

clear all; close all;
g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0;0.1;0;0.2]; % Initial point

Ts = 0.1;
ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); %discritization using matlab function 
A = ss_d.A;
B = ss_d.B;
C = ss_d.C;
D = ss_d.D;
[nx,nu] = size(B);

ctrb_M = ctrb(A,B);

Q = [5 0 0 0; 0 0.1 0 0; 0 0 5 0;0 0 0 0.1];
R = [3 0;0 3];
[K,P,~] = dlqr(A,B,Q,R); % In MATLAB documentation, u(k)=-Kx(k)
K_lqr = -K; % In this lecture, we use the form u(k)=+Kx(k)

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
for k = 1:k_sim
    track_error = xk(:,k) - x_ref(:,k);

     P = Kp * error;

    % Compute the integral term
    integral = integral + Ki * error;

%     % Apply anti-windup to the integral term
%     if integral > upperLimit
%         integral = upperLimit;
%     elseif integral < lowerLimit
%         integral = lowerLimit;
%     end

    % Compute the derivative term
    derivative = Kd * (N * (error - error_previous) - (N - 1) * derivative_previous);

    % Compute the control signal
    control_signal = P + integral + derivative;
    uk(:,k) = K_lqr*track_error; % constructing U based on the control law eq.
    uk(:,k) = 
    uk(:,k) = min(max(uk(:,k),((-5*pi)/180)*ones(nu,1)),((5*pi)/180)*ones(nu,1));
    xk(:,k+1) = A*xk(:,k)+B*uk(:,k); % constructing X based on the S.S eq.
end

figure(4)
plot(0:k_sim, xk(1,:), 'b', 0:k_sim, x_ref(1,:), 'r--') % Plot x component of the state and reference trajectory
title('Reference Tracking');
xlabel('k');
ylabel('x');

figure(5)
plot(0:k_sim, xk(3,:), 'b', 0:k_sim, x_ref(3,:), 'r--') % Plot y component of the state and reference trajectory
title('Reference Tracking');
xlabel('k');
ylabel('y');

figure(6)
plot(xk(1,:), xk(3,:), 'b', x_ref(1,:), x_ref(3,:), 'r--') % Plot the trajectory in the xy plane
title('Reference Tracking');
xlabel('x');
ylabel('y');

legend('Tracked Trajectory', 'Reference Trajectory');

