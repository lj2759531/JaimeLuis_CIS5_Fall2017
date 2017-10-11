/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on September 12, 2017, 3:31 PM
 * Purpose: Land Calculation Acres/miles^2
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float CNVFTM=1.0/5280/5280;  //Conversion from ft^2 to miles^2
const float CNVFTA=1.0/43560;      //Conversion from ft^2 to Acres

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nft2,nacres,nmiles2;
    
    //Initialize Variables by inputting from the command line
    cout<<"This program converts feet^2 to Acres and miles^2"<<endl;
    cout<<"Input the ft^2 area to convert"<<endl;
    cin>>nft2;
    
    //Process or map the inputs to the outputs
    nacres=nft2*CNVFTA;
    nmiles2=nft2*CNVFTM;
    
    //Display/Output all pertinent variables
    cout<<nft2<<" square feet = "<<nacres<<" acres"<<endl;
    cout<<nft2<<" square feet = "<<nmiles2<<" square miles"<<endl;
    
    //Exit the program
    return 0;
}