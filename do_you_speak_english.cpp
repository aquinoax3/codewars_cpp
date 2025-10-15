// Given a string of arbitrary length with any ascii characters. Write a function to determine whether the string contains the whole word "English".

// The order of characters is important -- a string "abcEnglishdef" is correct but "abcnEglishsef" is not correct.

// Upper or lower case letter does not matter -- "eNglisH" is also correct.

// Return value as boolean values, true for the string to contains "English", false for it does not.


#include <string>
#include <algorithm>
#include <set>

bool sp_eng(const std::string& sentence) {
  std::set<char> word = {'e','n', 'g', 'l', 'i', 's', 'h' };
  std::string result = "";
  
  std::string lowercase = "";
  for (char ch : sentence) {
    lowercase += std::tolower(ch);
  }
 
  for (char ch : lowercase) {
    if (word.find(ch) != word.end()) {
      result += ch;
      
    }
  }
  std::cout << "sen: " << sentence << std::endl;
  
  std::cout << result << std::endl;
  
  return result == "english";
}
