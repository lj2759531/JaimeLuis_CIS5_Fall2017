/* 
 * File:   main.cpp
 * Author: rcc
 * Created on October 4, 2017, 9:35 AM
 * Purpose:  Creating a Menu without Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <stdlib.h>     //Exit Failure
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    //Initialize Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem Savitch 9thEd Chape 3 ProgProj 3 Roman Numerals"<<endl;
    cout<<"2. Problem 2"<<endl;
    cout<<"3. Problem 3"<<endl;
    cout<<"4. Problem 4"<<endl;
    cout<<"5. Problem 5"<<endl;
    cout<<"6. Problem 6"<<endl;
    cout<<"7. Problem 7"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
    cin>>choice;
    switch (choice){
        case 1:{       
            cout<<"You are in Problem 1"<<endl;
            break;
        }
        
        case 2:{
            cout<<"You are in problem 2"<<endl;
            break;
        }
        
        case 3:{
            cout<<"You are in problem 3"<<endl;
            break;
        }
        
        case 4:{
            cout<<"You are in problem 4"<<endl;
            break;
        }
        
        case 5:{
            cout<<"You are in problem 5"<<endl;
            break;
        }
        
        case 6:{
            cout<<"You are in problem 6"<<endl;
            break;
        }
        
        case 7:{
            cout<<"You are in problem 7"<<endl;
            break;
        }
        
        case 8:{
            cout<<"You are in problem 8"<<endl;
            break;
        }
        
        case 9:{
            cout<<"You are in problem 9"<<endl;
            break;
        }
        default:{
            cout<<"You seem to have problems with instructions"<<endl;
            cout<<"You are unworthy of this code"<<endl;
            cout<<"Good Bye!"<<endl;
        }
    }
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}