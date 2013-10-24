/*******************************************************************************

 FILES:         calculate.cpp, fraction.h, fraction.cpp
 PROGRAMMER:    Daniel Moe
 DATE:          9/19/12
 LAB:           Lab 6
 
 PURPOSE:       Allows user to do basic arithmetic with fractions
 
*******************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include "fraction.h"


using namespace std;

int main(int argc, char *argv[])
{
    CFract frac1;   //CFract object
    CFract frac2;   //CFract object
    CFract frac3;   //CFract object
    char choice;    //user choice
    char op;        //math operator holder
    int err = 0;    //error counter initialized to 0

    do
    {   //get fraction data from user in form: fract 1 [operation] fract 2
        cout << "This program allows you to perform simple arithmetic on fractions!" << endl;
        cout << "Enter a fraction in form a/b" << endl; 
        cout << "Then enter an arithmatic operator (+-*/)" << endl;
        cout << "Then enter a 2nd fraction" << endl;    
        cout << "Example: 1/2 + 1/4: ";
        cin >> frac1 >> op >> frac2;
        
        switch (op)
        {
            case '+':   //user chooses addition
                frac3 = frac1 + frac2;//add fractions, store results in frac3
                break;
            case '-':   //user chooses subtraction
                frac3 = frac1 - frac2;//subtract fractions, store results in frac3
                break;
            case '*':   //user chooses multiplication
                frac3 = frac1 * frac2;//multiply fractions, store results in frac3
                break;
            case '/':   //user chooses division
                frac3 = frac1 / frac2;//divide fractions, store results in frac3
                break;
            default:
                err = 1;        //if choice is something else, error = 1
        }
        
        if (err == 1)   //if user generates an error, tell them so
        {
            cerr << "*** illegal operator" << endl;
            err = 0;
        }
        
        else        //print results of user selected computation
        {
            cout << "\nThe result of " << frac1 << " " << op << " " << frac2 << " is " << frac3 << endl;
        }
        
        cout << "Try another? (y/n)";   //option to do it again
        cin >> choice;
        cout << endl;
        
    }while(choice != 'n');  //sentinal value 'n'

    system("PAUSE");
    return EXIT_SUCCESS;
}
