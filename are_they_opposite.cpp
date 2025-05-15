// Task
// Give you two strings: s1 and s2. If they are opposite, return true; otherwise, return false. Note: The result should be a boolean value, instead of a string.

// The opposite means: All letters of the two strings are the same, but the case is opposite. you can assume that the string only contains letters or it's a empty string. Also take note of the edge case - if both strings are empty then you should return false/False.

// Examples (input -> output)
// "ab","AB"     -> true
// "aB","Ab"     -> true
// "aBcd","AbCD" -> true
// "AB","Ab"     -> false
// "",""         -> false



#include <string>
#include <unordered_map>

bool isOpposite(const std::string& s1, const std::string& s2) {
  if (s1.size() != s2.size() || (s1.size() == 0 && s2.size() == 0)) return false;

  // TODO: Refactor 
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] != s2[i]) {
      if (s1[i] == std::toupper(s2[i]) || std::toupper(s1[i]) == s2[i] || s1[i] == std::tolower(s2[i]) || std::tolower(s1[i]) == s2[i]) {
        continue;
      } else {
        return false;
      }
    } else {
      return false;
    }
  }
 
  return true;
}


// "BafeapqfNQT" 
//  i
// "bAFEAPQFnqt"
