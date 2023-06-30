%% Outerloop_design_simulation
clc; close all; clear

% System parameters
g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0.1;0;0.1;0]; % Initial point

Ts = 0.035; % Sampling time !!!

ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); %discritization using matlab function 

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
%% Load controllers and simulate 
% load('outerloop_controller.mat') %from Shapeit
% C = shapeit_data.C_tf;
% num_c = C.num{:};
% den_c = C.den{:};
% 
% load('outerloop_controller_d.mat') %from Shapeit
% C_d = tf(shapeit_data.C_tf_z);
% num_d = C_d.num{:};
% den_d = C_d.den{:};
% 
% load('C_st2.mat') % from SISOTOOL
% pidparam = pid(tf(C_st2));
Kp = -0.3;
Ki = -0.25;
Kd = -0.5;
N =  3.1722;

% Run the simulink script first
out = sim('PID_outer');

%% Plot xy continuous and discrete 
trajx = out.y(:,1);
trajy = out.y(:,2);
figure
plot(trajx,trajy)

% trajx = out.x_d(:,1);
% trajy = out.x_d(:,2);
% plot(trajx,trajy,'*--')
% trajx_pid = out.x_d_pid(:,1);
% trajy_pid = out.x_d_pid(:,2);
% plot(trajx_pid,trajy_pid,'*--')
% legend('Continuous','Discrete','Discrete PID')

%% Plot input with respect to output discrete time
% input_d = out.input_d;
% output_d = out.x_d;
% input_c = out.input_c;
% output_c = out.x_c;
% input_d_pid = out.input_d_pid;
% output_d_pid = out.x_d_pid;
% 
% t = out.time;

%% Plotting response times just in x direction, they should be the same if x0=y0 Filters SHAPEIT
% Continuous filter
% figure()
% plot(t,input_c(:,1))
% hold on
% plot(t,output_c(:,1))
% xlabel('Time [s]')
% ylabel('Theta x [m]')
% legend('Reference x','Output x')
% title('continuous x ')
% 
% % Discrete filter
% figure()
% plot(t,input_d(:,1))
% hold on
% plot(t,output_d(:,1))
% xlabel('Time [s]')
% ylabel('Theta x [m]')
% legend('Reference x','Output x')
% title('discrete x ')

%% PID SISOTOOL Plotting response times just in x direction, they should be the same if x0=y0 
% figure()
% plot(t,input_d_pid(:,1))
% hold on
% plot(t,output_d_pid(:,1))
% xlabel('Time [s]')
% ylabel('Theta x [m]')
% legend('Reference x','Output x')
% title('discrete x ')
% 
% figure
% plot(t,input_d_pid(:,2))
% hold on
% plot(t,output_d_pid(:,2))
% xlabel('Time [s]')
% ylabel('Theta y [m]')
% legend('Reference y','Output y')
% title('discrete y')

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

%% Read out PID values

% load('C_st2.mat');
% pidparam = pid(tf(C_st2));
% Kp = pidparam.Kp;
% Ki = pidparam.Ki;
% Kd = pidparam.Kd;
% N = 1/pidparam.Tf;


%% Manually make shapeit type filter
% s = tf('s');
% % Controller variables
% bw= 0.3; % Desired bandwidth
% integrator_zero = 0.1; % [Hz]
% lead_zero = bw/3; % [Hz]
% lead_pole = bw*3; % [Hz]
% lpf_pole = 20; % [Hz] Desired
% damping = 0.7; % [-]
% gain = -0.2; % [-]
% 
% C_gain = gain;
% C_lead = ((1/(2*pi*lead_zero))*s+1)/((1/(2*pi*lead_pole))*s+1);
% C_lpf = 1/((1/(2*pi*lpf_pole)^2)*s^2 + ((2*damping)/(2*pi*lpf_pole))*s+1);
% C_int = (s+2*pi*integrator_zero)/s;
% C_shapeit_manually = C_gain*C_lead*C_lpf*(tf(cell2mat(C_int.num),1)); % only the zero part of the integrator
% C_shapeit_manually_aux = C_shapeit_manually*(1/s);
% step((C_shapeit_manually_aux*sys_tf1)/(1+C_shapeit_manually_aux*sys_tf1))

%% Simulate with shapeit discretized controller
% C_shapeit_manually_aux_d = c2d(C_shapeit_manually_aux,Ts);
% step((C_shapeit_manually_aux_d*dsys)/(1+C_shapeit_manually_aux_d*dsys))
% num_d = C_shapeit_manually_aux_d.num{:};
% den_d = C_shapeit_manually_aux_d.den{:};

% load('outerloop_filtd_0_035.mat')
% C_d = shapeit_data.C_tf_z;
% C_d = tf(C_d);
% dsys=c2d(sys_tf1,C_d.Ts,'zoh');
% step((C_d*dsys)/(1+C_d*dsys))
% num_d = C_d.num{:};
% den_d = C_d.den{:};
% 
% 
% % Run the simulink script first
% out2 = sim('PID_outer');
% 
% input_d = out2.input_d;
% output_d = out2.x_d;
% 
% % Discrete filter
% figure()
% plot(t,input_d(:,1))
% hold on
% plot(t,output_d(:,1))
% xlabel('Time [s]')
% ylabel('Theta x [m]')
% legend('Reference x','Output x')
% title('discrete x ')
