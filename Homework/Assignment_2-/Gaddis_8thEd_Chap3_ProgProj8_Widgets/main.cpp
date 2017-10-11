/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on September 24, 2017, 3:22 PM
 * Purpose: Identify how much sweetener will kill a person.
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
    
    //Initialize Variables
    int pllt, wid;
    float plltWid;
    
    wid=12.5;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"This program will calculate the number of widgets per pallet."<<endl;
    cout<<"Enter weight of empty pallet"<<endl;
    cin>>pllt;
    cout<<"Enter weight of loaded pallet"<<endl;
    cin>>plltWid;
     //Display/Output all pertinent variables
    
    wid=(plltWid-pllt)/12.5;
    
    cout<<"The number of widgets on that pallet are "<<wid<<endl;
    //Exit the program
    return 0;
}