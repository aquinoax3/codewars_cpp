// Write a function which takes a number and returns the corresponding ASCII char for that value.

// Example:

// 65 --> 'A'
// 97 --> 'a'
// 48 --> '0

char get_char(int i) {
    return (int)i;
}
char get_char(int i) {
    return static_cast<int>(i);
}
char get_char(int i) {
    return char(i);
}