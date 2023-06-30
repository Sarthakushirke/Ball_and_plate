clear all; close all;clc;

%% Load simulink and parameters
%open_system('ball_plate_rl.slx')
open_system('ball_plate_refrence_tracking.slx')
ball_plate_params

% creating observer and action spaces
numObs =14;  % number of obs multitarget
numAct = 2;   % Number of actions

obsInfo = rlNumericSpec([numObs 1]);

actInfo = rlNumericSpec([numAct 1]);
actInfo.LowerLimit = -(12*pi)/180;
actInfo.UpperLimit = (12*pi)/180;

%max theta = 6 deg
%max phi = 6
%creating simulink environment 
mdl = "ball_plate_refrence_tracking";
blk = mdl + "/RL Agent";
env = rlSimulinkEnv(mdl,blk,obsInfo,actInfo);

env.ResetFcn = @system_reset;

Ts = 0.01;
Tf = 6;
%% creating agent


% Set the random seed for reproducibility.
rng(0)

% Define the network layers.
cnet = [
    featureInputLayer(numObs,"Normalization","none","Name","observation")
    fullyConnectedLayer(256,"Name","fc1")
    concatenationLayer(1,2,"Name","concat")
    reluLayer("Name","relu1")
    fullyConnectedLayer(128,"Name","fc3")
    reluLayer("Name","relu2")
    fullyConnectedLayer(64,"Name","fc4")
    reluLayer("Name","relu3")
    fullyConnectedLayer(1,"Name","CriticOutput")];
actionPath = [
    featureInputLayer(numAct,"Normalization","none","Name","action")
    fullyConnectedLayer(128,"Name","fc2")];

% Connect the layers.
criticNetwork = layerGraph(cnet);
criticNetwork = addLayers(criticNetwork, actionPath);
criticNetwork = connectLayers(criticNetwork,"fc2","concat/in2");

% initializing parameters in critic networks
criticdlnet = dlnetwork(criticNetwork,'Initialize',false);
criticdlnet1 = initialize(criticdlnet);
criticdlnet2 = initialize(criticdlnet);

% creating critic functions
critic1 = rlQValueFunction(criticdlnet1,obsInfo,actInfo, ...
    "ObservationInputNames","observation");
critic2 = rlQValueFunction(criticdlnet2,obsInfo,actInfo, ...
    "ObservationInputNames","observation");


% Create the actor network layers.
anet = [
    featureInputLayer(numObs,"Normalization","none","Name","observation")
    fullyConnectedLayer(256,"Name","fc1")
    reluLayer("Name","relu1")
    fullyConnectedLayer(128,"Name","fc2")
    reluLayer("Name","relu2")];
meanPath = [
    fullyConnectedLayer(64,"Name","meanFC")
    reluLayer("Name","relu3")
    fullyConnectedLayer(numAct,"Name","mean")];
stdPath = [
    fullyConnectedLayer(numAct,"Name","stdFC")
    reluLayer("Name","relu4")
    softplusLayer("Name","std")];

% Connect the layers.
actorNetwork = layerGraph(anet);
actorNetwork = addLayers(actorNetwork,meanPath);
actorNetwork = addLayers(actorNetwork,stdPath);
actorNetwork = connectLayers(actorNetwork,"relu2","meanFC/in");
actorNetwork = connectLayers(actorNetwork,"relu2","stdFC/in");

% defining the actor function 
actordlnet = dlnetwork(actorNetwork);
actor = rlContinuousGaussianActor(actordlnet, obsInfo, actInfo, ...
    "ObservationInputNames","observation", ...
    "ActionMeanOutputNames","mean", ...
    "ActionStandardDeviationOutputNames","std");

%plotting networks
figure(1)
plot(criticNetwork)
figure(2)
plot(actorNetwork)

% specifiying hyperparameters for training 
agentOpts = rlSACAgentOptions( ...
    "SampleTime",Ts, ...
    "TargetSmoothFactor",1e-3, ...    
    "ExperienceBufferLength",1e6, ...
    "MiniBatchSize",128, ...
    "NumWarmStartSteps",1000, ...
    "DiscountFactor",0.99);

% setting optimizer as ADAM
agentOpts.ActorOptimizerOptions.Algorithm = "adam";
agentOpts.ActorOptimizerOptions.LearnRate = 1e-3;
agentOpts.ActorOptimizerOptions.GradientThreshold = 1;

for ct = 1:2
    agentOpts.CriticOptimizerOptions(ct).Algorithm = "adam";
    agentOpts.CriticOptimizerOptions(ct).LearnRate = 1e-3;
    agentOpts.CriticOptimizerOptions(ct).GradientThreshold = 1;
end
%1e-3 LR for agent 0.04 in reality its 0.03 
agent = rlSACAgent(actor,[critic1,critic2],agentOpts);

%% Training 

trainOpts = rlTrainingOptions(...
    "MaxEpisodes", 5000, ...
    "MaxStepsPerEpisode", floor(Tf/Ts), ...
    "ScoreAveragingWindowLength", 100, ...
    "Plots", "training-progress", ...
    "StopTrainingCriteria", "AverageReward", ...
    "StopTrainingValue", 2000, ...
    "UseParallel", false);

stats = train(agent,env,trainOpts);
%% Simulation 


ball.x0 = 0;
ball.y0 = 0;

in = Simulink.SimulationInput(mdl);
in = setVariable(in,"ball",ball);


out = sim(in);
%% Reset Function :

function in = system_reset(in)
    % Ball parameters
    ball.radius = 0.02;     % m
    ball.mass   = 0.0027;   % kg
    ball.shell  = 0.0002;   % m
    
    % Calculate ball moment of inertia.    
    ball.moi = calcMOI(ball.radius,ball.shell,ball.mass);
    
    % Initial conditions. +z is vertically upward.
    % Randomize the x and y distances within the plate.
    ball.x0  = 0;  % m, initial x distance from plate center
    ball.y0  = 0;  % m, initial y distance from plate center
    ball.z0  = ball.radius;         % m, initial z height from plate surface
    
    ball.dx0 = 0;   % m/s, ball initial x velocity
    ball.dy0 = 0;   % m/s, ball initial y velocity
    ball.dz0 = 0;   % m/s, ball initial z velocity
    
    % Contact friction parameters
    ball.staticfriction     = 0.5;
    ball.dynamicfriction    = 0.3; 
    ball.criticalvelocity   = 1e-3;
    
    % Convert coefficient of restitution to spring-damper parameters.
    coeff_restitution = 0.89;
    [k, c, w] = cor2SpringDamperParams(coeff_restitution,ball.mass);
    ball.stiffness = k;
    ball.damping = c;
    ball.transitionwidth = w;
    
    in = setVariable(in,"ball",ball);
    

   
    g = 9.80665;

    init_angle_phi =0;
    init_angle_theta =0;
    U0 = [init_angle_phi init_angle_theta];
    in = setVariable(in,"U0",U0);

end
