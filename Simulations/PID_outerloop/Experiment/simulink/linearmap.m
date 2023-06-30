function output = linearmap(cal1,cal2,cal3,cal4,query)
center = cal1 + ((cal3-cal1)/2);
v_q = query - center;
min_px = min([cal1(1),cal2(1),cal3(1),cal4(1)])- center(1);
min_py = min([cal1(2),cal2(2),cal3(2),cal4(2)])- center(2);
max_px = max([cal1(1),cal2(1),cal3(1),cal4(1)])- center(1);
max_py = max([cal1(2),cal2(2),cal3(2),cal4(2)])- center(2);
a_x = ((0.1950)-(-0.1950))/(max_px-min_px);
a_y = ((0.1950)-(-0.1950))/(max_py-min_py);
b_x = -0.1950-(a_x*min_px);
b_y =  -0.1950-(a_y*min_py);
% output = [a_x*query(1)+b_x,a_y*query(2)+b_y];
output = [-( a_y*v_q(2)+b_y),a_x*v_q(1)+b_x];
end

