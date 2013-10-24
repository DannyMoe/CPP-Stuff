/************************************************
* FILE(S):          strarray.h, strarray.cpp, strsort.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Aug. 15, 2012
* LAB:           Lab 3
* 
* PURPOSE: Prototypes of functions in strarray.cpp.
************************************************/

/**************************
*Includes
**************************/
#include <cstdlib>
#include <iostream>

int initStrArray(char *A[], int arraySize);
int printStrArray(char *A[], int arraySize);
int sortStrArray(char *A[], int left, int right);
