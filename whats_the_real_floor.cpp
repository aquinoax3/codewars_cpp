// With the 1st floor being replaced by the ground floor and the 13th floor being removed, the numbers move down to take their place. In case of above 13, they move down by two because there are two omitted numbers below them.

// Basements (negatives) stay the same as the universal level.

// More information here

// Examples
// 1  =>  0 
// 0  =>  0
// 5  =>  4
// 15  =>  13
// -3  =>  -3


int getRealFloor(int f) {
    if (f < 0) {
        return f;
    } else if (f == 1 || f == 0) {
        return 0;
    } else if (f < 13) {
        return f - 1;
    } else {
        return f - 2;
    }
}