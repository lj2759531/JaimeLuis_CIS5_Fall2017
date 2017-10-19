/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on October 4, 2017, 10:04 AM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Math
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float etox=1,x,term;
    int counter=1;

    //Input Data/Variables
    cout<<"This program approximates e^x"<<endl;
    cout<<"Input a real from 0 to 2"<<endl;
    cin>>x;
    
    //Process or map the inputs to the outputs
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    term=x; 
    counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term*=x/counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term*=x/counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term*=x/counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term*=x/counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term*=x/counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term*=x/counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term*=x/counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    cout<<"e^"<<x<<" with Library function = "<<exp(x)<<endl;
    
    //Exit the program
    return 0;
}