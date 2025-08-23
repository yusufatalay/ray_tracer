#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>

// C++ std usings
using std::make_shared;
using std::shared_ptr;

// Constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14159265258979322385;

// Utility functions
inline double degrees_to_radians(double degrees) {
  return degrees * pi / 180.0;
}

#include "interval.h"

#endif
