/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 11, 2017, 9:46 AM
 * Purpose: Determine the free fall distance of an object.
 */

//System Libraries
#include <iostream> // I/O Stream Library
using namespace std; // The standard namespace for system libraries

// User Libraries

//Global Constants - Physics/ Math/ Conversions only
const float GRAVITY=32.174f; // gravity ft/sec^2 @ sea level
const float CNVFTMT=3.28f; // Conversion from feet to meters

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    // Variable Declaration
    float time; // input value in Seconds
    float distFt; //Output distance in Feet
    float distMt; //Output distance in Meters
    float gravMt; //Output distance in Meters
    // Variable Initialization
    cout<<"This program calculates the distance dropped in free fall"<<endl;
    cout<<"Input the time in seconds during free fall"<<endl;
    cin>>time;
    // Process Mapping - Inputs to Outputs
    distFt=GRAVITY*time*time/2;
    distMt=distFt/CNVFTMT;
    gravMt=GRAVITY/CNVFTMT;
    
    // Re-Display Inputs and write the Outputs
    cout<<"time in free fall = "<<time<<"(sec)"<<endl;
    cout<<"Distance fallen = "<<distFt<<" (ft"<<endl;
    cout<<"Distance fallen = "<<distMt<<" (meters)"<<endl;
    cout<<"Gravity -->"<<GRAVITY<<"(ft/sec^2) = ";
    cout<<gravMt<<"meters/sec^2"<<endl;
    // Exit function main, end of program 
    return 0;
}