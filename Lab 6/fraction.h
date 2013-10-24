/*******************************************************************************

 FILES:         calculate.cpp, fraction.h, fraction.cpp
 PROGRAMMER:    Daniel Moe
 DATE:          9/19/12
 LAB:           Lab 6
 
 PURPOSE:       Allows user to do basic arithmetic with fractions
 
*******************************************************************************/

#ifndef CFRACT_H
#define CFRACT_H
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <iostream>


using namespace std;
class CFract
{
    public:
        CFract();               //constructor
        CFract(int,int);        //two arg constructor
        CFract(const CFract&);  //one arg constructor
        ~CFract(){}             //destructor
        CFract& operator= (const CFract&);  //overloaded = operator
        CFract operator+ (const CFract&);   //overloaded + operator
        CFract operator- (const CFract&);   //overloaded - operator
        CFract operator* (const CFract&);   //overloaded * operator
        CFract operator/ (const CFract&);   //overloaded / operator
        bool operator== (const CFract&);    //overloeaded == operator
        bool operator!= (const CFract&);    //overloaded != operator
        
        //overloded << operator
        friend ostream& operator<< (ostream&, const CFract&);
        //overloaded >> operator
        friend istream& operator>> (istream&, CFract&);
        
    private:
        int num;            //fraction numerator
        int denom;          //fraction denominator
        void lowTerms();    //lowest terms function
        int gcd(int, int);  //greatest common divisor function
        
    
};




#endif
