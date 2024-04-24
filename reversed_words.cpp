// Complete the solution so that it reverses all of the words within the string passed in.

// Words are separated by exactly one space and there are no leading or trailing spaces.

// Example(Input --> Output):

// "The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"

#include <string>
#include <sstream>
#include <vector>

std::string reverse_words(const std::string &str) {
    std::vector<std::string> newArr;
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (ss >> word)
    {
        newArr.push_back(word);
    }

    for (int i = newArr.size() - 1; i >= 0; i--)
    {
        result += newArr[i] + " ";
    }
    result.pop_back();
    return result;
}