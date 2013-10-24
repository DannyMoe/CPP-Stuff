/************************************************
* FILE(S):       srchsort.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          August 8, 2012
* LAB:           Lab 2
* 
* PURPOSE: This program populates an array with random numbers and allows the user to sort and search the array
************************************************/

#include <cstdlib>
#include <iostream>
#include "arrays.h"

using namespace std;

/*************************
*Function Main()
*************************/
int main(int argc, char *argv[])
{
    int dataArray [ARRAYMAX];   //array of random integers
    int choice;                 //user's choice to search or sort
    int item;                   //user's search criteria
    int index;                  //index position of search criteria
    int answer;                 //user's choice to search/sort again
    
    bool again;                 
    bool sorted = false;
    initArray (dataArray, ARRAYMAX, DATAMAX);
    printArray (dataArray, ARRAYMAX);
    
    do
    {
        cout << "Would you like to 1: sort the array or 2: search for a number? ";
        
        cin >> choice;
        
        if(choice == 1)
        {    
            if(sorted == false)
            {
            sortArray (dataArray, ARRAYMAX);
            printArray (dataArray, ARRAYMAX);
            }
            
            cout << endl << "What are you searching for? ";
            cin >> item;
            index = binsearch(item, dataArray, ARRAYMAX);
            cout << endl << "Array[" << index << "]";
        }
        else if(choice == 2)
          {
             if(sorted == false)
             {
             cout << endl << "What are you searching for? ";
             cin >> item;
             index = linsearch(item, dataArray, ARRAYMAX);
             cout << endl << "Array[" << index << "]"; 
             }
          }
                                  
        cout << endl << "Would you like to search again? yes (1) /no (2): ";
            cin >> answer;
            if(answer == 1)
                again = true;
            if(answer == 2)
                again = false;
    
    }while(again == true);
    system("PAUSE");
    return EXIT_SUCCESS;
}

