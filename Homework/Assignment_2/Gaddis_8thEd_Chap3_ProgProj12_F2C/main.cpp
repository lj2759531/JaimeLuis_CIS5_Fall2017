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
    //Declare Variables
    float celsius,farenh;
    //Initialize Variables
    cout<<"Enter temperature to convert to  Celsius"<<endl;
    cin>>farenh;   
        celsius=(farenh-32)*5/9;
        cout<<"Temperature in Celsius is "<<celsius<<" degrees"<<endl;
        cout<<"Temperature in Fahrenheit is "<<farenh<<" degrees"<<endl;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}