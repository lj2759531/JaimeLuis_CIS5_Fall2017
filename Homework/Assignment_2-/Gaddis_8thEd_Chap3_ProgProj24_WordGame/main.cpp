/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on September 22, 2017, 11:42 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include<cstring>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    
    //Initialize Variables
    string name, age, city, college, prof, animal, petName;

    //Input Data/Variables
    cout<<"Let me tell you a story"<< endl;
    cout<<"But first I need some information"<< endl;
    cout<<"What is your name?"<<endl;
    getline(cin,name);
    cout<<"How old are you?"<<endl;
    getline(cin,age);
    cout<<"Name a city"<<endl;
    getline(cin,city);
    cout<<"Name a college"<<endl;
    getline(cin,college);
    cout<<"Name a profession"<<endl;
    getline(cin,prof);
    cout<<"Name a type of animal"<<endl;
    getline(cin,animal);
    cout<<"Pets name"<<endl;
    getline(cin,petName);
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<". At the age of "
            <<age<<", "<<name<<" went to college at "<<college<<". "<<name<<" graduated "
            "and went to work as a "<<prof<<". Then "<<name<<" adopted a(n) "<<animal<<
            " named "<<petName<<". They lived happily ever after!"<<endl;
    //Exit the program
    return 0;
}