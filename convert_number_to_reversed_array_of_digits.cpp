// Convert number to reversed array of digits
// Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

// Example(Input => Output):
// 35231 => [1,3,2,5,3]
// 0 => [0]


#include <string>
#include <vector>
#include <algorithm>

std::vector<int> digitize(unsigned long n) {        
    std::vector<int> newArr;
    std::string num = std::to_string(n);

    std::reverse(num.begin(), num.end());

    for (auto el : num) {
        int newNum = std::stoi(std::string(1, el));
        newArr.push_back(newNum);
    }
    return newArr;
}