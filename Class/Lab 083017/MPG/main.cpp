/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on August 30, 2017, 10:08 AM
 * Purpose: Calculate MPG
 */

//System Libraries
#include <iostream> // I/O Stream Library
using namespace std; // The standard namespace for system libraries

// User Libraries

//Global Constants - Physics/ Math/ Conversions only

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    // Variable Declaration
    short tnkGas;   // Number of gallons to fill your tank
    short mlsDrvn;  // Miles driven on a tank of gas
    short mpg;      // Miles per gallon
  
    
    // Variable Initialization
    
    // Input Data/Variables
    cout<<"This program calculates miles driven per gallon"<< endl;
    cout<< "Input number of Gallons held in your car tank"<<endl;
    cin>>tnkGas;
    cout<<"Input miles driven till empty"<<endl;
    cin>>mlsDrvn;
    
    // Process Mapping - Inputs to Outputs
    mpg=mlsDrvn/tnkGas;
    
    // Re-Display Inputs and write the Outputs
    cout<<mpg<<" mpg = "<<mlsDrvn<<" miles / "<<tnkGas<<" Gallons"<<endl;

    // Exit function main, end of program 
    return 0;
}