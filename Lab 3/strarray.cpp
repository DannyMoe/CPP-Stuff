/************************************************
* FILE(S):          strarray.h, strarray.cpp, strsort.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Aug. 15, 2012
* LAB:           Lab 3
* 
* PURPOSE: Definitions of functions used in strsort.cpp
************************************************/

/**************************
*Includes
**************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include "strarray.h"

using namespace std;

/**************************
*Declarations
**************************/
const int ARRAYMAX = 10;        //Assigns A 10 index positions
const int STRINGMAX = 256;      //Maxium size of sting input
char A[10];                     //"Holder" array of characters
char inLine[STRINGMAX];         //Array of input characters
int arraySize = ARRAYMAX;       //Size of array, 10
int i;                          //Index counter

/*************************
*Function initStrArray() - Initializes an array of pointers to characters and user fills the array by inputting strings.
*************************/
int initStrArray(char *A[], int arraySize)
{
    int i;  //index counter
    
    for(i = 0; i < 10; i++)
        {
        cout << "Enter string # "
        << (i+1) << " : ";
        cin.getline(inLine, STRINGMAX);
        A[i] = new char(strlen(inLine)+1);
        strcpy(A[i], inLine);
        }
}

/*************************
*Function printStrArray() - Prints the array of pointers to characters to the screen.
*************************/
int printStrArray(char *A[], int arraySize)
{
    int i;  //index counter
    //loop that prints each array position
    for(i = 0; i < arraySize; i++)
        cout << A[i] << endl;
}

/*************************
*Function sortStrArray() - Sorts the array of pointers to characters via the quick sort method.
*************************/
int sortStrArray(char *A[], int left, int right)
{
    int i;      //index counter
    int j;      //idex counter
    char *pivot;//pointer to middle of arrat
    char *temp; //pointer to string placeholder
    
    i = left;
    j = right;
    pivot = A[(left + right)/2];
    
    do
    {   //search for strings less than pivot
        while(strcmp(A[i], pivot) < 0)
        {
            i++;
        }//search for strings greater than pivot
        while(strcmp(A[j], pivot) > 0)
        {
            j--;
        }
        
        if(i <= j)
        {   //swap values
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);

    if(left < j)
        sortStrArray(A, left, j);
        
    if(i < right)
        sortStrArray(A, i, right);
}
