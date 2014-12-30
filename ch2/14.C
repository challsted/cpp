#include <iostream>
#include <iomanip>

/*
 * This program is for Section 2-13 Question 14 found on page 69
 * of the book "Computer Science A Structured Programing Approach Useing C++"
 */

using namespace std;

#define alpha 'a'
#define echo 'e'
#define india 'i'
#define oscar 'o'
#define uniform 'u'

int main (void)
{
    const int even0 = 0;
    const int even2 = 2;
    const int even4 = 4;
    const int even6 = 6;
    const int even8 = 8;

    cout << setw(2) << alpha
         << setw(2) << echo
         << setw(2) << india
         << setw(2) << oscar
         << setw(2) << uniform 
         << setw(2) << endl;
    cout << setw(2) << even0 
         << setw(2) << even2 
         << setw(2) << even4 
         << setw(2) << even6 
         << setw(2) << even8 
         << setw(2) << endl;
    cout << " 1 3 5 7 9" << endl;
    return 0;
}

// Defined Constants for Vowels
//  Memory Constants for Even Numbers
//Litteral Constants for Odd Numbers
