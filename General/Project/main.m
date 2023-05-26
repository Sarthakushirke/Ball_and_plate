clear all, close all, clc

lx = 39/100; 
ly = 39/100;
m_slider = 0.135; % kg
depth = 34.8/1000; 
thickness = 4.8/1000; 
V_outer = lx*ly*depth;
V_inner = (lx-2*thickness)*(ly-2*thickness)*(depth-thickness);
rho = 1180; %kg/m^3
V = (V_outer-V_inner);
m_plate = V*rho;

% Model
s = tf('s');
kt = 11; % N/A motor constant
m_tot = m_slider+m_plate/3; 
d = 0; % Motor friction
sys = kt/(m_tot*s^2+d*s);

% Load controller
% load('controller_lowpass.mat') % No integrator  
% C = shapeit_data.C_tf_z;
% C = tf(C);
% numc_mi = cell2mat(C.num);
% denc_mi = cell2mat(C.den);
