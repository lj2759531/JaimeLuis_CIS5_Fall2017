/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on October 18, 2017, 10:30 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //math library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    float pop, incPop, popPow;
    int nYears;
    //Initialize Variables
    cout<<"Calculate the increase in population over time"<<endl;
    cout<<"Input the population, percentage yearly increase and "<<endl;
    cout<<"The number of years"<<endl;
    cin>>pop>>incPop>>nYears;
    //Input Data/Variables
    popPow=pop*pow((1+incPop/100),nYears);
    for(int year=1;year<=nYears;year++){
        pop*=(1+incPop/100.0f);
    }
    //Process or map the inputs to the outputs
    cout<<"The resulting population in "<<nYears<<" years = ";
    cout<<pop<<" people not poop."<<endl;
    cout<<"Same result population in "<<nYears<<" years = "
            <<popPow<<" people not poop"<<endl;
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}