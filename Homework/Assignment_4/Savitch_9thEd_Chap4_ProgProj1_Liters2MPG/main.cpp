/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on October 19, 04:36 PM
 * Purpose:  Program that Converts Liters to Miles 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float galConv= .264179; // Liters to gallons
//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    char again;
        do{
        int liters, mi, gal; //Liters miles MPG and Gallons
        float mpg;
        //Initialize Variables
        cout<<"This Program converts liters used by car and miles driven"<<endl;
        cout<<"To convert to MPG"<<endl;
        cout<<"Enter amount of liters in car and miles driven"<<endl;
        cin>>liters>>mi;
        //Input Data/Variables
        gal=liters*galConv;
        mpg=mi/gal;
        //Process or map the inputs to the outputs

        //Display/Output all pertinent variables
        cout<<"The MPG of "<<liters<<" liters and "<<mi<<" miles is "<<mpg<<" MPG"<<endl;
        cout<<"Do you wanna try again (Y/N)"<<endl;
        cin>>again;
            }while(again=='Y'||again=='y');  
        //Exit the program
    return 0;
}