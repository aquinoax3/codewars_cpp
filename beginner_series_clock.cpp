// Clock shows h hours, m minutes and s seconds after midnight.

// Your task is to write a function which returns the time since midnight in milliseconds.

// Example:
// h = 0
// m = 1
// s = 1

// result = 61000


int past(int h, int m, int s) {
  // 3600 seconds in an hour
  int hours = (3600 * h);
  
  // 60 seconds in a minute
  int minutes = (60 * m);
  
  // add the hours and min you converted into seconds
  int sum = hours + minutes + s;
  
  // mutipy by 1000 to get milliseconds
  return sum * 1000;
}
