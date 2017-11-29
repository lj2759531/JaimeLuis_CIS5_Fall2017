/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on November 28, 2017, 11:00 PM
 * Purpose:  Rainfall Statistics
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void rainFal(float[]);
float ttlRain(float[]);
float avgRain(float[]);
void rainLgS(float[]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=12;
    float rain[SIZE];

    //Input rainfall per month
    rainFal(rain);
    
    //Output Statistics
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Total rainfall for the year = "<<ttlRain(rain)<<endl;
    cout<<"The average monthly rainfall = "<<avgRain(rain)<<endl;
    
    //Highest and lowest amounts of rain
    rainLgS(rain);
    
    //Exit the program
    return 0;
}

void rainFal(float r[]){
    cout<<"Enter rainfall for each month"<<endl;
    for (int month=0;month<12;month++){
        cout<<"Month "<<month+1<<" rainfall = ";
        cin>>r[month];
        while (r[month]<0){
            cout<<"Enter a non-negative number"<<endl;
            cin>>r[month];
        }  
    }
}

float ttlRain(float t[]){
    float total=0;
    for (int month=0;month<12;month++){
        total+=t[month];
    }
    return total;
}

float avgRain(float a[]){
    float avg=0;
    for (int month=0;month<12;month++){
        avg+=a[month];
        if (month==11)avg/=12;
    }
    return avg;
}

void rainLgS(float x[]){
    float min=x[0], max=x[0];
    for (int values=1;values<10;values++){
        if (min>x[values]){
            min=x[values];
        }else if (max<x[values]){
            max=x[values];
        }
    }
    cout<<"Most rainfall in a month = "<<max<<endl;
    cout<<"Least rainfall in a month = "<<min<<endl;
}