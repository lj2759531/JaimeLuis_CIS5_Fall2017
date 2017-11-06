/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on Nov 1st, 2017, 8:55 AM
 * Purpose:  Midterm Problem 1 Big X
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
    int xNum;
    
    //Input Data/Variables
    cout<<"Read in the Number for Big X"<<endl;
    cout<<"X>=1 and X<=50"<<endl;
    cin>>xNum;
    
 
    
    //Students probably would have done it this way
    if(xNum%2){
        for(int cnt=xNum,row=1;row<=xNum;row++,cnt--){
            for(int col=1;col<=xNum;col++){
                if(row==col)cout<<cnt;
                else if(col==cnt)cout<<row;
                else cout<<" ";
            }
            cout<<endl;
        }
    }else{
        for(int cnt=xNum,row=1;row<=xNum;row++,cnt--){
            for(int col=1;col<=xNum;col++){
                if(row==col)cout<<row;
                else if(col==cnt)cout<<cnt;
                else cout<<" ";
            }
            cout<<endl;
        }        
    }
    
    
    //Exit the program
    return 0;
}