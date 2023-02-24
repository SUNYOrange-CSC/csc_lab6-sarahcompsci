// Sarah Bender

#include <iostream>
using namespace std;

int main() 
{
  char letter = 'a';

  do
    {
      cout << "Please enter a letter." << endl;
      cout << "You may type the letter 'x' to exit the program." << endl;
      cin >> letter; 
      cout << "The letter you entered is " << letter << endl;
    }
  while (letter != 'x');

  return 0;
}

// This program is not user friendly. Run it a few times and explain why. 
// This program is not user friendly because it will loop infinitely until the user types in the letter "x." The user has no way of knowing that typing "x" will end the loop. 

// How would this code affect the execution of the program if the while loop is replaced by a do-while loop?
// The execution of the program doesn't seem to be affected by changing to a do-while loop. The letter is simply evaluated at the end of the do-while loop rather than starting at the beginning of the while loop.
