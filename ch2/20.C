#include <iostream>
#include <iomanip>

/*
 * This program is for Section 2-13 Question 20 found on page 70
 * of the book "Computer Science A Structured Programming Approach Useing C++"
 */

using namespace std;

int main (void)
{
    int return1;
    int return2;
    int return3;
    int return4;
    int return5;
    int return6;
    int return7;
    int return8;
    int return9;

    //Request 3 numbers from the user
    cout << "Please enter 9 numbers (1 .. 255)" << endl;
    cin >> return1 >> return2 >> return3 >> return4 >> return5 >> return6 >> return7 >> return8 >> return9; 

    //Return the numbers in rows of 3, comma seperated
    cout << "Your numbers:" << endl;
    cout << "  " << return1 << ", " << return2 << ", " << return3 << endl;
    cout << "  " << return4 << ", " << return5 << ", " << return6 << endl;
    cout << "  " << return7 << ", " << return8 << ", " << return9 << endl;

    return 0;
}
