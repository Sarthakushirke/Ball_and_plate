clear all; close all;
g = 9.81;
Ac = [0 1 0 0; 0 0 0 0; 0 0 0 1; 0 0 0 0];
Bc = (-5/7)*g*[0 0; 1 0; 0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0; 0 0];
x0 = [0; 0.1; 0; 0.2]; % Initial point

Ts = 0.1;
ss_c = ss(Ac, Bc, Cc, Dc); % state space definition
ss_d = c2d(ss_c, Ts, 'zoh'); % discretization using MATLAB function
A = ss_d.A;
B = ss_d.B;
C = ss_d.C;
D = ss_d.D;
[nx, nu] = size(B);

Q = 1000 * eye(nx);
R = 0.01 * eye(nu);

N = 20; % Prediction horizon
[Phi, Gamma] = ABN2PhiGamma(A, B, N);

J = C;
for i = 2:N
    J = blkdiag(J, C);
end

[Psi, Omega] = QRPN2PsiOmega(Q, R, Q, N);
G = 2 * (Psi + Gamma' * Omega * Gamma);
F = 2 * Gamma' * Omega * Phi;

k_sim = 1000;
t = Ts * (0:k_sim); % Time vector
r = 0.1; % Radius of the circular reference trajectory
T = 20; % Period of the circular reference trajectory
x_center = 0.1;
y_center = 0.1;
x_ref = [r * cos(2 * pi * t / T); zeros(1, k_sim+1); r * sin(2 * pi * t / T); zeros(1, k_sim+1)]; % Reference trajectory
x_ref(1, :) = x_ref(1, :) + x_center; % Add x-coordinate of the center
x_ref(3, :) = x_ref(3, :) + y_center; % Add y-coordinate of the center

% MPC control law
k_mpp = [eye(nu) zeros(nu, 2 * (N - 1))];
K_mpc1 = -k_mpp * G^-1 * F;

xk = [x0 zeros(nx, k_sim)]; % Initializing the matrix of displacements
uk = zeros(nu, k_sim); % Initializing the input matrix
for k = 1:k_sim
    tracking_error = xk(:, k) - x_ref(:,k);
    uk(:, k) = K_mpc1 * tracking_error; % Constructing the input matrix using control law
    xk(:, k+1) = A * xk(:, k) + B * uk(:, k); % Compute displacement matrix using state-space equation
end

figure(1)
plot(t, xk(1,:), 'b', t, x_ref(1,:), 'r--') % Plot x component of the state and reference trajectory
title('MPC - Reference Tracking');
xlabel('t');
ylabel('x');
legend('Tracked Trajectory', 'Reference Trajectory');

figure(2)
plot(t, xk(3,:), 'b', t, x_ref(3,:), 'r--') % Plot y component of the state and reference trajectory
title('MPC - Reference Tracking');
xlabel('t');
ylabel('y');
legend('Tracked Trajectory', 'Reference Trajectory');

figure(3)
plot(xk(1,:), xk(3,:), 'b', x_ref(1,:), x_ref(3,:), 'r--') % Plot the trajectory in the xy plane
title('MPC - Reference Tracking');
xlabel('x');
ylabel('y');
legend('Tracked Trajectory', 'Reference Trajectory');
