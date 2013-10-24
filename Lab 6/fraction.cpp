/*******************************************************************************

 FILES:         calculate.cpp, fraction.h, fraction.cpp
 PROGRAMMER:    Daniel Moe
 DATE:          9/19/12
 LAB:           Lab 6
 
 PURPOSE:       Allows user to do basic arithmetic with fractions
 
*******************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include "fraction.h"

CFract::CFract()                        //constructor
{
    num = denom = 0;                    //sets num and denom to 0
}

CFract::CFract(int pnum, int pdenom)    //2 arg constructor
{
    num = pnum;                         //sets num to pnum
    denom = pdenom;                     //sets denom to pdenom
}

CFract::CFract(const CFract& rF)        //single arg constructor
{
    num = rF.num;                       //sets num to num of rF
    denom = rF.denom;                   //sets denom to denom of rF
}

CFract& CFract::operator=(const CFract& rF) //overloaded assignment operator
{
    if(this != &rF)
    {
        num = rF.num;
        denom = rF.denom;
    }
    
    return (*this);
}
/*overloaded add operator, allows addition of fraction objects*/
CFract CFract::operator+(const CFract& rF)
{
    CFract temp;
    
    temp.num = num*rF.denom + denom*rF.num;//cross multiply and add fractions
    temp.denom = denom*rF.denom;    //multiply denominators
    temp.lowTerms();    //lowTerms function call
    
    return temp;
}
/*overloaded subtract operator, allows for subtraction of fraction objects*/
CFract CFract::operator-(const CFract& rF)
{
    CFract temp;
    
    temp.num = num*rF.denom - denom*rF.num;//cross multiply and subtract fractions
    temp.denom = denom*rF.denom;    //multiply denominators
    temp.lowTerms();    //lowTerms function call
    
    return temp;
}
/*overloaded multiply operator, allows multiplication of fraction objects*/
CFract CFract::operator*(const CFract& rF)
{
    CFract temp;    //CFract object: temp
    
    temp.num = num*rF.num;  //multiply numerators, set as temp numerator
    temp.denom = denom*rF.denom;//multiply denominators, set as temp denominator
    temp.lowTerms();    //lowTerms function call
    
    return temp;    //return CFract class
}

/*overloaded divide operator, allows division of fraction objects*/
CFract CFract::operator/(const CFract& rF)
{
    CFract temp;    //CFract object: temp
    
    temp.num = num*rF.denom;    //cross multiply, set as temp numerator
    temp.denom = denom*rF.num;  //cross multiply, set as temp denominator  
    temp.lowTerms();        //lowTerms function call
    
    return temp;    //return CFract class
}
/*overloaded insertion operator, allows printing of fraction objects*/
ostream& operator<<(ostream& os, const CFract& rF)
{   
    if(rF.denom == 1)   //denom is '1' fraction is a whole number: num   
    {         
        os<<rF.num;     //print num only
    }
    
    else    //fraction is truly a fraction, print both num and denom
    {
        os<<rF.num<<"/"<<rF.denom;
    }
    
    return os;      //return ostream object
}
/*overloaded extraction operator, 
allows fraction object to be filled with user input*/
istream& operator>>(istream& is, CFract& rF)
{
    char c;
    
    is>>rF.num>>c>>rF.denom;
    
    return is;
}
/*overloaded equality test operator*/
bool CFract::operator==(const CFract& rF)
{
    return num==rF.num&& denom==rF.denom;
}
/*overloaded inequality test operator*/
bool CFract::operator!=(const CFract& rF)
{
    return num!=rF.num|| denom!=rF.denom;
}

/*function that reduces fraction by a factor based on GCD*/
void CFract::lowTerms()
{
    int factor;
    
    if((factor=gcd(denom,num)) > 1)//test is GCD is greater than 1
    {
        num = num/factor;       //reduce num by factor
        denom = denom/factor;   //reduce denom by factor
    }
}

/*function than computes the greatest common divisor of two ints*/
int CFract::gcd(int larger, int smaller)
{
    int remainder = 0;
    int rtrn = 0;
    int temp = 0;
   
    /*test that smaller int isn't in fact the larger int
     if so, swap larger and smaller via "temp"*/
    if(smaller > larger)
    {
        temp = smaller;
        smaller = larger;
        larger = temp;
    }
    
    if(smaller != 0)
    {
        do
        {
            remainder = larger % smaller; //calculate remainder of larger/smaller
            
            if(remainder != 0)//if numbers don't divide completely
            {
                larger = smaller;   //assign smaller to larger
                smaller = remainder;//assign remainder to smaller
            }
            
            else
            {
                rtrn = smaller;//numbers divide evenly
            }
            
        }while(remainder != 0); //loop until numbers divide completely
    }
    
    return rtrn;
}













