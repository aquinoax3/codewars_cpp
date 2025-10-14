// When provided with a letter, return its position in the alphabet.

// Input :: "a"

// Output :: "Position of alphabet: 1"

// Note: Only lowercased English letters are tested


#include <string>
#include <unordered_map>
#include <iostream>

std::string position(char letter) {
  std::unordered_map<char,std::string> alphabets;
  
  for (int i = 'a'; i <= 'z'; i++) {
    alphabets[i] = std::to_string( i - 'a' + 1);
  }
    
  return "Position of alphabet: " + alphabets[letter];
}
