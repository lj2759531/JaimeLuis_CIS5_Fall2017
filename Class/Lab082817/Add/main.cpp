/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on August 28, 2017, 10:32 AM
 * Purpose: Add 2 numbers
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
    short a,b,c;
    // Variable Initialization
    a=20000;
    b=30000;
    // Process Mapping - Inputs to Outputs
            c=a+b;
    // Re-Display Inputs and write the Outputs
            cout<<a<<" + "<<b<<" = "<<c<<endl;
    // Exit function main, end of program 
    return 0;
}