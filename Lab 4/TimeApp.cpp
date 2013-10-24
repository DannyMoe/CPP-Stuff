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

int main(int argc, char *argv[])
{
    int hr;     //input hours
    int min;    //input minutes
    int sec;    //input seconds
    char hold;  // ":" marker
    CTime t1;   //class: CTime object
    CTime t2;   //class: CTime object  
    CTime t3;   //class: CTime object
    
    
    cout << "Enter time 1: ";
    cin >> hr >> hold >> min >> hold >> sec; //user input
    
    t1.setHours(hr);        //fills t1 hours with input hours
    t1.setMinutes(min);     //fills t1 minutes with input minutes
    t1.setSeconds(sec);     //fills t1 seconds with input seconds
    
    cout << endl << "Enter time 2: ";
    cin >> hr >> hold >> min >> hold >> sec;    //user input
    
    t2.setHours(hr);        //fills t2 hours with input hours
    t2.setMinutes(min);     //fills t2 minutes with input minutes
    t2.setSeconds(sec);     //fills t2 seconds with input seconds
    
    t3 = t1.add(t2);        //fills class object t3 with variables from object temp
    
    
    //Prints both input times and their sum
    cout << "The sum of " << t1.getHours() << hold << t1.getMinutes() << hold << t1.getSeconds();
    cout << " and " << t2.getHours() << hold << t2.getMinutes() << hold << t2.getSeconds() << " is ";
    cout << t3.getHours() << hold << t3.getMinutes() << hold << t3.getSeconds() << endl;
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
