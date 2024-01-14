// Write a function to split a string and convert it into an array of words.

// Examples (Input ==> Output):
// "Robin Singh" ==> ["Robin", "Singh"]

// "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]




#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> string_to_array(const std::string& s) {
    if (s.empty()) return std::vector<std::string>{""};
    
    std::vector<std::string> strVector;

    // Creates an object name "iss" with the content of "s"
    std::istringstream iss(s);
    
    // Itereate through "iss" object and assign its contents into the "strVector" vector
    strVector.assign(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>());
    
    
    return strVector;
}