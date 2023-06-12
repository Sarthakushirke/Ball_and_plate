clc; close all%;clear

g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0.1;0;0.1;0]; % Initial point

Ts = 0.01;
ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); %discritization using matlab function 
A = ss_d.A;
B = ss_d.B;
C = ss_d.C;
D = ss_d.D;
[nx,nu] = size(B);

ss_c = ss(Ac, Bc, Cc, Dc);
sys_tf = tf(ss_c);
sys_tf1 = tf(ss_c(1, 1));
sys_tf2 = tf(ss_c(2, 2));


sys_num = sys_tf1.num{:};
sys_den = sys_tf1.den{:};


dsys=c2d(sys_tf1,Ts,'zoh');
[num,den]=tfdata(dsys,'v');


%% Reference circle
radius = 0.05;
freq_hz = 0.4; % We want a circle every 4 seconds
freq_w = 2*pi*freq_hz;
N = (1/freq_hz)/Ts;

% Saturation

sat_ub = (pi/180)*5; % 5 degrees to radians
sat_lb = -(pi/180)*5; % 5 degrees to radians
%% Load shapeit controller
load('outerloop_controller.mat')
C = shapeit_data.C_tf;
num_c = C.num{:};
den_c = C.den{:};
load('outerloop_controller_d.mat')
C_d = tf(shapeit_data.C_tf_z);
num_d = C_d.num{:};
den_d = C_d.den{:};
% C_d = c2d(C,Ts,'zoh');
% num_d = C.num{:};
% den_d = C.den{:};
pzmap(C_d*dsys/(1+C_d*dsys))
% Run the simulink script first
out = sim('PID_outer');
%% Plot xy continuous and discrete 
trajx = out.x_c(:,1);
trajy = out.x_c(:,2);
figure
plot(trajx,trajy)
hold on
% Plot xy discrete
trajx = out.x_d(:,1);
trajy = out.x_d(:,2);
plot(trajx,trajy,'*--')
legend('Continuous','Discrete')

%% Plot input with respect to output discrete time


input_d = out.input_d;
output_d = out.x_d;
input_c = out.input_c;
output_c = out.x_c;

figure()
plot(input_c(:,1))
hold on
plot(output_c(:,1))
xlabel('Time [s]')
ylabel('Theta x [m]')
legend('Reference x','output theta x')
title('continuous x ')

figure
plot(input_c(:,2))
hold on
plot(output_c(:,2))
xlabel('Time [s]')
ylabel('Theta y [m]')
legend('Reference y','output theta y')
title('continuous y')


figure()
plot(input_d(:,1))
hold on
plot(output_d(:,1))
xlabel('Time [s]')
ylabel('Theta x [m]')
legend('Reference x','output theta x')
title('discrete x ')

figure
plot(input_d(:,2))
hold on
plot(output_d(:,2))
xlabel('Time [s]')
ylabel('Theta y [m]')
legend('Reference y','output theta y')
title('discrete y')


%% Performance
% H-inf norm/2-norm 
% samp_time = 1/(length(out.error_c(:,1))/(1/freq_hz));
% originalFs = 1/samp_time;
% desiredFs = 1/Ts;
% [p,q] = rat(desiredFs / originalFs);
% error_c = resample(out.error_c,p,q);
% error_d = out.error_d;
% figure
% plot(error_c(:,1))
% hold on
% plot(error_d(:,1))
% legend('continuous','discrete')
% 
% figure
% plot(error_c(:,2))
% hold on
% plot(error_d(:,2))
% legend('continuous','discrete')