// Write a function which calculates the average of the numbers in a given list.

// Note: Empty arrays should return 0.


#include <vector>

double calcAverage(const std::vector<int>& values){
    double sum = 0;
    
    for (int num : values) {
        sum += num;
    }
    
    double avg = sum / values.size();
    
    return avg;
}