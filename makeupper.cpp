#include <string>
// Write a function which converts the input string to uppercase.
std::string makeUpperCase (const std::string& input_str){
    std::string newStr = input_str;
    std::string upper = "";
    for (auto & c: newStr){
        c = toupper(c);
        upper += c;
    } 
    return upper;
}