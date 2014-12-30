#include <iostream>
#include <iomanip>

/*
 * This program is for Section X-XX Question XX found on page XXX 
 * of the book "Computer Science A Structured Programming Approach Useing C++"
 */

using namespace std;

int main (void)
{
    int return0;
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
    cout << "Please enter 10 numbers (1 .. 255)" << endl;
    cin >> return0 >> return1 >> return2 >> return3 >> return4 >> return5 >> return6 >> return7 >> return8 >> return9; 

    //Return the numbers 1st and 10th, then 2nd and 9th and so on
    cout << "Your numbers forward:" << endl;
    cout << "  " << return0 << " " << return9 << endl;
    cout << "  " << return1 << " " << return8 << endl;
    cout << "  " << return2 << " " << return7 << endl;
    cout << "  " << return3 << " " << return6 << endl;
    cout << "  " << return4 << " " << return5 << endl;

    return 0;
}
