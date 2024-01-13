// Write a function that checks if a given string (case insensitive) is a palindrome.

// A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.



#include <string>
#include <algorithm>

bool isPalindrom (const std::string& s1) {
    std::string strLower = s1;
    std::string revStr = s1;

    transform(strLower.begin(), strLower.end(), strLower.begin(), ::tolower); 
    
    reverse(revStr.begin(), revStr.end());
    transform(revStr.begin(), revStr.end(), revStr.begin(), ::tolower); 
    
    return strLower == revStr ? true : false;
}