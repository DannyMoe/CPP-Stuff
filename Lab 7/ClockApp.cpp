/************************************************
* FILE(S):       ClockApp.cpp, clock.h, clock.cpp, time.h, time.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          9/18/2012
* LAB:           Lab 7
* 
* PURPOSE: program demonstrates simple inheritance rules via time and clock classes.
*          Users manipulate time and clock objects.
************************************************/

/**************************
*Includes
**************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include "Time.h"
#include "Clock.h"

using namespace std;

/*************************
*Function Main()
*************************/
int main(int argc, char *argv[])
{
    Time t1; //time object 
    Clock c1;//clock object
    char choice;     //user choice
   do
   {
    /*print both time and clock*/
    cout << "The current time is :" << t1 << endl;
    cout << "The application clock reads: " << c1 << endl;
    
    cout << "Enter the current time in hh:mm:ss format: ";
    /*fill t1 with input hours, minutes and seconds*/
    cin >> t1; 
          
    cout << endl << "The NEW current time is :" << t1 << endl;
    
    /*normalize time*/
    t1.normalize();
    cout << "The time in a normalized format: " << t1 << endl;
    
    /*increment t1*/
    t1++;
    
    cout << "After inrcrementing the time, the time is now: " << t1 << endl;
    
    /*set c1 hours, minutes and seconds*/
    c1 = Clock(12, 34, 56);
    
    cout << "After resetting the clock, the clock now reads: " << c1 << endl;
    
    cout << "Would you like to try again? y/n: ";
    cin >> choice; //user choice
    cout << endl;
    }
    while(choice != 'n'); //sentinal value 'n'
    system("PAUSE");
    return EXIT_SUCCESS;
}
