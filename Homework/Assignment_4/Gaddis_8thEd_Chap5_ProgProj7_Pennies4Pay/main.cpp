/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on October 20, 04:36 PM
 * Purpose:  Program that Calculates amount of pennies paid for days worked
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
    int dollar,pennies,days, change;
    float pay; 
    
    //Initialize Variables
    cout<<"This program will output number of pennies paid"<<endl;
    cout<<"You will get maid 1 penny first day and add a penny every day after that"<<endl;
    cout<<"Ex. Day 1= 1 penny, Day 2= 2 pennies, Day 3= 3 pennies, etc."<<endl;
    cout<<"Enter the amount of days worked"<<endl;
    cin>>days;
   
    //Process or map the inputs to the outputs
    pennies=(days * (days + 1)) / 2;
    dollar=(pennies/100)+.5;
    change=(pennies%100)+.5;
    pay=dollar+change;
    
    cout<<"Your pay for "<<days<<" days is "<<pennies<<" pennies"<<endl;
    cout<<"Your pay is $"<<dollar<<"."<<change<<endl;
    //Exit the program
    return 0;
}
