/************************************************
* FILE(S):          CTime.h, CTime.cpp, TimeApp.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Aug. 15, 1012
* LAB:           Lab 4
* 
* PURPOSE: This program adds two times and outputs the sum.
************************************************/

/**************************
*Includes
**************************/
#include <cstdlib>
#include <iostream>
#include "CTime.h"

using namespace std;

/*************************
*Function add() - converts HR::MIN::SEC times to seconds
*************************/
CTime CTime::add(CTime t2)
{
    long t1Seconds;     //time 1, in seconds
    long t2Seconds;     //time 2, in seconds
    long t3Seconds;     //total time, in seconds
    CTime temp;         //holder for total times
    
    
    t1Seconds = hours * 3600 + minutes * 60 + seconds;  //convert time 1 to seconds
    t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds; //convert time 2 to seconds
    t3Seconds = t1Seconds + t2Seconds; //adds the two times
    temp.hours = t3Seconds / 3600;      //calculate hours
    t3Seconds %= 3600;            //remove hours
    temp.minutes = t3Seconds / 60;      //claculate minutes
    temp.seconds = t3Seconds % 60;      //calculate seconds
    
  return temp;  
};
