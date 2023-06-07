clc; clear; close all;

% Constants
sim_time = 100;
s = tf('s');
Kt = 11;   % [N/A] - motor constant
lx = 39/100; 
ly = 39/100;
m_slider = 0.135; % kg
depth = 34.8/1000; 
thickness = 4.8/1000; 
rho = 1180; %kg/m^3

% Mass calculation
V_outer = lx*ly*depth;
V_inner = (lx-2*thickness)*(ly-2*thickness)*(depth-thickness);
V = (V_outer-V_inner);
m_plate = V*rho;
m = (1/3*m_plate)+m_slider;
d = 0;  % damping coefficient, assumed 0 for now

% Motor model
sys = Kt/(s^2*m+d*s);
bode(sys)
num_sys = sys.num{:};
den_sys = sys.den{:};

%% Load controller
load('controller_lowpass_integrator.mat') % Load shapeit controller
% C = shapeit_data.C_tf_z;
C = shapeit_data.C_tf;
C_shapeit = tf(C);

% All in Hertz
integrator_zero = 1;
lead_zero = 3.33;
lead_pole = 30;
lpf_pole = 100;
damping = 0.6;
gain = 100;

C_gain = gain;
C_lead = ((1/(2*pi*lead_zero))*s+1)/((1/(2*pi*lead_pole))*s+1);
C_lpf = 1/((1/(2*pi*lpf_pole)^2)*s^2 + ((2*damping)/(2*pi*lpf_pole))*s+1);
C_int = (s+2*pi*integrator_zero)/s;
C_shapeit_manually = C_gain*C_lead*C_lpf*(tf(cell2mat(C_int.num),1)); % only the zero part of the integrator
bode(C_shapeit)
hold on
bode(C)

num_c = C_shapeit_manually.num{:};
den_c = C_shapeit_manually.den{:};
sys_cl = feedback(sys*C,1);
figure
step(sys_cl)

%% Control parameters for Simulink model
numc_mi = C.Numerator{:};
denc_mi = C.Denominator{:};

% sisotool(sys,C)

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

%% sys ID on integrator of simulink
% average = 1;
% nfft = length(out.input_int)/average;
% window = hann(nfft);
% [txy,f] = tfestimate(out.input_int,out.output_int,window,nfft/2,nfft);
% frf = frd(txy,f);
% bode(frf)

%% PID controlle test properness
N = 100;
P = 1;
I = 1;
D = 1;
C = P + I*(1/s) + D*(N/(1+N*(1/s)));

num_c = C.num{:};
den_c = C.den{:};

%% import PID sisotool
pid_struct = pid(C);
Kp = pid_struct.Kp;
Ki = pid_struct.Ki;
Kd = pid_struct.Kd;
N = pid_struct.Tf;

