clear all, close all, clc

% First calibrate the points where cal1 is the top left corner (when
% looking on the screen!!) cal2 is top right, cal3 is bottom right, cal4
% is bottom left

cal1 = [94,28];
cal2 = [516,19];
cal3 = [540,456];
cal4 = [91,463];

center = cal1 + ((cal3-cal1)/2);
min_px = min([cal1(1),cal2(1),cal3(1),cal4(1)])- center(1);
min_py = min([cal1(2),cal2(2),cal3(2),cal4(2)])- center(2);
max_px = max([cal1(1),cal2(1),cal3(1),cal4(1)])- center(1);
max_py = max([cal1(2),cal2(2),cal3(2),cal4(2)])- center(2);
a_x = ((0.1950)-(-0.1950))/(max_px-min_px);
a_y = ((0.1950)-(-0.1950))/(max_py-min_py);
b_x = -0.1950-(a_x*min_px);
b_y =  -0.1950-(a_y*min_py);