/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on September 12th, 2017, 10:05 PM
 * Purpose:  Energy Drink
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned char CNVPERC=100;  //Percent conversion

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare and initialize Known Variable Values
    unsigned short nCustSv=16500;  //Number of customers surveyed
    unsigned char  pEneDrk=15;     //Percentage energy drinkers
    unsigned char  pCitDrk=58;     //Percentage citrus drinkers+
    //Unknown values to calculate
    unsigned short nEneDrk;        //Number energy drinkers
    unsigned short nCitDrk;        //Number citrus drinkers
    
    //Process or map the inputs to the outputs
    nEneDrk=nCustSv*pEneDrk/CNVPERC;
    nCitDrk=nEneDrk*pCitDrk/CNVPERC;
    
    //Display/Output all pertinent variables
    cout<<"Customers Surveyed = "<<nCustSv<<endl;
    cout<<"Percentage Energy Drinkers = "
            <<static_cast<int>(pEneDrk)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers of all Drinkers = "
            <<static_cast<int>(pCitDrk)<<"%"<<endl;
    cout<<"Number of Energy Drinkers = "<<nEneDrk<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCitDrk<<endl;
    
    //Exit the program
    return 0;
}
