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
#include "Time.h"
#include "Clock.h"

using namespace std;

/**************************
*Clock class functions
**************************/

/*default constructor, set hours, mins, secs to 0*/
Clock::Clock()
{ 
       hours = 0;
       minutes = 0;
       seconds = 0;
}

/*three arg constructor set hours, minutes and seconds
 to corresponding input values and normalize time*/
Clock::Clock(int hr, int min, int sec)
{
       hours = hr;
       minutes = min;
       seconds = sec;
       normalize();
}

/*overloaded << operator, prints object variables*/
ostream& operator<<(ostream& osObject, const Clock& cObject)
{
    if(cObject.hours < 10)//if hours less than ten fill first digit with '0'
        osObject << '0';
        osObject << cObject.hours << ":";
       
    if(cObject.minutes < 10)//if minutes less than ten fill first digit with '0'
        osObject << '0';
        osObject << cObject.minutes << ":";
        
    if(cObject.seconds < 10)//if seconds less than ten fill first digit with '0'
        osObject << '0';
        osObject << cObject.seconds;
       
       return osObject;             //return object
}

/*overloaded >> operator, fills object variables with user input*/
istream& operator>>(istream& isObject, Clock& cObject)
{
       char ch;        //character ':' holder
       
       isObject >> cObject.hours;  //get user hours
       
       isObject.get(ch);           //character hold
       
       isObject >> cObject.minutes;//get user minutes
       
       isObject.get(ch);           //character holder
       
       isObject >> cObject.seconds;//get user seconds
       
       return isObject;                  //return object
}

/*time normalization function*/
void Clock::normalize()
{
    if(seconds > 59)   //if seconds are >60, increment minutes
    {
        seconds /= 60;
        minutes++;
    }
    
    if(minutes > 59)//if minutes are >60, increment hours
    {
        minutes /= 60;
        hours++;
    }
    
    if(hours > 23)//if seconds are >24, reset to 0
    {
        hours %= 24;
    }
}
