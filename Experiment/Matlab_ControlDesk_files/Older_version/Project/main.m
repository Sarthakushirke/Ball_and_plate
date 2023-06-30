clc; clear; close all;

% Calculation of the mass
rho = 1180;                 % [kg/m^3]
plate_length = 0.39;        % [m]
side_plate_height = 0.035;  % [m]
thickness = 0.0048 ;        % [m]

side_plate_m3 = plate_length * side_plate_height * thickness;   % [m^3]
foundation_m4 = plate_length * plate_length * thickness;        % [m^3]
total_m3 = 4 * side_plate_m3 + foundation_m4;                   % [m^3]

m_plate = total_m3*rho; % [kg]

% Paramters of the motor model
Kt = 11;                % [N/A] - motor constant
m = 0.135 + m_plate/3;  % [kg] - mass to be moved by the motor (approximate)
D = 0;                  % [Ns/m] % Vicious friction - Didn't know, so for now we assume no friction (we could see that this was not the actual

num = [Kt];
den = [m D 0];

% Motor model
sys = tf(num,den);
bode(sys)

%controller PID:  with Kp = 15.9, Ki = 33.4, Kd = 1.89

%% Load controller
load('controller_lowpass.mat') % No integrator  
% C = shapeit_data.C_tf_z;
C = shapeit_data.C_tf;
C_shapeit = tf(C);
num_c = cell2mat(C.num);
den_c = cell2mat(C.den);
s = tf('s');

lead_zero = 3.33;
lead_pole = 30;
lpf_pole = 100;
damping = 0.6;
gain = 100;

C_gain = gain;
C_lead = ((1/(2*pi*lead_zero))*s+1)/((1/(2*pi*lead_pole))*s+1);
C_lpf = 1/((1/(2*pi*lpf_pole)^2)*s^2 + ((2*damping)/(2*pi*lpf_pole))*s+1);
C = C_gain*C_lead*C_lpf;
bode(C_shapeit)
hold on
bode(C)

% Control parameters for Simulink model
numc_mi = C.Numerator{:};
denc_mi = C.Denominator{:};

%%
% %% Nyquist robustness
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