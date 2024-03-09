// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

#include <string>

std::string removeExclamationMarks(std::string str){
    std::string result = "";
    for(auto letter: str) {
        if(letter != '!') {
        result += letter;
        }
    }
    return result;
}