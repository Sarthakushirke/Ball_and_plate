% clc; clear; close all;
clc; close all;
%% Constants
sim_time = 1;
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


%% Sisotool get PID values
% sisotool(sys,C)
pid_val = pid(C);
Kp = pid_val.Kp
Ki = pid_val.Ki
Kd = pid_val.Kd
N = 1/pid_val.Tf

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
% N = 100;
% P = 1;
% I = 1;
% D = 1;
% C = P + I*(1/s) + D*(N/(1+N*(1/s)));
% 
% num_c = C.num{:};
% den_c = C.den{:};

%% import PID sisotool
%% Load controller
% load('controller_lowpass_integrator.mat') % Load shapeit controller
% % C = shapeit_data.C_tf_z;
% C = shapeit_data.C_tf;
% C_shapeit = tf(C);

% All in Hertz
integrator_zero = 1;
lead_zero = 16/3;
lead_pole = 16*3;
lpf_pole = 100;
damping = 0.6;
gain = 100;


C_gain = gain;
C_lead = ((1/(2*pi*lead_zero))*s+1)/((1/(2*pi*lead_pole))*s+1);
C_lpf = 1/((1/(2*pi*lpf_pole)^2)*s^2 + ((2*damping)/(2*pi*lpf_pole))*s+1);
C_int = (s+2*pi*integrator_zero)/s;
C_shapeit_manually = C_gain*C_lead*C_lpf*(tf(cell2mat(C_int.num),1)); % only the zero part of the integrator
bode(C_shapeit_manually)

num_si = C_shapeit_manually.num{:};
den_si = C_shapeit_manually.den{:};
C_shapeit_manually_aux = C_shapeit_manually*(1/s);
step((C_shapeit_manually_aux*sys)/(1+C_shapeit_manually_aux*sys))

%% Controller other
sim_time = 1;
s = tf('s');
sys_bench = 25.473/(s*(s+38.21));
C_bench = ((2.1508*10^6)*(s+43.72)*(s+5.209))/(s*(s+3007)*(s+180.6));
num_c_bench = C_other.Numerator{:};
den_c_bench = C_other.Denominator{:};
num_sys_bench = sys.num{:};
den_sys_bench = sys.den{:};
step(sys_bench*C_bench/(1+sys_bench*C_bench))

% Without integrator

num_c_bench_wi = num_c_bench;
den_c_bench_wi = den_c_bench(1:end-1);
C_bench_wi = tf(num_c_bench_wi,den_c_bench_wi);

%% Controller control system designer to TF

C_csd = tf(C);
C_csd_num = C_csd.num{:};
C_csd_den = C_csd.den{:};


