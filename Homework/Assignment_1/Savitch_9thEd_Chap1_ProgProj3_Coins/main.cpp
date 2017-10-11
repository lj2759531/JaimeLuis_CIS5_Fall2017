/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on August 31, 2017, 10:40 PM
 * Purpose: Calculate value of coins
 */

//System Libraries
#include <iostream> // I/O Stream Library
using namespace std; // The standard namespace for system libraries

// User Libraries

//Global Constants - Physics/ Math/ Conversions only

// Function Prototypes

// Execution Begins Here!
int main() {
    // Variable Declaration
    float qrtrs=.25; // Operand 1 -32768 to 32767 = (-2^15,2^15-1)
    float dimes=.10; // Operand 2 -32768 to 32767 = (-2^15,2^15-1)
    float nickels=.05; // Operand 3 -32768 to 32767 = (-2^15,2^15-1)
    
    // Variable Initialization
   
    // Input Data/Variables
    cout<<"This program will calculate the value of coins(quarters, dimes, and nickels)"<< endl;
    cout<<"Enter number of quarters"<<endl;
    cin>> qrtrs;
    cout<<"Enter number of dimes"<<endl;
    cin>> dimes;
    cout<<"Enter number of nickels"<<endl;
    cin>>nickels;
     
    // Process Mapping - Inputs to Outputs
    cout<<"The total is $"<<qrtrs*.25+dimes*.1+nickels*.05<<endl;
      
    // Re-Display Inputs and write the Outputs
 
    // Exit function main, end of program 
    return 0;
}
