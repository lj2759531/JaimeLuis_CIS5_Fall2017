/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on September 12, 2017, 10:35 PM
 * Purpose:  Stock Purchase
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
    short nShrs;    //Number of shares of stock
    float ppShr,fee;//Price per share in $/share and fee as a percent
    //Share cost in $'s, Commission Paid in $'s, Total Paid in $'s
    float shrCost,comPaid,totPaid;
    
    //Initialize Variables by inputting from the command line
    nShrs=750;
    ppShr=35;
    fee=2;
    
    //Process or map the inputs to the outputs
    shrCost=nShrs*ppShr;
    comPaid=shrCost*fee/100;//Convert percentage to decimal
    totPaid=shrCost+comPaid;
    
    //Display/Output all pertinent variables
    cout<<"Number of shares  = "<<nShrs<<endl;
    cout<<"Share price       = $"<<ppShr<<"/share"<<endl;
    cout<<"Commission fee    = "<<fee<<"%"<<endl;
    cout<<"Cost of shares    = $"<<shrCost<<endl;
    cout<<"Commission paid   = $"<<comPaid<<endl;
    cout<<"Total amount paid = $"<<totPaid;
    
    //Exit the program
    return 0;
}