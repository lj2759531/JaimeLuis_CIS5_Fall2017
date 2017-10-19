/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on October 4, 2017, 9:35 AM
 * Purpose:  Creating a Menu without Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>     //For the power function
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //Set the Random Seed with Time
#include <stdlib.h>     //Exit Failure
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int THSNDS=1000;
const int HUNDRDS=100;
const int TENS=10;
const int ONES=1;
const float pi=3.14159;   // Pi

//Function Prototypes

//Execution Begins Here!
int main() {
//Declare Variables
    int choice;
    int fi, fim1, fim2,count;
    int seqEnd=30, perLine=10;
    int day, month, year, product;
    srand(static_cast<unsigned int>(time(0)));
    int dist;
    int air=1100;
    int water=4900;
    int steel=16400;
    int timeTrv;
    int distTm;
    //Initialize Variables
    month>=1&&month<=12;
    day>=1&&day<=31;
    fim1=fim2=1;    //initialize the sequence
    unsigned int op1,op2,stuAns,result;
    
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem Savitch 9thEd Chapter 3 Prog Proj 3 Roman Numerals"<<endl;
    cout<<"2. Problem Savitch 9thEd Chapter 3 Prog Proj 6 Fibonacci Sequnce"<<endl;
    cout<<"3. Problem Savitch 9thEd Chapter 3 Prog Proj 7 e^x"<<endl;
    cout<<"4. Problem Gaddis 8thEd Chapter 4 Prog Proj 3 Magic Dates"<<endl;
    cout<<"5. Problem Gaddis 8thEd Chapter 4 Prog Proj 11 Math Tutor"<<endl;
    cout<<"6. Problem Gaddis 8thEd Chapter 4 Prog Proj 21 Speed of Sound"<<endl;
    cout<<"7. Problem Gaddis 8thEd Chapter 4 Prog Proj 23 Geometry Calc"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
    cout<<"0. Exit"<<endl;
    cin>>choice;
    switch (choice){
        case 1:{       
                //Declare Variables
                unsigned char nThsnds, nHudrds, nTens, nOnes;
                unsigned short number;
                //Initialize Variables
                //Input Data/Variables
                cout<<"This program converts numbers to Roman Numerals"<<endl;
                cout<<"Type in a number between 1000-3000"<<endl;
                cin>>number;
                if(!(number>=1000&&number<3000)){
                 cout<<"You don't seem to be able to follow directions"<<endl;
                 cout<<"the number you typed = "<<number<<endl;
                 exit(EXIT_FAILURE);
                }
                //Process or map the inputs to the outputs
                nThsnds=number/THSNDS;
                number%=THSNDS;
                nHudrds=number/HUNDRDS;
                number%=HUNDRDS;
                nTens=number/TENS;
                number%=TENS;
                nOnes=number;

               // cout<<static_cast<int>(nThsnds)<<" "<<static_cast<int>(nHudrds)<<" "
            //            <<static_cast<int>(nTens)<<" "<<static_cast<int>(nOnes)<<endl;
                //Display/Output all pertinent variables
               switch(nThsnds){
                   case 3: cout<<"M";
                   case 2: cout<<"M";
                   case 1: cout<<"M";           
               }

               switch (nHudrds){
                   case 9: cout<<"CM";break;
                   case 8: cout<<"DCCC";break;
                   case 7: cout<<"DCC";break;
                   case 6: cout<<"DC";break;
                   case 5: cout<<"D";break;
                   case 4: cout<<"CD";break;
                   case 3: cout<<"C";
                   case 2: cout<<"C";
                   case 1: cout<<"C";
               }

                  switch (nTens){
                   case 9: cout<<"XC";break;
                   case 8: cout<<"LXXX";break;
                   case 7: cout<<"LXX";break;
                   case 6: cout<<"LX";break;
                   case 5: cout<<"L";break;
                   case 4: cout<<"XL";break;
                   case 3: cout<<"X";
                   case 2: cout<<"X";
                   case 1: cout<<"X";
                  }

                  switch (nOnes){
                   case 9: cout<<"IX";break;
                   case 8: cout<<"VIII";break;
                   case 7: cout<<"VII";break;
                   case 6: cout<<"VI";break;
                   case 5: cout<<"V";break;
                   case 4: cout<<"IV";break;
                   case 3: cout<<"I";
                   case 2: cout<<"I";
                   case 1: cout<<"I";
                  }
                  break;
            }
        
        case 2:{
           
         //Process or map the inputs to the outputs
            cout<<fim1<<","<<fim2<<",";
            fi=fim1+fim2;
            cout<<fi<<",";
            //loop and print
            for(int count=4; count<=seqEnd;count++){
            //Swap and calculate
               fim2=fim1;
               fim1=fi;
              fi=fim1+fim2;
              cout<<fi<<",";
              if(count%perLine==(perLine-1))cout<<endl;
                }
            break;
               }
        
        case 3:{
                       //Declare Variables
            float etox=1,x,term;
            int counter=1;

            //Input Data/Variables
            cout<<"This program approximates e^x"<<endl;
            cout<<"Input a real from 0 to 2"<<endl;
            cin>>x;

            //Process or map the inputs to the outputs
            cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
            term=x; 
            counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            term*=x/counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            term*=x/counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            term*=x/counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            term*=x/counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            term*=x/counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            term*=x/counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            term*=x/counter++;
            etox+=term;
            cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
            cout<<"e^"<<x<<" with Library function = "<<exp(x)<<endl;
            break;
        }
        
        case 4:{
            cout<<"This program will verify whether that day you enter is magical."<<endl;
            cout<<"A magical date is a date that the month times day is equal to";
            cout<<"two digit year."<<endl;
            cout<<"Enter month, day, and two digit year"<<endl;
            cin>>month;
            cin>>day;
            cin>>year;
            product=month*day;
            if(product=year)
            {
                cout<<"Your date is a Magical Date"<<endl;
            }
            else
            {
                cout<<"Your date is not magical"<<endl;
            }
            break;
               }
        
        case 5:{
                //Initialize variables
                 op1=rand()%900+100;//[100-999]  3 Digit Random Number
                 op2=rand()%900+100;//[100-999]  3 Digit Random Number
    
                  //Prompt for the result
                  cout<<"The program tests your addition capability"<<endl;
                  cout<<"Type the answer"<<endl;
                  cout<<setw(6)<<op1<<endl;
                  cout<<"+"<<setw(5)<<op2<<endl;
                  cout<<"------"<<endl;
                  cin>>stuAns;

                  //Calculate the result
                  result=op1+op2;
   
                  //Output the result
                  cout<<((result==stuAns)?"Congratulations":"Incorrect")<<endl;
                  cout<<"The result = "<<result<<endl;
            break;
               }
        
        case 6:{
            cout<<"This program calculates the speed of sound through air, water, and steel"<<endl;
            cout<<"Chose from the menu which you would like to calculate"<<endl;
            cout<<"1. Air"<<endl;
            cout<<"2. Water"<<endl;
            cout<<"3. Steel"<<endl;
            cin>>choice;
            switch(choice){
                case 1:{
                    cout<<"Enter the distance you would like to calculate(in feet)"<<endl;
                    cin>>dist;
                    timeTrv=dist*air;
                    distTm=timeTrv/60;
                    cout<<"It took sound to travel through air "<<dist<<" feet ";
                    cout<<distTm<<" minutes"<<endl;   
                    break;
                    }
                case 2:{
                    cout<<"Enter the distance you would like to calculate(in feet)"<<endl;
                    cin>>dist;
                    timeTrv=dist*water;
                    distTm=timeTrv/60;
                    cout<<"It took sound to travel through water "<<dist<<" feet ";
                    cout<<distTm<<" minutes"<<endl;
                break;    
                }
                case 3:{
                    cout<<"Enter the distance you would like to calculate(in feet)"<<endl;
                    cin>>dist;
                    timeTrv=dist*steel;
                    distTm=timeTrv/60;
                    cout<<"It took sound to travel through steel "<<dist<<" feet ";
                    cout<<distTm<<" minutes"<<endl;
                    break;
                    }
                default:{
            cout<<"You seem to have problems with instructions"<<endl;
                        }
                    }
            break;
               }
        
        case 7:{
            //Declare Variables
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
                }break;
        }
        
        case 8:{
            cout<<"You are in problem 8"<<endl;
            break;
               }
        
        case 9:{
            cout<<"You are in problem 9"<<endl;
            break;
                }
               
        default:{
            cout<<"You seem to have problems with instructions"<<endl;
            cout<<"You are unworthy of this code"<<endl;
            cout<<"Good Bye!"<<endl;
                }
        }
    //Exit the program
    return 0;
    }