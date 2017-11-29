/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on November 27, 2017, 9:45 PM
 * Purpose:  Chips and Salsa
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <string>       //String library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int total(int [], int);
int small(int [], int);
int large(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=5;
    int sales[SIZE], lg, sm;
    string name[SIZE]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    
    //Input number of jars sold the past month for each type of salsa
    for (int type=0;type<SIZE;type++){
        cout<<"Enter the amount of "<<name[type]<<" Salsa that was sold "
                "in the past month"<<endl;
        cin>>sales[type];
        while (sales[type]<0){
            cout<<"Input cannot be negative"<<endl;
            cin>>sales[type];
        }
    }
    
    //Call functions 
    sm=small(sales,SIZE);
    lg=large(sales,SIZE);
    cout<<"Amount of Jars sold = "<<total(sales,SIZE)<<endl;
    for (int jars=0;jars<SIZE;jars++){
        cout<<"Amount of "<<name[jars]<<" sold = "<<sales[jars]<<endl;
    }
    cout<<"Lowest Seller = "<<name[sm]<<endl;
    cout<<"Highest Seller = "<<name[lg]<<endl;
    
    
    //Exit the program
    return 0;
}

int total(int x[], int y){
    int total=0;
    for (int type=0;type<y;type++){
        total+=x[type];
    }
    return total;
}

int small(int x[], int y){
    int smallst=0;
    for (int low=1;low<y;low++){
        if(x[low]<x[smallst])smallst=low;
    }
    return smallst;
}

int large(int a[], int b){
    int largest=0;
    for (int high=1;high<b;high++){
        if(a[high]>a[largest])largest=high;
    }
    return largest;
}
