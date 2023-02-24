// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

// Sarah Bender

#include <iostream>
using namespace std;

int main()
{
  int month = 1;
  float total = 0, rain;

  cout << "Enter the total rainfall for month " << month << endl;
  cout << "Enter -1 when you are finished." << endl;
  cin >> rain;

  while (rain != -1)
    {
      total = total + rain;
      month++;

      cout << "Enter the total rainfall in inches for month " << month << endl;
      cout << "Enter -1 when you are finished." << endl;
      cin >> rain;
    }

  if (month == 1)
    cout << "No data has been entered." << endl;
  else
    cout << "The total rainfall for the " << month - 1 << " months is " << total << " inches." << endl;

  return 0;
}

// Run the program several times with various input. Record your results. Are they correct?
// Yes, my results are correct. I entered 5 for month 1, 6 for month 2, 7 for month 3, and then exited the loop. I got the correct result of 18 inches. 

// What happens if you enter -1 first? 
// The program tells you that no data has been entered. 

// What happens if you enter only values of 0 for one or more months?
// The total rainfall is displayed as 0. 

// Is there any numerical data that you should not enter?
// You should not enter negative numbers, as it is physically impossible for it to rain negative inches. 

// What is the purpose of the following code in the program above (lines 29 and 30)?
// If the month is still 1, this means that the user exited the loop in its first runthrough. This means that no useable data was entered, so there needs to be something to inform the user of this. This is the purpose of these lines. 
