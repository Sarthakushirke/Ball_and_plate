clear all, close all, clc
% Controller variables
integrator_zero = 1; % [Hz]
lead_zero = 16/3; % [Hz]
lead_pole = 16*3; % [Hz]
lpf_pole = 100; % [Hz]
damping = 0.6; % [-]
gain = 100; % [-]


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