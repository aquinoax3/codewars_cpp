// Your task is to sum the differences between consecutive pairs in the array in descending order.

// Example
// [2, 1, 10]  -->  9
// In descending order: [10, 2, 1]

// Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

// If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).

#include <vector>
#include <algorithm>

int sumOfDifferences(std::vector<int> arr){
    int sum = 0;
    std::sort(arr.rbegin(), arr.rend());
    if (arr.size() <= 1)
        sum = 0;
    else
        for (int i = 0; i < arr.size() - 1; i++) {
            sum += arr[i] - arr[i + 1];
        }
    return sum;

}