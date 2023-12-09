// Your task is to sum the differences between consecutive pairs in the array in descending order.

// Example
// [2, 1, 10]  -->  9
// In descending order: [10, 2, 1]

// Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

// If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).


#include <vector>
#include <algorithm>

int sumOfDifferences(std::vector<int>& arr){
 std::vector<int> reversedArr = arr;  // Create a copy
 std::reverse(reversedArr.begin(), reversedArr.end()); // Reverse the copy

    int sum = 0;
    for (int i = 0; i < ((int) reversedArr.size()) - 1; i++) {
        int dif = reversedArr[i] - reversedArr[i + 1];
        sum += dif;
    }

    return sum; // Returning the sum instead of printing it
}