#include <iostream>
#include <iomanip>

/*
 * This program is for Section 2-13 Question XX found on page 69 
 * of the book "Computer Science A Structured Programming Approach Useing C++"
 */

using namespace std;

int main (void)
{
    char aLetter;
    int aNumber;
    float aFloat;

    //Ask the user for a Character, Integer, and Floating Point
    cout << "Please provide me a Single Standard Character (A, .. Z, or a .. z)" << endl;
    cin >> aLetter;
    cout << endl;
    cout << "Please provide me a Single Standard Integer (1, .. 255)" << endl;
    cin >> aNumber;
    cout << endl;
    cout << "Please provide me a Single Standard Floating Point (1.0-1.99)" << endl;
    cin >> aFloat;
    cout << endl;
    
    //Print the 3 responces on seperate lines
    cout << "Your Letter: " << aLetter << endl;
    cout << "Your Number: " << aNumber << endl;
    cout << "Your Float:  " << aFloat << endl;
    return 0;
}
