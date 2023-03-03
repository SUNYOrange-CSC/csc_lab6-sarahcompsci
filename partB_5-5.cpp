// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to 
// an output file.

// Sarah Bender

#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
  ifstream dataIn;    // Defines an input stream for a data file
  ofstream dataOut;   // Defines an output stream for an output file
  int quantity;       // Contains the amount of items purchased
  float itemPrice;    // Contains the price of each item
  float totalBill;    // Contains the total bill, i.e. the price of all items

  dataIn.open("transaction.dat");    // This opens the file.
  dataOut.open("bill.out");

  dataOut << setprecision(2) << fixed << showpoint;    // Formatted output

  dataIn >> quantity >> itemPrice;

  totalBill = quantity * itemPrice;

  dataOut << "The total bill is $" << totalBill << endl;
}
