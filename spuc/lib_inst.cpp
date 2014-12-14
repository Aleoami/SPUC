
/*
    Copyright (C) 2014 Tony Kirke

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//! \author Tony Kirke
// from directory: spuc_src
#include <iostream>
#include <fstream>
#include <spuc/complex.h>
#include <vector>
#include <spuc/fir.h>
namespace SPUC {

/// Dummy functions for library instantations
int dummy_cl(complex<long> z) {
  int a;
  a = real(z) + imag(z);
  return (a);
}
int dummy_vf(void) {
  double a;
  fir<double, double> z(32);
  std::vector<double> tmp;

  tmp = get_taps(z);

  a = tmp[0];
  return ((int)a);
}
}  // namespace SPUC