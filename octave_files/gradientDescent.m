## Copyright (C) 2021 hp
## 
## This program is free software; you can redistribute it and/or modify it
## under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 3 of the License, or
## (at your option) any later version.
## 
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
## 
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.

## -*- texinfo -*- 
## @deftypefn {} {@var{grad} =} gradientDescent (@var{X}, @var{y}, @var{theta})
##
## @seealso{}
## @end deftypefn

## Author: hp <hp@hp-ThinkCentre-E73>
## Created: 2021-06-23

function theta = gradientDescent (X, y, theta)
m = size(X, 1);
i = 1;
% This is just a sample for gradient descent
% you can adjust the value of 'i' as per your need
  while i <= 5
    % adjust alpha(Learning rate if J starts to increase)
    alpha = 0.0003;
    % prints the predictions
    predictions = X * theta;
    % now we find the squared mean error, i.e., the difference between the
    % predicted value and the actual value
    % we have squared it so that we don't get a -ve value
    sqme = (predictions - y);
    % prints the squared mean error
    J = (1 / (2*m)) * sum(sqme)
    grad = (1/m) * sum(sqme*X(i));
    theta = theta - alpha*grad;
    % prints the value of new theta
    i = i + 1;
endwhile
endfunction
