#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/**
 * @brief Write a program that reads an integer from the user and counts to that number __from zero__
 *        Regardless of the direction in the number line.
 *
 *    positive: ->
 *
 *    0-1-2-3-4
 *
 *    negative: <-
 *
 *    (-4)-(-3)-(-2)-(-1)-0
 *
 * @return int
 */
int main () {

  int count = 0;
  int userNum;

  cout << "Enter a number" << endl; // prompt user for a number
  cin >> userNum; // user enters number
  cout << " " << endl; // whitespace

  // Positive Numbers: 0 <= -4 is false, so it won't run for negative numbers
  for (count; count <= userNum; ++count) { // count is set to zero in declaration. If count is less than user input, increment
    cout << count << endl; // display the count up to user input
  }

  // Negative numbers: 0 >= 4 is false, so it won't run for positive numbers
  for (count; count >= userNum; --count) { // count is set to zero in decalaration. If count is greater than user input, decrement
    cout << count << endl; // display the count up to user input
  }

  return 0;
}


/**
  //  If you use the ++ operator as a prefix like: ++var, the value of var is incremented by 1; then it returns the value.
  // If you use the ++ operator as a postfix like: var++, the original value of var is returned first; then var is incremented by 1.
  count = 0;
  cout << "postfix:" << endl;
  for (count; count-- < userNum; ) { // count is set to zero in declaration. If count is less than user input, increment
    cout << count << endl; // display the count up to user input

    cout << "current count:" << count << endl; // display user input
  }
 */
