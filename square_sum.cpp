// Complete the square sum function so that it squares each number passed into it and then sums the results together.

// For example, for [1, 2, 2] it should return 9 because 

#include <vector>
#include <cmath>

int square_sum(const std::vector<int>& numbers){
    int total = 0;
    for(int num : numbers) {
        total += pow(num,2);
    }
    
    return total;
}