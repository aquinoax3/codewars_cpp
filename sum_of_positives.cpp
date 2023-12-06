// You get an array of numbers, return the sum of all of the positives ones.

// Example [1,-4,7,12] => 1 + 7 + 12 = 20

// Note: if there is nothing to sum, the sum is default to 0.


#include <vector>

int positive_sum (const std::vector<int> arr){
  // Your code here
    int sum = 0;
    for (int num : arr) {
        if (num > 0) {
            sum += num;
        }
    }
    return arr.size() == 0 ? 0 : sum;
}