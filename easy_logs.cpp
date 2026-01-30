// Given a logarithm base X and two values A and B, return a sum of logratihms with the base X: 
// logX A + logX B

#include <cmath>

double EasyLogs(double x, double a, double b){
  return std::log(a * b) / std::log(x); // Your solution here...
}
