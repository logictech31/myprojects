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
## @deftypefn {} {@var{retval} =} costFunctionLinear (@var{input1}, @var{input2})
##
## @seealso{}
## @end deftypefn

## Author: hp <hp@hp-ThinkCentre-E73>
## Created: 2021-06-23

function Cost = costFunctionLinear (X, y, theta)
% here training set is equal to the number of rows of matrix X
m = size(X, 1);
% finding the hypothesis/prediction by formula

% here X = (m x n+1) and theta = (n+1 x 1) dimension-wise 
% where n are the number of features 
predictions = X * theta

% now we find the squared mean error, i.e., the difference between the
% predicted value and the actual value
% we have squared it so that we don't get a -ve value
sqme = (predictions - y).^2;
J = (1 / (2*m)) * sum(sqme)

end
