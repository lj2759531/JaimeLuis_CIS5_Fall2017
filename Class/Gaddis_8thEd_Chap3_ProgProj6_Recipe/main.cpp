/* 
 * File:   main.cpp
 * Author: LUIS JAIME *
 * Created on September 25, 2017, 9:40 AM
 * Purpose: Adjust the ingredients in a recipe.
 */
///System Libraries
#include <iostream>     //Input/Output Stream Library
#include<iomanip>       //format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const unsigned short bCkEs=48;
    unsigned short nCkEs;
    float sugar, butter, flour;
    //Initialize Variables
    sugar=1.5f;//cups of sugar
    butter=1.0f;//cups of butter
    flour=2.75f;//cups of flour
    //Input Data/Variables
    cout<<"This program calculates the amount of ingredients"
            <<" for cookie recipe"<<endl;
    cout<<"Input the number of cookies you would like to make"<<endl;
    cin>>nCkEs;
    //Process or map the inputs to the outputs
    float ratio=static_cast<float>(nCkEs)/bCkEs;
    sugar*=ratio;
    butter*=ratio;
    flour*=ratio;
    //Display/Output all pertinent variables
    cout<<"Your ingredients should have the following quantity for "<<
            nCkEs<<" cookies"<<endl;
    cout<<setprecision(3)<<fixed<<endl;
    cout<<"Sugar = "<<sugar<<" cups"<<endl;
    cout<<"Butter = "<<butter<<" cups"<<endl;
    cout<<"Flour = "<<flour<<" cups"<<endl;
    
    //Exit the program
    return 0;
}