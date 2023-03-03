// This program finds the average time spent programming by a student
// each day over a three day period.

// Sarah Bender

#include <iostream>
using namespace std;

int main()
{
  int numStudents, numDays;
  float numHoursP, numHoursB, totalP, totalB, averageP, averageB;
  int student, day = 0;  // These are the counters for the loops

  cout << "This program will find the average number of hours a day"
    << " that a student spent programming over a long weekend\n\n";
  cout << "How many students are there?" << endl << endl;
  cin >> numStudents;
  cout << "Enter the number of days in the long weekend." << endl << endl;
  cin >> numDays;

  for (student = 1; student <= numStudents; student++)
    {
      totalP = 0;

      totalB = 0;
      
      for (day = 1; day <= numDays; day++)
        {
          cout << "Please enter the number of hours worked programming by student " << student << " on day " << day << "." << endl;
          cin >> numHoursP;

          totalP = totalP + numHoursP;

          cout << "Please enter the number of hours worked on biology by student " << student << " on day " << day << "." << endl;
          cin >> numHoursB;

          totalB = totalB + numHoursB;
        }

      averageP = totalP / numDays;

      averageB = totalB / numDays;

      cout << endl;
      cout << "The average number of hours per day spent programming by "
        << "student " << student << " is " << averageP << endl;

      cout << "The average number of hours per day spent on biology by "
        << "student " << student << " is " << averageB << endl;

      if (averageP > averageB)
      {
        cout << "The student spent more time programming." << endl;
      }
      else if (averageP < averageB)
      {
        cout << "The student spent more time on biology." << endl;
      }
      else
      {
        cout << "They spent equal time on both subjects." << endl;
      }
    }

  return 0;
}
