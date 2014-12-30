#include <iostream>
#include <iomanip>

/*
 * This program is for Section 2-13 Question 18 found on page 70 
 * of the book "Computer Science A Structured Programming Approach Useing C++"
 */

using namespace std;

int main (void)
{
    int return1;
    int return2;
    int return3;

    //Request 3 numbers from the user
    cout << "Please enter three numbers (1 .. 255)" << endl;
    cin >> return1 >> return2 >> return3;

    //Return the numbers 1 on each line, the way they gave them to you
    cout << "Your numbers forward:" << endl;
    cout << "  " << return1 << endl;
    cout << "  " << return2 << endl;
    cout << "  " << return3 << endl;

    //Return the numbers 1 on each line, in reverse of above
    cout << "Your Numbers Reveresed:" << endl;
    cout << "  " << return3 << endl;
    cout << "  " << return2 << endl;
    cout << "  " << return1 << endl;
    
    return 0;
}
