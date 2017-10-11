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
    short tnkGas;   //Number of Gallons to fill your Tank
    short mlsDrvn;  //Miles driven on a tank of Gas
    short mpg;      //Miles per Gallon
 
    //Input Data/Variables
    cout<<"This program calculates miles per gallon"<<endl;
    cout<<"Input Number of Gallons held by your car tank"<<endl;
    cin>>tnkGas;
    cout<<"Input miles driven till empty"<<endl;
    cin>>mlsDrvn;
    
    //Process or map the inputs to the outputs
    mpg=mlsDrvn/tnkGas;
    
    //Display/Output all pertinent variables
    cout<<mpg<<" mpg = "<<mlsDrvn<<" miles / "<<tnkGas<<" Gallons"<<endl;
    
    //Exit the program
    return 0;
}