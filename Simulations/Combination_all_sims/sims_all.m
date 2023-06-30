%% Outerloop_design_simulation
clc; close all; clear all

%% Fuzzy control is very computationally intensive, so only run if you made changes
% Put RUN_SIMULATION to false Use the simulationdata.mat if you want did not change anything.
RUN_SIMULATION = false;

% System parameters
g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0.1;0;0.1;0]; % Initial point
xobs0 = [0.1950;0;0.-0.1950;0]; % Worste case initial observer point

Ts = 0.035; % Sampling time !!!

ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); %discritization using matlab function 

A = ss_d.A;
B = ss_d.B;
C = ss_d.C;
D = ss_d.D;
[nx,nu] = size(B);

ctrb_M = ctrb(A,B);

% Q = [5 0 0 0; 0 0.1 0 0; 0 0 5 0;0 0 0 0.1];
% R = [0.1 0;0 0.1];
% [K,P,~] = dlqr(A,B,Q,R); % In MATLAB documentation, u(k)=-Kx(k)
% K_lqr = K; % In this lecture, we use the form u(k)=+Kx(k)

% Q = [2 0 0 0; 0 0.05 0 0; 0 0 2 0;0 0 0 0.05];
% R = [20 0;0 20];
% [K,P,~] = dlqr(A,B,Q,R); % In MATLAB documentation, u(k)=-Kx(k)
% K_lqr = K; % In this lecture, we use the form u(k)=+Kx(k)

% kx = K_lqr(1,1);
% kxdot = K_lqr(1,2);
% ky = K_lqr(2,3);
% kydot = K_lqr(2,4);
kx = -0.4371;
kxdot = -0.3586;
ky = -0.4371;
kydot = -0.3586;

% Convert to transfer function
sys_tf = tf(ss_c);
sys_tf1 = tf(ss_c(1, 1));
sys_tf2 = tf(ss_c(2, 2));
sys_num = sys_tf1.num{:};
sys_den = sys_tf1.den{:};


% Discrete transfer function
dsys=c2d(sys_tf1,Ts,'zoh');

%% Reference circle
radius = 0.1; % Radius of circle reference
Trot = 5;% How long should 1 rotation take?
freq_hz = 1/Trot; % frequency of circle in seconds
freq_w = 2*pi*freq_hz;
v = freq_w*radius;
% N = (1/freq_hz)/Ts;
% N = 0;

% Simulation time
T = (1/freq_hz)*20; % 2 full periods 
% T = 100;

% Saturation of angle 
sat_ub = (pi/180)*5; % 5 degrees to radians
sat_lb = -(pi/180)*5; % 5 degrees to radians

% Initial conditions
init_x = 0;
init_y = 0;

% error('Make sure you make the appropriate controllers before running the script, comment this error and the return to continue')
% PID values
Kp = -0.3;
Ki = -0.25;
Kd = -0.5;
N =  3.1722;
N_filt = 100;
% Run the simulink script first

if RUN_SIMULATION == true
    out = sim('sim_all');
else 
    out = load('simulationdata.mat');
    out = out.out;
end

%% PID
xpid = out.y_pid(:,1);
ypid = out.y_pid(:,2);
figure
plot(xpid,ypid)

%% LQR
xlqr = out.y_lqr(:,1);
ylqr = out.y_lqr(:,2);
figure
plot(xlqr,ylqr)

% %% LQR unkown velocity (in practise)
% xlqrcv = out.y_lqrcv(:,1);
% ylqrcv = out.y_lqrcv(:,2);
% figure
% plot(xlqrcv,ylqrcv)


%% LQG
xlqg = out.y_lqg(:,1);
ylqg = out.y_lqg(:,2);
figure
plot(xlqg,ylqg)

%% Fuzzy PID
xfuzzy = out.y_fuzzy(:,1);
yfuzzy = out.y_fuzzy(:,2);
figure
plot(xfuzzy,yfuzzy)
%% all on top of eachother
figure
plot(xpid,ypid)
hold on
plot(xfuzzy,yfuzzy)
plot(xlqr,ylqr)
plot(xlqg,ylqg)
legend('PID','Fuzzy PID','LQR','LQG')
