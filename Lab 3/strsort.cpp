/************************************************
* FILE(S):          strarray.h, strarray.cpp, strsort.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Aug. 15, 2012
* LAB:           Lab 3
* 
* PURPOSE: Fills and sorts and array of pointers to characters via quick sort.
************************************************/

/**************************
*Includes
**************************/
#include <cstdlib>
#include <iostream>
#include "strarray.h"

using namespace std;

const int ARRAYMAX = 10;
const int STRINGMAX = 256;

/*************************
*Function Main() - User inputs strings which populate an array of pointers to characters. 
*                  Array is then sorted with the quick sort method.
*************************/
int main(int argc, char *argv[])
{
    
    char *A[ARRAYMAX];
    
    initStrArray(A, ARRAYMAX);
    cout << "Unsorted:" << endl;
    printStrArray(A, ARRAYMAX);
    cout << endl << "Sorting Array..." << endl;
    sortStrArray(A, 0, ARRAYMAX-1);
    printStrArray(A, ARRAYMAX);
    
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
