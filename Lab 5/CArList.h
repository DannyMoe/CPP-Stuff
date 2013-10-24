/************************************************
* FILE(S):       CArList.cpp, CArList.h, CArrayList.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Sep. 5 2012
* LAB:           Lab 5
* 
* PURPOSE: Header file containing class information
************************************************/
/**************************
*Includes
**************************/
#ifndef CARLIST_H
#define CARLIST_H
#include <cstdlib>
#include <iostream>

using namespace std;
/**************************
*Classes
**************************/
class CArList   //class: array based list
{
public:
        CArList();       //constructor
        CArList(int);    //single arg constructor
        ~CArList();      //destructor
        void makeEmpty();//reset li position to 0
        void add(int);   //value add function
        void del(int);   //position delete function
        void print();    //list print function
private:
        int *list;       //list array
        int size;        //array size
        int li;          //list position
};


inline CArList::CArList()       //default constructor
{ li = 0;                 //set list position to 0
  size = 10;              //array size is 10
  list = new int[10];}    //dynamic allocation of array of 10 ints
inline CArList::CArList(int n)  //single arg constructer
{ li = 0;                 //set list position to 0
  size = n;               //array size is 10
  list = new int[n];}     //dynamic allocation of array of n ints
inline CArList::~CArList()      //default destructor
{ delete list;}           //clear list
inline void CArList::makeEmpty()//make array empty
{ li = 0;}  //return list index to 0

#endif
