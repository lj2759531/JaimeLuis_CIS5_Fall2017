/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on October 8, 04:36 PM
 * Purpose:  Geometry Calculator
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float pi=3.14159;   // Pi
//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    
      int choice;
    
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Calculate Area of a Circle"<<endl;
        cout<<"2. Calculate the area of a Rectangle"<<endl;
        cout<<"3. Calculate the area of a Triangle"<<endl;
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
                int rad;  //radius of circle
                float area;
                cout<<"This program will calculate the area of a circle"<<endl;
                cout<<"Enter the radius of the circle"<<endl;
                cin>>rad;
                
                area= pi*pow(rad, 2);
                
                cout<<"The area of the circle is "<<area<<endl<<endl;
                break;
            }
            case 2:{
                int area, length, width; 
                
                cout<<"This program will calculate the are of a rectangle"<<endl;
                cout<<"Enter the Length and the width"<<endl;
                cin>>length>>width;
                
                area=length*width;
                
                cout<<"The area of the rectangle is "<<area<<endl<<endl;
                break;
            }
            case 3:{
                int area, base, height;
                cout<<"This program will calculate the are of a triangle"<<endl;
                cout<<"Enter the base and the height"<<endl;
                cin>>base>>height;
                
                area= base*height*.5;
                        
                cout<<"The area of the triangle is "<<area<<endl<<endl;
                break;
            }
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<4);
    
    //Exit the Program
    return 0;
}

