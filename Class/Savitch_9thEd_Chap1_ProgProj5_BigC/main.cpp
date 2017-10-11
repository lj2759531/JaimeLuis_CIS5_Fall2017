/* 
 * File:   main.cpp
 * Author: Luis Jaime
 *Created on September 13, 2017, 9:47 AM
 *Purpose: To create a program that puts out Big C
 */


//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstring>      //String Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare and initialize Known Variable Values
    char c;
    //Unknown values to calculate
    cout<<"Big C Program"<<endl;
    cout<<"Input the letter to draw a Big C"<<endl;
    cin>>c;    
    
    //Process or map the inputs to the outputs

    //Display/Output all pertinent variables
    cout<<"    "<<c<<c<<c<<c<<endl;
    cout<<"   "<<c<<c<<"  "<<c<<c<<endl;
    cout<<"  "<<c<<c<<endl;
    cout<<"  "<<c<<c<<endl;
    cout<<"  "<<c<<c<<endl;
    cout<<"  "<<c<<c<<endl;
    cout<<"  "<<c<<c<<endl;
    cout<<"   "<<c<<c<<"  "<<c<<c<<endl;
     cout<<"    "<<c<<c<<c<<c<<endl;

    
    //Exit the program
    return 0;
}
