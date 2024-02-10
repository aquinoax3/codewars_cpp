// For beginners!

// You are given a float (single precision) which means, that 32 bit are used to hold a value.

// Return the number an integer would hold with the same bit arrangement

// 10.0 (float) == 01000001001000000000000000000000 (binary)
// convert_to_int(10.0) returns 1092616192

// Use C's casting arithmetic to solve this simple problem


int convert_to_int(float float_value) {
    // Use type casting to convert float to int
    int int_value = *(int*)&float_value;
    return int_value;
}