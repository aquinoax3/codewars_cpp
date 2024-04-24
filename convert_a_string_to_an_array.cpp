// Write a function to split a string and convert it into an array of words.

// Examples (Input ==> Output):
// "Robin Singh" ==> ["Robin", "Singh"]

// "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]


#include <vector>
#include <string>
#include <sstream>
#include <iostream>

std::vector<std::string> string_to_array(const std::string& s) {
    std::vector<std::string> strVector;
    std::stringstream ss(s);
    std::string word = "";
    
    if (s.empty()) {
        strVector.push_back("");
        return strVector;
    }
    
    while(ss >> word ) {
        strVector.push_back(word);
    }
    
    return strVector;
}



int main() {
    std::string phrase = "Hello World";

    std::vector<std::string> newArr = string_to_array(phrase);

    for (auto word : newArr) {
        std::cout << word << std::endl;
    }
}
