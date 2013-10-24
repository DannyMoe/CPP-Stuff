/************************************************
* FILE(S):       CArList.cpp, CArList.h, CArrayList.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Sep. 5 2012
* LAB:           Lab 5
* 
* PURPOSE: Array based list, user can add and delete values, print list or quit.
************************************************/

/**************************
*Includes
**************************/
#include <cstdlib>
#include <iostream>
#include "CArList.h"

inline void CArList::add(int value)    //add member function
{
       if(li < size)         //compare list index to index size
       {
          list[li] = value;  //store user value in position li
          li++;              //point to next available index position
       }
       else
       {
           cout << "The list is already full! Please delete a position before adding a value." << endl;
       }
}

inline void CArList::del(int position)//delete member function
{
       int i;
       //list position must be between 0 and list index position
       if(position >= li || position <= 0)
       {
           cout << "That position doesn't exist within the list! Choose again." << endl;      
       }
       else
       {
           for(i = (position - 1); i < li - 1; i++)//loop counting from position to li
           {   //replace value in position i with value in position (i+1)
               list[i] = list[i + 1];  
           }
           li--;
       }    
}

inline void CArList::print()    //print member function
{
    int i;
       for(i = 0; i < li; i++)//loop counting from position 0 to li
       {    //print index position and value
            cout << (i + 1) << ". " << list[i] << endl;
       }
}
