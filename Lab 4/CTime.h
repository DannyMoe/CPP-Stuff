/************************************************
* FILE(S):          CTime.h, CTime.cpp, TimeApp.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Aug. 15, 1012
* LAB:           Lab 4
* 
* PURPOSE: Definition of class CTime
************************************************/

#ifndef CTIME_H
#define CTIME_H

#include <iostream>

/*************************
*Class: CTime
*************************/
class CTime
{
public:
    CTime();            //prototype
    ~CTime(){};         //prototype
    int getHours();     //prototype
    int getMinutes();   //prototype
    int getSeconds();   //prototype
    CTime add(CTime);   //prototype
    
    int setHours(int hr);       //prototype
    int setMinutes(int min);    //prototype
    int setSeconds(int sec);    //prototype
    
private:
    int hours;
    int minutes;
    int seconds;
};

/*************************
*Inline function definitions
*************************/
inline CTime::CTime() 
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
inline int CTime::getHours(){return hours;}
inline int CTime::getMinutes(){return minutes;}
inline int CTime::getSeconds(){return seconds;}
inline int CTime::setHours(int hr)
    {   hours = hr;}
inline int CTime::setMinutes(int min)
    {   minutes = min;}
inline int CTime::setSeconds(int sec)
    {   seconds = sec;}
#endif
