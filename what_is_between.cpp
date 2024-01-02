// Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.

// For example:

// a = 1
// b = 4
// --> [1, 2, 3, 4]

#include <iostream>
#include <vector>

std::vector<int> between(int start, int end) {
    std::vector<int> arr;
    for (int i = start; i <= end; i++) {
        arr.push_back(i);
    }
    return arr;
} 