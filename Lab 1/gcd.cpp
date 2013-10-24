#include <cstdlib>
#include <iostream>

using namespace std;

int gcd(int larger, int smaller);

int main(int argc, char *argv[])
{
    int rtrn;     //return value
    int temp;     //temporary number holder
    int rem;      //remainder
    int larger;   //larger int
    int smaller;  //smaller int
    
    cout << "Input two numbers: ";   //prompt user to input two numbers
    cin >> larger;
    cin >> smaller;
    
    if (smaller > larger)            //verify if the 2nd input is larger than 1st
    {  
       temp = larger;                //temporarily store he smaller number
       larger = smaller;             //set the larger number as "larger"
       smaller = temp;               //set the smaller number as "smaller"
    }  
    
    rtrn = gcd(larger,smaller);      //gcd function call
    
    cout << "The greatest common divisor is: " << rtrn << endl;
 
 
 
    system("PAUSE");
    return EXIT_SUCCESS; 
}

int gcd(int larger, int smaller)         //greatest common divisor module
{
    int rtrn;                            //return integer
    if (larger % smaller == 0)           //the numbers divide evenly
       rtrn = smaller;
    
    else                                 //the numbers DONT divide evenly
    rtrn = gcd(larger, larger%smaller);  //recursive function call
    
    return rtrn;
}
