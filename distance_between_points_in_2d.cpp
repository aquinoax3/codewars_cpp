// This series of katas will introduce you to basics of doing geometry with computers.

// Point objects have attributes x and y.

// Write a function calculating distance between Point a and Point b.

// Input coordinates fit in range  50 ⩽ x, y ⩽ 50
// Tests compare expected result and actual answer with tolerance of 1e-6.



#include <iostream>
#include <cmath>

double distance_between_two_points(const Point& a, const Point& b) {
  double point1 = pow(a.y - a.x, 2);
  double point2 = pow(b.y - b.x, 2);
  
  return std::sqrt(point1 + point2); // TODO
}
