/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on September 24, 04:36 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    int i, p;// Initial and prime
    
    cout<<"This program will output all prime numbers less then 100"<<endl;

        for(i=2; i<100; i++)
        { 
        for(p=2; p<= (i/p); p++) 
            if(!(i%p))
            break; // if factor found, not prime 
        if(p > (i/p))
            cout<<i<<" is prime numbers"<<endl; 
        }
        //Exit the program
    return 0;
}