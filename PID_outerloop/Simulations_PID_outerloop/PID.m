clear all;
close all;

g = 9.81;
Ac = [0 1 0 0; 0 0 0 0; 0 0 0 1; 0 0 0 0];
Bc = (-5/7)*g*[0 0; 1 0; 0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0; 0 0];
x0 = [0;0;0;0]; % Initial point

Ts = 0.1;
ss_c = ss(Ac, Bc, Cc, Dc);
sys_tf1 = tf(ss_c(1, 1));
sys_tf2 = tf(ss_c(2, 2));
[A_1, B_1, C_1, D_1] = ssdata(sys_tf1);
[A_2, B_2, C_2, D_2] = ssdata(sys_tf2);
[nx,nu] = size(B_1);

% PID tunings from SISOTOOL
s = tf('s');
kp1 = -15.248335277286007;
ki1 = -17.124007265757687;
kd1 = -3.334131697914507;
N = 1/0.007643411387293;
C1 = kp1+ki1*(1/s)+kd1*(N/(1+N*(1/s)));
kp2 = kp1;
ki2 = ki1;
kd2 = kd1;

%% Test stability
s = tf('s');
step(sys_tf1*C1/(1+sys_tf1*C1))

%% initialize


%% ref
% reference 
N = 1000; % Samples
t = Ts*(0:N);

r = 0.1; % Radius of the circular reference trajectory
T = 20; % Period of the circular reference trajectory

x_center = 0.1;
y_center = 0.1;
x_ref = r*cos(2*pi*t/T);
y_ref = r*sin(2*pi*t/T); % Reference trajectory
x_ref = x_ref + x_center;
y_ref = y_ref + y_center;

%% Simulate seperatly
[px] = lsim(feedback(sys_tf1*C1,1),x_ref,t);
[py] = lsim(feedback(sys_tf1*C1,1),y_ref,t);
plot(px,py)

