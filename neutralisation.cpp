// Worked Example
// ("+-+", "+--") ➞ "+-0"
// # Compare the first characters of each string, then the next in turn.
// # "+" against a "+" returns another "+".
// # "-" against a "-" returns another "-".
// # "+" against a "-" returns "0".
// # Return the string of characters.
// Examples
// ("--++--", "++--++") ➞ "000000"

// ("-+-+-+", "-+-+-+") ➞ "-+-+-+"

// ("-++-", "-+-+") ➞ "-+00"
// Notes
// The two strings will be the same length.



#include <string>

std::string neutralise(const std::string& s1, const std::string& s2) {
  std::string result = "";
  
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] == '+' && s2[i] == '+') {
      result += '+';
    } else if (s1[i] == '-' && s2[i] == '-') {
      result += '-';
    } else {
      result += '0';
    }
  }
    
  return result;
}
