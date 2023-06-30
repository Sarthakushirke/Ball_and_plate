% These are the Simscape models for the ball/square on plate for book "Digital Twin Development and Deployment on the Cloud" Elsevier, 2020, Nassim Khaled, Bibin Pattel and Affan Siddiqui
% 
% Website for the book and other resources: https://www.practicalmpc.com/
% 
% Chapter 4
% Application #2
% Model Name: ball_on_plate.slx and square_on_plate.slx
% Instructions: 
% Just run the simulation.
% Hardware: https://www.roboholicmaniacs.com/product-page/ball-on-plate

%Instructions#1 : run the below command and then run the Simulink model ball_on_plate.slx
mex ballplateforces.c


%Instructions#2: run the below command and then run the Simulink model square_on_plate.slx
mex squareplateforces.c