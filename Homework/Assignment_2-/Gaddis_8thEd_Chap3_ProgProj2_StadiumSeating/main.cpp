/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on September 24, 04:36 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include<iostream>     //Input/Output Stream Library
#include<iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
   float classA, classB, classC,total;
    //Initialize Variables
    cout<<"There are three categories in a stadium Class A, Class B, Class C."<<endl;
    cout<<"Class A is $15, Class B is $12, and Class C is $9"<<endl;
    cout<<"Indicate how many tickets of each class you desire."<<endl;
    cout<<"Class A"<<endl;
    cin>>classA;
    cout<<"Class B"<<endl;
    cin>>classB;
    cout<<"Class C"<<endl;
    cin>>classC;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs;
    total=(15.00*classA)+(12.00*classB)+(9.00*classC);
    //Display/Output all pertinent variables
    cout<<"Your total is $"<<setprecision(5)<<showpoint<<total<<endl;
    //Exit the program
    return 0;
}