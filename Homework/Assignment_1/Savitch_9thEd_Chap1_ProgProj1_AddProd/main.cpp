/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on August 31, 2017, 10:08 AM
 * Purpose: Calculate addition and product of two numbers
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
    short op1; // Operand 1 -32768 to 32767 = (-2^15,2^15-1)
    short op2; // Operand 2 -32768 to 32767 = (-2^15,2^15-1)
    int   add; // Add -> +- 2 billion = (-2^31,2^31-1)
    int  prod; // Prod the result of multiplying op1 and op2 -> +- (-2^31,2^31-1)
    
    // Variable Initialization
    op1=10000; // Example of a literal initialization
    
    // Input Data/Variables
    cout<<"This program adds and multiplies 2 variables"<< endl;
    cout<<"The first variable is initialized to 10000"<<endl;
    cout<< "Input second value with range of-32768 to 32767 = (-2^15,2^15-1)"<<endl;
    cin>>op2;
    
    // Process Mapping - Inputs to Outputs
    add=op1+op2;
    prod= op1*op2;
    
    // Re-Display Inputs and write the Outputs
    cout<<op1<<"+"<<op2<<"="<<add<<endl;
    cout<<op1<<"*"<<op2<<"="<<prod<<endl;

    // Exit function main, end of program 
    return 0;
}
