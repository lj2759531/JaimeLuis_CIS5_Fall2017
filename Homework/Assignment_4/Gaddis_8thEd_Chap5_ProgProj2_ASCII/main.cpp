/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on October 20, 04:36 PM
 * Purpose:  Program that outputs ASCII Codes
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    
    int number;  
    cout<<"This program will out put all ASCII codes"<<endl;
    cout<<"For numbers 0-127"<<endl;
    for(number=0; number<=127;number++){
        cout<<(char)number<<" ";
        if(number % 16 == 0)
            cout<<endl;
        }    
    //Exit the program
    return 0;
}