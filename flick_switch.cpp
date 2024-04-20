// Task
// Create a function that always returns True/true for every item in a given list.
// However, if an element is the word 'flick', switch to always returning the opposite boolean value.

// Examples
// ['codewars', 'flick', 'code', 'wars'] ➞ [True, False, False, False]

// ['flick', 'chocolate', 'adventure', 'sunshine'] ➞ [False, False, False, False]

// ['bicycle', 'jarmony', 'flick', 'sheep', 'flick'] ➞ [True, True, False, False, True]


#include <vector>
#include <string>

std::vector<bool> flick_switch(const std::vector<std::string>& arr) {
    
    std::vector<bool> newArr;
    bool result = true;
    
    for(auto el : arr) {
        if (el == "flick") {
            if (result == true) {
                result = false; 
                newArr.push_back(result);
            } else {
                if (result == false) {
                result = true;
                newArr.push_back(result);
                }
            } 
        } else {
        newArr.push_back(result);
        }
    }
    
    return newArr;
}