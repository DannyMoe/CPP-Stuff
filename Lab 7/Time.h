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
#ifndef TIME_H
#define TIME_H

using namespace std;
/**************************
*Class Time
**************************/
class Time
{            //overloaded << operator
             friend ostream& operator<<(ostream&, const Time&);
             //overloaded >> operator
             friend istream& operator>>(istream&, Time&);
      public:
             Time();         //default constructor
             Time(const Time&);//single arg constructor
             ~Time();        //destructor
             Time(int, int, int);        //three arg constructor
             Time& operator= (const Time&);//overloaded = operator
             Time operator++();     //overloaded (pre)++ operator
             Time operator++(int);  //overloaded (post)++ operatpr
                                       
      protected:
              virtual void normalize();//time normalization function
              int hours;   //hours
              int minutes; //minutes
              int seconds; //seconds
};
#endif
