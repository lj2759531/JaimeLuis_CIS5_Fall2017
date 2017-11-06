/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 1st, 2017, 8:55 AM
 * Purpose:  Midterm Problem 6 Series
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Absolute value
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float x,sum,term;
    int nTerms;
    
    //Input Data/Variables
    cout<<"Read in the Number x for Series Sum"<<endl;
    cout<<"and the Number of Terms"<<endl;
    cin>>x>>nTerms;
    
    //Process Loop Calculation
    int sign=-1;
    sum=0;
    for(int pwr=1;pwr<=(2*nTerms-1);pwr+=2){
        float sfact=1;
        for(int i=1;i<=pwr;i++){
            sfact*=i;
        }
        sign*=-1;
        float term=sign*pow(x,pwr)/sfact;
        sum+=term;
    }
    
    //Output the students way
    cout<<"Students Way"<<endl;
    cout<<"The Series Sum of "<<x
            <<" with "<<nTerms<<" terms ="
            <<sum<<endl;
    cout<<"Infinite Series sin("<<x<<")="<<sin(x)<<endl;

    //Exit the program
    return 0;
}