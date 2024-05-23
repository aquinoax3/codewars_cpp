// Sentence Smash
// Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!

// Example
// ['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'


#include <vector>
#include <string>

std::string smash(const std::vector<std::string>& words) {
  std::string result = "";
  
  for (std::string word : words) {
    result += word + " ";
  }
  
  result.pop_back();
  
  return words.empty() ? "" : result;
}
