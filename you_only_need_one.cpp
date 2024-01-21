// You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

// Array can contain numbers or strings. X can be either.

// Return true if the array contains the value, false if not.


#include <vector>
#include <string>
#include <algorithm>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    if(std::find(seq.begin(), seq.end(), elem) != seq.end()) {
        return true;
    } else {
        return false;
    }
}