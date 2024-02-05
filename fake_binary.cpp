// Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.

// Note: input will never be an empty string

#include <iostream>
#include <string>

std::string fakeBin(std::string str) {
    std::string newBin = "";
    for (int i = 0; i < str.size(); i++) {
        if (int(str[i] - '0') < 5) {
        newBin += '0';
        } else {
        newBin += '1';
        }
    }
    return newBin;
}