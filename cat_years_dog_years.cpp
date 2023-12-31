// Kata Task
// I have a cat and a dog.

// I got them at the same time as kitten/puppy. That was humanYears years ago.

// Return their respective ages now as [humanYears,catYears,dogYears]

// NOTES:

// humanYears >= 1
// humanYears are whole numbers only
// Cat Years
// 15 cat years for first year
// +9 cat years for second year
// +4 cat years for each year after that
// Dog Years
// 15 dog years for first year
// +9 dog years for second year
// +5 dog years for each year after that


#include <vector>


std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
    int cat = 0;
    int dog = 0;
    humanYears == 1 ? cat = 15 : humanYears == 2 ? cat = 24 : cat = 24 + (humanYears - 2) * 4;
    humanYears == 1 ? dog = 15 : humanYears == 2 ? dog = 24 : dog = 24 + (humanYears - 2) * 5;
    
    return std::vector<int> {humanYears, cat, dog};
    
}