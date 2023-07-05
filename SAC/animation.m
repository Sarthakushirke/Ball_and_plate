%% Function for animation
function animation(T, x_, y_, x, y, t, filename)
    % Function for animating surf functions with the use of \usepackage[autoplay, loop]{animate}
    % in latex. Here the data T = [width(x), width(y), width(t)], x_ and 
    % y_ are the meshgrid of x and y. And the string(filename) is the location where all 
    % the data gets dumped. 
    %
    % This function generates for every t an image to use for the animate
    % latex package so be aware of large values of width(t)!
    TaxisMin = min(min(min(T)));
    TaxisMax = max(max(max(T)));   

    font = 15;
    dir = 'figures\' + string(filename);
    if ~exist(dir, 'dir')
        mkdir(dir)
    end

    fig = figure('Name', 'Reward distribution over time');
    max_T = max(max(T(:, :, 1)));
    min_T = min(min(T(:, :, 1)));

    v = VideoWriter(dir + '\' + string(filename) + '.mp4', 'MPEG-4');
    % v = VideoWriter(dir + '\' + string(filename) + '.gif', 'GIF');
    open(v)
    for i = 1:width(t)
        surf(x_, y_, T(:, :, i)); set(gcf,'color','w'); set(gcf, 'Position', [200 150 800 600])
%         title('Elapsed time: ' + string(round(t(i), 0)) + '/' + string(max(t)) + ' sec')
        title(sprintf('Reward over time = %g [s]', round(t(i))),Interpreter='latex',FontSize=font);
        xlabel('x [m]',Interpreter='latex',FontSize=font); 
        ylabel('y [m]',Interpreter='latex',FontSize=font); 
        zlabel('r(x,y,t) [-]',Interpreter='latex',FontSize=font);
        axis([min(x) max(x) min(y) max(y) min_T max_T])
        colorbar
        caxis([TaxisMin TaxisMax]);
        drawnow;

        frame = getframe(fig);
        imwrite(frame.cdata, fullfile(dir, sprintf(string(filename) + '-%d.jpg', i)));
        for j = 1:2
            writeVideo(v, frame);
        end
    end
    close(v)
end