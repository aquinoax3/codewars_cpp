// Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor. First argument is an array of numbers and the second is the divisor.

// Example(Input1, Input2 --> Output)
// [1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]

#include <vector>

std::vector<int> divisible_by(std::vector<int> numbers, int divisor) {
    std::vector<int> newArr;
    
    for (int num : numbers) {
        if(num % divisor == 0) {
        newArr.push_back(num);
        }
    }
    
    return newArr;
}