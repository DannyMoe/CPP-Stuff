/************************************************
* FILE(S):          arrays.h
* PROGRAMMER:    Daniel Moe
* DATE:          August 8, 2012
* LAB:           Lab 2
* 
* PURPOSE: Array header file
************************************************/

#include <cstdlib>
#include <iostream>

const int ARRAYMAX = 16;
const int DATAMAX = 127;
void initArray (int A[], int arraySize, int modValue);
void printArray (int A[], int arraySize);
void sortArray (int A[], int arraySize);
int linsearch(int item, int dataArray[], int ARRAYMAX);
int binsearch(int item, int dataArray[], int ARRAYMAX);
