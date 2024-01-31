// Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.

// When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.

// Your task is correct the errors in the digitised text. You only have to handle the following mistakes:

// S is misinterpreted as 5
// O is misinterpreted as 0
// I is misinterpreted as 1
// The test cases contain numbers only by mistake.

#include <string>

std::string correct(std::string str) {
    std::string result = "";
    for (auto el : str) {
        if (el == '5') {
            result += 'S';
        } else if (el == '0') {
            result += 'O';
        } else if (el == '1') {
            result += 'I';
        } else {
            result += el;
        }
    }

    return result;
}