// This program has a user input a number n and then finds the 
// mean of the first n positive integers.

// Sarah Bender

#include <iostream>
using namespace std;

int main ()
{
  int value;      // value is some positive number n
  int total = 0;  // total holds the sum of the first n positive numbers
  int number;     // the amount of numbers
  float mean;     // the average of the first n positive numbers

  cout << "Please enter a positive integer." << endl;
  cin >> value;

  if (value > 0)
  {
    for (number = 1; number <= value; number++)
      {
        total = total + number;
      }

    mean = static_cast<float>(total) / value;

    cout << "The mean value of the first " << value << " positive integers is " << mean << endl;
  }
  else
  {
    cout << "Invalid input - integer must be positive." << endl;
  }

  return 0;
}

// Why is the typecast operator needed to compute the mean? What do you think will happen if it is removed? Modify the code and try it. Record what happens. Make sure that you try both even and odd cases.
// When the mean value is a decimal, it's truncated, meaning it yields an incorrect result. 

// What happens if you enter a float such as 2.99 instead of an integer for value? Try it and record the results.
// The integer is truncated before the mean value is found, meaning it would be the mean value of the first 2 positive integers, not the first 2.99.
