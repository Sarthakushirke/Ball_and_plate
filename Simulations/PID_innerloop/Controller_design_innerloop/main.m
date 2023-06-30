% clc; clear; close all;
clc; close all; clear

%% Dynamics plant

T = 2;
init_val = -0.02;
T_jump = 1;
s = tf('s');
Kt = 11;   % [N/A] - motor constant
lx = 39/100; 
ly = 39/100;
m_slider = 0.135; % kg
depth = 34.8/1000; 
thickness = 4.8/1000; 
rho = 1180; %kg/m^3


d = (0:5:40);
for i = 1:length(d)
% Mass calculation
V_outer = lx*ly*depth;
V_inner = (lx-2*thickness)*(ly-2*thickness)*(depth-thickness);
V = (V_outer-V_inner);
m_plate = V*rho;
m = (1/3*m_plate)+m_slider;
% d = 0;  % damping coefficient, assumed 0 for now

% Motor model
sys = Kt/(s^2*m+d(i)*s);
% bode(sys)
num_sys = sys.num{:};
den_sys = sys.den{:};


%% Sisotool get PID values (PID CONTROLLER) !!
% First export the PID controller from the sisotool and load session "ControlSystemDesignerSession.mat"
% sisotool(sys,C)
% pid_val = pid(C);
% Kp = pid_val.Kp
% Ki = pid_val.Ki
% Kd = pid_val.Kd
% N = 1/pid_val.Tf
Kp = 300;
Ki = 100;
Kd = 10;
N = 80;
% t_indx = find(out.t == 1);
out = sim('motor_model');
% out.y(1:t_indx-10) = init_val;
plot(out.t,out.y,'Linewidth',1.5)
xlabel('Time [s]','Interpreter','latex')
ylabel('Displacement [m]','Interpreter','latex')
xlim([0.95 1.3])
ylim([-0.022 0.025])
hold on
end
legend('D = 0','D = 5','D = 10','D = 15','D = 20','D = 25','D = 30','D = 35','D = 40','Interpreter','latex')
grid on


%% Shapeit controller (TRANSFER FUNCTION CONTROLLER) !!
% load('controller_lowpass_integrator.mat') % Load shapeit controller
% % C = shapeit_data.C_tf_z;
% C = shapeit_data.C_tf;
% C_shapeit = tf(C);

% Controller variables
% integrator_zero = 1; % [Hz]
% lead_zero = 16/3; % [Hz]
% lead_pole = 16*3; % [Hz]
% lpf_pole = 100; % [Hz]
% damping = 0.6; % [-]
% gain = 100; % [-]
% 
% 
% C_gain = gain;
% C_lead = ((1/(2*pi*lead_zero))*s+1)/((1/(2*pi*lead_pole))*s+1);
% C_lpf = 1/((1/(2*pi*lpf_pole)^2)*s^2 + ((2*damping)/(2*pi*lpf_pole))*s+1);
% C_int = (s+2*pi*integrator_zero)/s;
% C_shapeit_manually = C_gain*C_lead*C_lpf*(tf(cell2mat(C_int.num),1)); % only the zero part of the integrator
% bode(C_shapeit_manually)
% 
% num_si = C_shapeit_manually.num{:};
% den_si = C_shapeit_manually.den{:};
% C_shapeit_manually_aux = C_shapeit_manually*(1/s);
% step((C_shapeit_manually_aux*sys)/(1+C_shapeit_manually_aux*sys))

%% Controller control system designer to TF
% C_csd = tf(C);
% C_csd_num = C_csd.num{:};
% C_csd_den = C_csd.den{:};



%% Additional tests

%% sys ID on integrator of simulink
% average = 1;
% nfft = length(out.input_int)/average;
% window = hann(nfft);
% [txy,f] = tfestimate(out.input_int,out.output_int,window,nfft/2,nfft);
% frf = frd(txy,f);
% bode(frf)

%% PID controlle test properness
% N = 100;
% P = 1;
% I = 1;
% D = 1;
% C = P + I*(1/s) + D*(N/(1+N*(1/s)));
% 
% num_c = C.num{:};
% den_c = C.den{:};

%% Nyquist robustness
% m_max = 0.150*100000;
% delta = 0:m_max/10:m_max;
% figure
% for i = 1:length(delta)
% sys = kt/((m_tot+delta(i))*s^2+d*s);
% L = C*sys;
% nyquist(1+L)
% hold on
% end
% 
% figure
% for i = 1:length(delta)
% sys = kt/((m_tot+delta(i))*s^2+d*s);
% trans = loopsens(C,sys);
% pzmap(trans.Ti)
% hold on
% end
% 
% % m_tot_aux = m_tot + delta 
% %% Load controller
% 
% load('weak_PD.mat')
% C = shapeit_data.C_tf;
% C = tf(C);
% num_c = cell2mat(C.num);
% den_c = cell2mat(C.den);
% 
% C = shapeit_data.C_tf_z;
% C = tf(C);
% num_d = cell2mat(C.num);
% den_d = cell2mat(C.den);