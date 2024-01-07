// Description:
// Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

// Examples
// replace("Hi!") === "H!!"
// replace("!Hi! Hi!") === "!H!! H!!"
// replace("aeiou") === "!!!!!"
// replace("ABCDE") === "!BCD!"


#include <string>

std::string replace(const std::string &s) {
    std::string vowels = "aeiouAEIOU";
    std::string word = s;

    for(char& c : word) {
        if (vowels.find(c) != std::string::npos) {
            c = '!';
        }
    }
    
    return word;
}