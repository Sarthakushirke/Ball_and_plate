clear; close all; clc

g = 9.81;
Ac = [0 1 0 0; 0 0 0 0; 0 0 0 1; 0 0 0 0];
Bc = (-5/7)*g*[0 0; 1 0; 0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0; 0 0];
x0 = [0;0;0;0]; % Initial point

Ts = 0.1;
ss_c = ss(Ac, Bc, Cc, Dc);
sys_tf = tf(ss_c);
sys_tf1 = tf(ss_c(1, 1));
sys_tf2 = tf(ss_c(2, 2));

[A_1, B_1, C_1, D_1] = ssdata(sys_tf1);
[A_2, B_2, C_2, D_2] = ssdata(sys_tf2);

dsys1=c2d(sys_tf1,Ts,'z');
[num,den]=tfdata(dsys1,'v');

dsys2=c2d(sys_tf2,Ts,'z');
[num2,den2]=tfdata(dsys2,'v');


%% PID tunings from SISOTOOL
s = tf('s');

kp = -15.248335277286007;
ki = -17.124007265757687;
kd = -3.334131697914507;

N = 1/0.007643411387293;
C1 = kp+ki*(1/s)+kd*(N/(1+N*(1/s)));

%% Test stability
s = tf('s');
step(sys_tf1*C1/(1+sys_tf1*C1))

%% ref

t = Ts*(0:N);

r = 0.1; % Radius of the circular reference trajectory
T = 20; % Period of the circular reference trajectory

x_center = 0.1;
y_center = 0.1;
x_ref = [r*cos(2*pi*t/T); zeros(1, N+1)];
y_ref = [zeros(1, N+1); r*sin(2*pi*t/T)]; % Reference trajectory
x_ref(1,:) = x_ref(1,:) + x_center;
y_ref(2,:) = y_ref(2,:) + y_center;

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

%% Simulate in loop
% Define the saturation limits
lowerLimit = -1;
upperLimit = 1;

% Define the reference signal
t = 0:0.01:10;  % Time vector
r = sin(t);     % Example reference signal

% Initialize the input, output, and error vectors
u = zeros(1,length(t));
y = zeros(2,length(t));
x = zeros(2,length(t));
error_previous = 0;
integral = 0;
derivative_previous = 0;

% Define the controller gains
kp = -15.248335277286007;
ki = -17.124007265757687;
kd = -3.334131697914507;
N = 1/0.007643411387293;

ss_tf1 = ss(sys_tf1);

% Simulation loop
for i = 2:length(t)
    % Compute the error between the reference and system output
    error = r(i) - y(i-1);

    % Compute the proportional term
    P = Kp * error;

    % Compute the integral term
    integral = integral + Ki * error;

%     % Apply anti-windup to the integral term
%     if integral > upperLimit
%         integral = upperLimit;
%     elseif integral < lowerLimit
%         integral = lowerLimit;
%     end

    % Compute the derivative term
    derivative = Kd * (N * (error - error_previous) - (N - 1) * derivative_previous);

    % Compute the control signal
    control_signal = P + integral + derivative;

    % Apply saturation to the control signal
    u(i) = max(min(control_signal, upperLimit), lowerLimit);

    % Compute the system response
    x(:,i+1) = ss_tf1.A*x(:,i)+ss_tf1.B*u(i);
    y(:,i+1) = ss_tf1.C*x(:,i);

    % Update the previous error and derivative for the next iteration
    error_previous = error;
    derivative_previous = derivative;
end


