// Date: 2022-09-11

/*
            The 2^0
            ^
  0000 0001 = 1
  0000 0010 = 2
  0000 0100 = 4
  0000 1000 = 8
  ...
  0100 0000 = 64
  1000 0000 = 128
  1 0000 0000 = 256

  Test Case:
  "0101" = 5
  0. get input
  1. count how many places there are in the string:             (L45)
  2. skip any positions that are zero:                          (L99)
  3. for each index in the string, assign a 'position value':   (L104)
  4. calculate the value of that position/index:                (L105)
  6. sum the values of each position:
*/

#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

/**
 * @brief Convert a binary number (represented as a string) to a decimal number
 *        (represented as an integer). The binary number is assumed to be
 *        non-negative, and less than 2^7.
 *
 * @return int
 */
int main()
{
  string userInputsBinaryNumber;

  cin >> userInputsBinaryNumber;
  int numberLength = userInputsBinaryNumber.length();

  // TODO: Limit the program to a specific binary length

  // https://www.geeksforgeeks.org/convert-string-char-array-cpp/
  char characterArray[numberLength];
  strcpy(characterArray, userInputsBinaryNumber.c_str());

  // character array = [0 1 0 1] = 5
  // character array = [0 0 0 1 0 1] = 5

  // we know the length of the string,
  // and we know the index of the current position

  // length = 4
  // last index: (length - 1)

  // Convert:
  // index 0, index 1, index 2, index 3
  // power 3, power 2, power 1, power 0

  // Compute the value of each position - first being the highest position in the binary number

  // Formula:
  // power of index = (length - 1) - index
  // position value = 2^(power of index)

  // index 0: (4 - 1) - 0 = power 3
  // index 1: (4 - 1) - 1 = power 2
  // index 2: (4 - 1) - 2 = power 1
  // index 3: (4 - 1) - 3 = power 0

  // Review: Three loop types:
  // for (i=0; condition; i++) {...}
  // while (condition) {...}
  // do {...} while (condition);

  // Review: array item access syntax: characterArray[2]

  int index = 0;
  int powerOfIndex;
  int positionValue;
  int sumOfPositionValues = 0;

  // Power Function: https://cplusplus.com/reference/cmath/pow/
  // 2^2 = (2)2 = 2*2     = pow(2, 2)  = 4
  // 2^3 = (2)3 = 2*2*2   = pow(2, 3)  = 8
  // 2^4 = (2)4 = 2*2*2*2 = pow(2, 4)  = 16

  while (index <= numberLength) // final characterArray index is reached
  {

    if (characterArray[index] == '0')
    { // skip positions that have a binary value of 0
      index++;
      continue;
    }

    powerOfIndex = (numberLength - 1) - index;
    positionValue = pow(2, (powerOfIndex));

    sumOfPositionValues += positionValue; // sumOfPositionValues = (sumOfPositionValues + positionValues)
    index++;
  }

  // JavaScript: userInputsBinaryNumber.split('').reduce((sum, value, index) => sum + (Math.pow(2, ((userInputsBinaryNumber.length - 1) - index)) * userInputsBinaryNumber[index]), 0);

  cout << sumOfPositionValues << endl;

  return 0;
}

// Class design

// NumberConverter

// .setInteger(9)
// .setBinaryString('1001')

// .toInteger() // 9
// .toBinaryString() // '1001'
