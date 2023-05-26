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
bode(sys)
num_p = cell2mat(sys.num);
den_p = cell2mat(sys.den);

%% Load controller
load('controller_lowpass.mat') % No integrator  
% C = shapeit_data.C_tf_z;
C = shapeit_data.C_tf;
C = tf(C);
num_c = cell2mat(C.num);
den_c = cell2mat(C.den);


%% Nyquist robustness
m_max = 0.150*100000;
delta = 0:m_max/10:m_max;
figure
for i = 1:length(delta)
sys = kt/((m_tot+delta(i))*s^2+d*s);
L = C*sys;
nyquist(1+L)
hold on
end

figure
for i = 1:length(delta)
sys = kt/((m_tot+delta(i))*s^2+d*s);
trans = loopsens(C,sys);
pzmap(trans.Ti)
hold on
end

% m_tot_aux = m_tot + delta 

