% Reason for debug: the reference is not tracked properly by PID or LQR.
% The LQR error 

%% Outerloop_design_simulation
clc; close all; clear

%% Fuzzy control is very computationally intensive, so only run if you made changes
% Put RUN_SIMULATION to false Use the simulationdata.mat if you want did not change anything.
RUN_SIMULATION = true;

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
T = (1/freq_hz)*1; % 2 full periods 
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
% N_filt = 100;
% Run the simulink script first

if RUN_SIMULATION == true
    out = sim('sim_all');
else 
    out = load('discrete_data.mat');
    out = out.out;
end

% %% PID
xpid = out.y_pid(:,1);
ypid = out.y_pid(:,2);
xref = out.r_pid(:,1);
yref = out.r_pid(:,2);
figure
plot(xpid,ypid)
hold on
plot(xref,yref)
% 
% %% LQR
% xlqr = out.y_lqr(:,1);
% ylqr = out.y_lqr(:,2);
% figure
% plot(xlqr,ylqr)
% 
% % %% LQR unkown velocity (in practise)
% xlqrcv = out.y_lqrcv(:,1);
% ylqrcv = out.y_lqrcv(:,2);
% % figure
% % plot(xlqrcv,ylqrcv)
% 
% 
% %% LQG
% xlqg = out.y_lqg(:,1);
% ylqg = out.y_lqg(:,2);
% figure
% plot(xlqg,ylqg)
% 
% %% Fuzzy PID
% xfuzzy = out.y_fuzzy(:,1);
% yfuzzy = out.y_fuzzy(:,2);
% figure
% plot(xfuzzy,yfuzzy)
%% all trajectories on top of eachother
% refx = out.r_pid(:,1);
% refy = out.r_pid(:,2);
% 
% figure
% plot(xpid,ypid,'Linewidth',1.5)
% hold on
% plot(xfuzzy,yfuzzy,'Linewidth',1.5)
% plot(xlqr,ylqr,'Linewidth',1.5)
% plot(xlqg,ylqg,'Linewidth',1.5)
% plot(refx,refy,'--g','Linewidth',2)
% legend('PID','Fuzzy PID','LQR','LQG','Reference')
% grid on
% xlabel('Displacement $x$ [m]','Interpreter','latex')
% ylabel('Displacement $y$ [m]','Interpreter','latex')

%% Cummulative error 

% ct_pid = zeros(length(out.e_pid),1);
% ct_fpid= zeros(length(out.e_pid),1);
% ct_lqr = zeros(length(out.e_pid),1);
% ct_lqg = zeros(length(out.e_pid),1);
% sum = [0,0,0,0];
% for i = 1:length(out.e_pid)
% sum = sum + [norm(out.e_pid(i,:),2),norm(out.e_fuzzy(i,:),2),norm(out.e_lqr(i,:),2),norm(out.e_lqg(i,:),2)];
% ct_pid(i) = sum(1);
% ct_fpid(i) = sum(2);
% ct_lqr(i) = sum(3);
% ct_lqg(i) = sum(4);
% end
% 
% area(out.t,ct_fpid+ct_pid+ct_lqr+ct_lqg)
% hold on
% area(out.t,ct_pid+ct_lqr+ct_lqg)
% area(out.t,ct_lqr+ct_lqg)
% area(out.t,ct_lqg)
% legend({'$all$','$no pid$','$no lqg$','$no fuzzy$'},'Location','northwest','Interpreter','latex')
% xlabel('Time [$s$]','Interpreter','latex')
% ylabel('$\int |X_{e}|+|Y_e|dt$','Interpreter','latex')

