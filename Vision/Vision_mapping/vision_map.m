clear all, close all, clc

lx = 0.39;
ly = 0.39;
calibrate_1 = [10,10];
calibrate_2 = [300,0];
calibrate_3 = [320,280];
calibrate_4 = [20,300];

center = calibrate_1+((calibrate_3-calibrate_1)/2);
query = [310 , 250]; 
v = query-center;
