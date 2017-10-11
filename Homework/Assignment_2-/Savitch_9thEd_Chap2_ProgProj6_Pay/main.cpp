/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on September 24, 04:36 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include<iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
 int hours, dpndts;
 float grossPay, rate, sstax, fedtax, sttax, uDues, hcc, ttax,nPay,tdedct;
 //rate=10;
rate=16.78;
 sstax=.06;
 fedtax=.14;
 sttax=.05;
 uDues=10;
 hcc=35;
    //Initialize Variables
 cout<<"This program will calculate your pay"<<endl;
 cout<<"Enter the amount of hours worked per week"<<endl;
 // cout<<"Enter your rate of pay"<<endl;
 // cin>>rate;
 cout<<"Round to a whole number of hours"<<endl;
 cin>>hours;
 cout<<"Enter number of dependents"<<endl;
 cin>>dpndts;
         
    //Input Data/Variables
 
    //Process or map the inputs to the outputs
 if(hours>40)
     grossPay=rate*40+1.5*rate*(hours-40);
 else
     grossPay=rate*hours;  
 
 ttax=grossPay*(sstax+fedtax+sttax);
 
 if(dpndts>3)
     tdedct=ttax+hcc+uDues;
 else
     tdedct=ttax+uDues;
 
 nPay=grossPay-tdedct;

 

    //Display/Output all pertinent variables
 cout<<setprecision(2)<<fixed<<"Total taxes are $"<<ttax<<endl;
 cout<<setprecision(2)<<fixed<<"Total deductions are $"<<tdedct<<endl;
 cout<<setprecision(2)<<fixed<<"Gross pay is $"<<grossPay<<endl;
 cout<<setprecision(2)<<fixed<<"Net pay is $"<<nPay<<endl;
 
    //Exit the program
    return 0;
}