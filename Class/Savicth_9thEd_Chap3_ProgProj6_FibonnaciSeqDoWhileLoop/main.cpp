/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Date: October 11, 2017
 * Purpose:  Fibonnaci Sequence Do While Loop
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi, fim1, fim2,count=4;
    int valEnd=500000, perLine=10;
    //Initialize Variables
    fim1=fim2=1;    //initialize the sequence
    
    //Process or map the inputs to the outputs
    cout<<fim1<<","<<fim2<<",";
    fi=fim1+fim2;
    cout<<fi<<",";
    //loop and print
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        cout<<fi<<",";
        if(count++%perLine==(perLine-1))cout<<endl;
    }while(valEnd>fi);
    
    //Exit the program
    return 0;
}