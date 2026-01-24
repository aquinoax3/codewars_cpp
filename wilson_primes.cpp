// Wilson primes satisfy the following condition. Let 
// P
// P represent a prime number.

// Then,

// (
// P
// −
// 1
// )
// !
// +
// 1
// P
// ∗
// P
// P∗P
// (P−1)!+1
// ​
 
// should give a whole number, where 
// P
// !
// P! is the factorial of 
// P
// P.

// Your task is to create a function that returns true if the given number is a Wilson prime and false otherwise.


#include <iostream>

bool amIWilson(unsigned n) {
  int numerator = 1;
  int denominator = n * n;
  
  for (int i = 1; i <= n; i++) {
    numerator *= i;
  }
  
  numerator = numerator + 1;
  
  std::cout << numerator << std::endl;
  std::cout << denominator << std::endl;
  
  bool result = numerator % denominator == 0;
  
  std::cout << result << std::endl;
  
  
  
  return false;
}

