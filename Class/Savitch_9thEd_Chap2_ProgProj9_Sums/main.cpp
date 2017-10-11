
/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on September 25, 2017, 9:05 AM
 * Purpose: Equate the sum of positive, negative, and all numbers.
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
int x, sumPos=0, sumNeg=0, sum=0;    
    //Initialize Variables
cout<<"Sum 10 numbers Pos or Neg and get Pos or Neg sum"<<endl;
cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

cout<<"Input a number"<<endl;
cin>>x;

sumPos+=(x>0?x:0);
sumNeg+=(x<0?x:0);

//calculate total
sum=sumPos+sumNeg;
//Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
cout<<"The positive sum = "<<sumPos<<endl;
cout<<"The negative sum = "<<sumNeg<<endl;
cout<<"The total sum = "<<sum<<endl;
    
    //Exit the program
    return 0;
}