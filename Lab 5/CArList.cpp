/************************************************
* FILE(S):       CArList.cpp, CArList.h, CArrayList.cpp
* PROGRAMMER:    Daniel Moe
* DATE:          Sep. 5 2012
* LAB:           Lab 5
* 
* PURPOSE: Inline member functions of class CArList
************************************************/

#include <cstdlib>
#include <iostream>
#include "CArList.h"
#include "CArrayList.cpp"
using namespace std;

/*************************
*Function Main()
*************************/
int main(int argc, char *argv[])
{
/**************************
*Declarations
**************************/
char choice;     //user choice input
int position;    //user position input
int value;       //user value input


cout << "ARRAY-BASED LIST ADT" << endl << "Select one of the following:" << endl;
cout << "(A)dd (D)elete (P)rint (Q)uit" << endl;
cin >> choice;   //user choice

CArList myList;  //class object myList

    while(toupper(choice) != 'Q')
    {
        switch(toupper(choice))  //switch based on user input
        {
            case 'A':
                cout << endl << "ADD TO LIST" << endl << "Enter a value: ";
                cin >> value;   //user value input
                myList.add(value);     //value add function call
                break;
            case 'D':
                cout << endl << "DELETE FROM LIST" << endl << "Enter a position: ";
                cin >> position;        //user position input
                myList.del(position);   //position delete function call
                break;
            case 'P':
                cout << endl <<"*** List ***" << endl;
                myList.print();     //print list
                break;
            default:  //input choice is not one of the 4 valid choices
                cout << " Incorrect choice!" << endl << "Please select one of the following:" << endl;
                break;
        }
        //present menu again for more user input
        cout << endl << "Select one of the following:" << endl;
        cout << "(A)dd (D)elete (P)rint (Q)uit" << endl <<"Choice: ";
        cin >> choice; //user choice
    }
    system("PAUSE");
    return EXIT_SUCCESS;
};

