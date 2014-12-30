#include <iostream>
#include <iomanip>

/*
 * This program is for Section 2-13 Question 16 found on page 69
 * of the book "Computer Science A Structured Programming Approach Useing C++"
 */

using namespace std;

int main (void)
{
    char spc = ' ';

    //Print the character C H A in a 7x5 (left align) block
    //Row 1
    cout << spc << 'C' << 'C' << 'C' << spc 
         << spc
         << 'H' << spc << spc << spc << 'H'
         << spc
         << spc << 'A' << 'A' << 'A' << spc
         << spc
         << endl;
    //Row 2
    cout << 'C' << spc << spc << spc << 'C' 
         << spc
         << 'H' << spc << spc << spc << 'H'
         << spc
         << 'A' << spc << spc << spc << 'A'
         << spc
         << endl;
    //Row 3
    cout << 'C' << spc << spc << spc << spc
         << spc
         << 'H' << spc << spc << spc << 'H'
         << spc
         << 'A' << spc << spc << spc << 'A'
         << spc
         << endl;
    //Row 4
     cout << 'C' << spc << spc << spc << spc
          << spc
          << 'H' << 'H' << 'H' << 'H' << 'H'
          << spc
          << 'A' << 'A' << 'A' << 'A' << 'A'
          << spc
          << endl;
    //Row 5
     cout << 'C' << spc << spc << spc << spc
          << spc
          << 'H' << spc << spc << spc << 'H'
          << spc
          << 'A' << spc << spc << spc << 'A'
          << spc
          << endl;
    //Row 6
     cout << 'C' << spc << spc << spc << 'C'
          << spc
          << 'H' << spc << spc << spc << 'H'
          << spc
          << 'A' << spc << spc << spc << 'A'
          << spc
          << endl;
    //Row 7
     cout << spc << 'C' << 'C' << 'C' << spc
          << spc
          << 'H' << spc << spc << spc << 'H'
          << spc
          << 'A' << spc << spc << spc << 'A'
          << spc
          << endl;
    return 0;
}
