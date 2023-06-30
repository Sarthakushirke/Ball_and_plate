

%% -------- BALL PARAMETERS --------

% Target positon
target_pos_x = 0;
target_pos_y = 0;

% Physical parameters
ball.radius = 0.02;     % m
ball.mass   = 0.0027;   % kg
ball.shell  = 0.0002;   % m

% Calculate ball moment of inertia
ball.moi = calcMOI(ball.radius,ball.shell,ball.mass);

% Initial conditions. +z is vertically downward
ball.x0  = 0*0.07;       % m, ball initial x distance from center of plate
ball.y0  = 0*0.04;       % m, ball initial height from the top surface of plate
ball.z0  = ball.radius;       % m, ball initial z distance from center of plate

ball.dx0 = 0;       % m/s, ball initial x speed from center of plate
ball.dy0 = 0;       % m/s, ball initial height from the top surface of plate
ball.dz0 = 0;       % m/s, ball initial x distance from center of plate

% Contact friction parameters
ball.staticfriction     = 0.5;
ball.dynamicfriction    = 0.3;     % Simscape Multibody default
ball.criticalvelocity   = 1e-3;    % Simscape Multibody default, m/s

% convert coefficient of restitution to spring-damper parameters
coeff_restitution = 0.89;
[k, c, w] = cor2SpringDamperParams(coeff_restitution,ball.mass);
ball.stiffness = k;
ball.damping = c;
ball.transitionwidth = w;

clear r1 r2 I e dT

%% -------- system --------

%gravity
g = 9.80665;
phi = 0;
theta =0;
U0 = [phi theta];

%% -------- GLASS PLATE PARAMETERS --------

plate.length = 0.39;     % m, radius of plate
plate.width  = 0.39;     % m, radius of plate
plate.thickness = 0.005;                    % m, thicknes of plate
plate.mass = 0.2;                        % m, mass of plate

w = plate.width;
h = plate.length;
d = plate.thickness;
plate.moi = 1/12 * plate.mass * [(h^2+d^2), (w^2+d^2), (w^2+h^2)];     % kgm^4, moment of inertia of plate

%% -------- VISUALIZATION --------
doViz = true;

% addons = matlab.addons.installedAddons;
% spkgInstalled = ismember("RO_Robot_Lib",addons.Identifier);
% 
% if spkgInstalled
%     spkgroot = matlabshared.supportpkg.getSupportPackageRoot;
%     meshPath = fullfile(spkgroot,'toolbox','robotics','supportpackages', ...
%         'robotlibrary','Robots','kortex_v12_description','arms', ...
%         'gen3','7dof','meshes');
%     addpath(meshPath);
% end
