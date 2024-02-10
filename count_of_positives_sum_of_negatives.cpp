// Given an array of integers.

// Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

// If the input is an empty array or is null, return an empty array.

// Example
// For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
    std::vector<int> newArr;
    int pos = 0;
    int neg = 0;
    for (auto num : input){
        if( num <= 0) {
            neg += num;
        } else {
            pos++;
        }
        }
    newArr.push_back(pos);
    newArr.push_back(neg);
    return input.size() == 0 ? input : newArr;

}