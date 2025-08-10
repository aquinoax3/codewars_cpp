// If the whole array is consecutive then return null2.

// The array will always have at least 2 elements1 and all elements will be numbers. The numbers will also all be unique and in ascending order. The numbers could be positive or negative and the first non-consecutive could be either too!

// 1 Can you write a solution that will return null2 for both [] and [ x ] though? (This is an empty array and one with a single number and is not tested for, but you can write your own example test. )

// 2

// Swift, Ruby and Crystal: nil
// Haskell: Nothing
// Python, Rust, Scala, Lambda Calculus: None
// Julia: nothing
// Nim: none(int) (See options)
// C++: std::nullopt


#include <optional>
#include <vector>

std::optional<int> firstNonConsecutive(const std::vector<int>& numbers) {
 for (int i = 0; i < numbers.size() - 1; i++) {
   if (numbers[i] + 1 != numbers[i + 1]) {
     return numbers[i + 1];
   }
 }
  
  return std::nullopt;
}
