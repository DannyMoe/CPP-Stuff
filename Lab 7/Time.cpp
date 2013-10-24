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

using namespace std;

/**************************
*Time class functions
**************************/
Time::Time()               //default constructor
{ hours = minutes = seconds = 0;}

Time::Time(const Time& rT)  //one arg constructor
{
       hours = rT.hours;    //hours = object hours
       minutes = rT.minutes;//hours = object minutes
       seconds = rT.seconds;//hours = object seconds
}

Time::Time(int hr, int min, int sec)  //three arg constructor
{
       hours = hr;     //set hours to input hours
       minutes = min;  //set minutes to input minutes
       seconds = sec;  //set seconds to input seconds
       normalize();    //time normalization function
}

Time::~Time()          //destructor
{}

/*overloaded << operator, prints object variables*/
ostream& operator<<(ostream& osObject, const Time& tObject)
{
    if(tObject.hours < 10)//if hours less than ten fill first digit with '0'
        osObject << '0';
        osObject << tObject.hours << ":";
       
    if(tObject.minutes < 10)//if minutes less than ten fill first digit with '0'
        osObject << '0';
        osObject << tObject.minutes << ":";
        
    if(tObject.seconds < 10)//if seconds less than ten fill first digit with '0'
        osObject << '0';
        osObject << tObject.seconds;
       
       return osObject;             //return object
}
/*overloaded >> operator, fills object variables with user input*/
istream& operator>>(istream& isObject, Time& tObject)
{
       char ch;        //character ':' holder
       
       isObject >> tObject.hours;//get user hours
              
       isObject.get(ch);           //character hold
       
       isObject >> tObject.minutes;//get user minutes
       
       isObject.get(ch);           //character hold
       
       isObject >> tObject.seconds;//get user seconds
       
       return isObject;            //return object
}
/*overloaded (pre)++ operator*/
Time Time::operator++()
{
    if(seconds > 59)   //if seconds are >60, increment minutes
    {
        seconds /= 60;
        minutes++;
    }
    
    if(minutes > 59)   //if minutes are >60, increment hours
    {
        minutes /= 60;
        hours++;
    }
    
    return *this;
}

/*overloaded (post)++ operator*/
Time Time::operator++(int)         
{
    Time temp = *this;
    seconds++;
    return temp;
}

/*overloaded assignment operator
assign hours. mins, seconds with object variables*/
Time& Time::operator=(const Time& rT) 
{
    if(this != &rT)
    {
        hours = rT.hours;
        minutes = rT.minutes;
        seconds = rT.seconds;
    }
}
    
void Time::normalize()
{
    if(seconds > 59)   //if seconds are >60, increment minutes
    {
        seconds-= 60;
        minutes++;
    }
    
    if(minutes > 59)   //if minutes are >60, increment hours
    {
        minutes-= 60;
        hours++;
    }
}
