// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

// The output should be two capital letters with a dot separating them.

// It should look like this:

// Sam Harris => S.H

// patrick feeney => P.F


#include <string>
#include <sstream>
#include <vector>
#include <cctype>

std::string abbrevName(std::string name){
    std::vector<std::string> newArr;
    std::stringstream stream(name);
    std::string storeString;
    
    while(getline(stream, storeString, ' ')) {
        newArr.push_back(storeString);
    }
    std::string result;
    char first = newArr[0][0];
    char second = newArr[1][0];
    
    result = toupper(first);
    result += ".";
    result += toupper(second);
    
    return result;
}