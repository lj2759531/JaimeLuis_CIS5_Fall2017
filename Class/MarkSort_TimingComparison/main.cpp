/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on Nov 27th, 2017, 8:30 AM
 * Purpose:  Sorting with a Conquer and Divide Technique
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
void swap(int &,int &);
void smllst0(int [],int,int);
void smllst1(int [],int,int);
void mrkSrt3(int [],int);
void mrkSrt2(int [],int);
void mrkSrt1(int [],int);
void cpyAry(int [],int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=150000;
    int array[SIZE],brray[SIZE],crray[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    cpyAry(array,brray,SIZE);
    cpyAry(array,crray,SIZE);
    
    //Print the Array
    //prntAry(array,SIZE,5);
    //prntAry(brray,SIZE,5);
    
    //Timing for 1 function sort
    int beg=time(0);
    mrkSrt1(array,SIZE);
    int end=time(0);
    cout<<"Sort 1 function took "<<end-beg
            <<" secs for array size = "<<SIZE<<endl;
    
    //Timing for 2 function sort
    beg=time(0);
    mrkSrt2(brray,SIZE);
    end=time(0);
    cout<<"Sort 2 function took "<<end-beg
            <<" secs for array size = "<<SIZE<<endl;
    
    //Timing for 3 function sort
    beg=time(0);
    mrkSrt3(crray,SIZE);
    end=time(0);
    cout<<"Sort 3 function took "<<end-beg
            <<" secs for array size = "<<SIZE<<endl;
    
    //Display/Output all pertinent variables
    //prntAry(array,SIZE,5);
    
    //Exit the program
    return 0;
}

void cpyAry(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void mrkSrt1(int a[],int n){
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

void mrkSrt2(int a[],int n){
    for(int i=0;i<n-1;i++){
        smllst0(a,n,i);
    }
}

void smllst0(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i]){
            int temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
        }
    }
}

void mrkSrt3(int a[],int n){
    for(int i=0;i<n-1;i++){
        smllst1(a,n,i);
    }
}

void smllst1(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
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
        a[i]=rand();
    }
}