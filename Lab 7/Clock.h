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
#include <cctype>
#include <iostream>
#include <iomanip>
#ifndef CLOCK_H
#define CLOCK_H

using namespace std;
/**************************
*Class Clock
**************************/
class Clock: public Time   //base class: Time, derived class: Clock
{
    public:
        Clock();    //default constructor
        Clock(int, int, int); //three arg constructor
        friend ostream& operator<<(ostream&, const Clock&);//overloaded << operator
        friend istream& operator>>(istream&, Clock&);//overloaded >> operator
        
    private:
        void normalize();     //time normalization function

};
#endif
