// Given an array of integers, return a new array with each value doubled.

// For example:

// [1, 2, 3] --> [2, 4, 6]

#include <vector>

std::vector<int> maps(const std::vector<int> & values) {
    std::vector<int> newArr;
    
    for(int num : values) {
        newArr.push_back(num * 2);
    }
    return newArr;
}