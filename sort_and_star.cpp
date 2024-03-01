// You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.

// The returned value must be a string, and have "***" between each of its letters.

// You should not remove or add elements from/to the array.



#include <vector>
#include <string>

#include <vector>
#include <string>

std::string twoSort(std::vector<std::string> s)
{
    std::string result = "";
    sort(s.begin(), s.end());
        for (int i = 0; i < s[0].size(); i++) {
        result += s[0][i];
        result += "***";
        }
    
    result.pop_back();
    result.pop_back();
    result.pop_back();
    
    return result;
}