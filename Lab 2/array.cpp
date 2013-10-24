#include <cstdlib>
#include <iostream>
#include "arrays.h"

using namespace std;

/*************************
*Function initArray() initialize and populate array
*************************/
void initArray (int A[], int arraySize, int modValue)   
{
     int i;
     srand (time (NULL));    //generates random numbers based on system clock
     for (i=0; i<arraySize; i++)
         A[i] = rand() % modValue;       //fill array with random integers
}

/*************************
*Function printArray() prints array in current format
*************************/
void printArray (int A[], int arraySize) 
{
     int i;
     
     for (i=0; i<arraySize; i++)
         cout << "Array[" << i << "]" << " =" << A[i] << endl;

}

/*************************
*Function sortArray()numerically sort array values
*************************/
void sortArray (int A[], int arraySize)  
{
     int i;    //index counter
     int j;    //index counter
     int indexMin;     //index 0
     int valueMin;     //value found in index 0
     
     for (i=0; i <ARRAYMAX -1; i++)
     {
         indexMin = i;
         valueMin = A[i];
         
         for (j=i+1; j <arraySize; j++)
         {
             if (A[j] < valueMin)
             {
              valueMin = A[j];
              A[j] = A[i];
             }       
         
         A[indexMin] = A[i];
         A[i] = valueMin;
         }
     }
 
 
}

/*************************
*Function linSearch() sequentially search each index position
*************************/
int linsearch(int item, int dataArray[], int ARRAYMAX) //linear search
{
    int index = 0;      //index counter
    int rtrn;           //return value
    rtrn = -1;          //flag value
    
    while(index < ARRAYMAX && rtrn == -1)
    {
         if(dataArray[index] == item) sequentially search each index position
            rtrn = index;
         else 
            index++;     //incerment index
    }
    
        return rtrn;
}

/*************************
*Function binSearch()sort by dividing the list in half
*************************/
int binsearch(int item, int dataArray[], int ARRAYMAX) //binary search
{
    int left = 0;
    int right = ARRAYMAX - 1;
    int mid;
    bool found = false;
    
    while(!found && left <= right)
    {
        mid = (left + right)/2;          //calculate middle index position
        if(dataArray[mid] == item)
            found = true;
        else if(dataArray[mid] > item)   //compare search item with middle index position
            right = mid - 1;
        else 
            left = mid + 1;
    }
    
    if(found)
        return mid;    //return index position
    else
        return -1;     //return flag value
}
