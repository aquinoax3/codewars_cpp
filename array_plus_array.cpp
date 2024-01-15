// I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.

// P.S. Each array includes only integer numbers. Output is a number too.



#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    int total = 0;
    
    for(int num : a) {
        total += num;
    }
    
    for(int num : b) {
        total += num;
    }
    return total; 
}