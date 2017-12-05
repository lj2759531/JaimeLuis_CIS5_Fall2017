/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on Nov 29th, 2017, 8:50 AM
 * Purpose:  Binary Search/Bisection
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Random Function Library
#include <ctime>        //Set random number seed with time
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
void mrkSort(int [],int);
int  bSearch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Print the Array
    prntAry(array,SIZE,10);
    
    //Process or map the inputs to the outputs
    mrkSort(array,SIZE);
    int val=array[rand()%SIZE];
    val=array[SIZE-1];
    int indx=bSearch(array,SIZE,val);
    
    //Display/Output all pertinent variables
    prntAry(array,SIZE,10);
    cout<<val<<" was found at index = "<<indx<<endl;
    
    //Exit the program
    return 0;
}

int  bSearch(int a[],int n,int val){
    int first=0,last=n-1,middle;
    do{
        middle=(last+first)/2;
        if(a[middle]==val){
            return middle;
        }else if(a[middle]>val){
            last=middle-1;
        }else{
            first=middle+1;
        }  
    }while(last>=first);
    return -1;
}

void mrkSort(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int i=pos+1;i<n;i++){
            if(a[pos]>a[i]){
                int temp=a[pos];
                a[pos]=a[i];
                a[i]=temp;
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}