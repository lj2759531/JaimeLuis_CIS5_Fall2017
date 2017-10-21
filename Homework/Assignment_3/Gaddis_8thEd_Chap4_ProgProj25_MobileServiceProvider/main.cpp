/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on October 9, 04:36 PM
 * Purpose:  Calculate amount of a mobile service bill
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Parametric Manipulator
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    
    int choice, min, minUsd;
    float planA, planB, planC, addMinA, addMinB, bill;
    planA=39.99;
    planB=59.99;
    planC=69.99;
    cout<<"Choose a mobile service plan"<<endl;
    cout<<"1. Package A $39.99/ month for 450 minutes"<<endl;
    cout<<"   Additional minutes are $.45/ minute"<<endl;
    cout<<"2. Package B $59.99/ month for 900 minutes"<<endl;
    cout<<"   Additional minutes are $.40/ minute"<<endl;
    cout<<"3. Package C $69.99/ month for unlimited minutes"<<endl;
    cin>>choice;

    //Process or map the inputs to the outputs
    switch(choice){
        case 1:{
            min=450;
            addMinA=.45;
            cout<<"You have Package A with basic price of $39.99"<<endl;
            cout<<"How many minutes where used"<<endl;
            cin>>minUsd;
            if(min>minUsd)
                cout<<"Your bill amount is $"<<planA<<endl;
            else{
            bill=planA+(minUsd-min)*addMinA;
            cout<<"Your bill amount is $"<<bill<<endl;
                }
            break;
            }
        case 2:{
            min=900;
            addMinB=.40;
            cout<<"You have Package B with basic price of $59.99"<<endl;
            cout<<"How many minutes where used"<<endl;
            cin>>minUsd;
            if(min>minUsd)
                cout<<"Your bill amount is $"<<planB<<endl;
            else{
            bill=planB+(minUsd-min)*addMinB;
            cout<<"Your bill amount is $"<<bill<<endl;
                }
            break;
            }
        case 3:{
            cout<<"You have Package C with a price of $69.99"<<endl;
            break;
            }
        default:{
            cout<<"Exiting, have a great day!"<<endl;
            break;
            }
            
    }
    
    //Exit the program
    return 0;
}