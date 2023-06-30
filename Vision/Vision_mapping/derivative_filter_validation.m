clear all, close all, clc


s =  tf('s');
N = 10:10:100;
for i = 1:length(N)
H = N(i)/(1+N(i)*(1/s)); 
bode(H) 
hold on
end

%%
Ts = 0.01;
dss = c2d(statespace,Ts);
z = tf('z',Ts);
ccform = canon(statespace,'control');
A = ccform.A;
B = ccform.B;
C = ccform.C;
D = ccform.D;

A_d = dss.A;
B_d = dss.B;
C_d = dss.C;
D_d = dss.D;

H_z = minreal(((C*B*(exp(A*Ts)-1))/(A*(z-exp(A*Ts))))+D);
H_z_fd = C_d*(z-A_d)^(-1)*B_d+D_d;

%% Validation test
t = 0:0.01:10;
x = sin(t);
x = x + 0.2 * randn(size(t));
v_val = cos(t);
N = 2;
Ts = 0.01;
v = zeros(length(t),1);
v_dumb = zeros(length(t),1);
for i = 1:length(t)-1
v(i+1) = exp(-N*Ts)*v(i)+N*x(i+1)-N*x(i);
v_dumb(i+1) = x(i+1)-x(i);
end
figure
plot(v_val)
hold on
plot(v)
plot(x)
legend('Actual derivative','Filtered derivative','original signal')

figure
plot(v_dumb)
