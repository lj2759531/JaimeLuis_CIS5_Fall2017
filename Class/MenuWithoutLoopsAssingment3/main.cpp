/* 
 * File:   main.cpp
 * Author: rcc
 * Created on October 4, 2017, 9:35 AM
 * Purpose:  Creating a Menu without Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <stdlib.h>     //Exit Failure
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int THSNDS=1000;
const int HUNDRDS=100;
const int TENS=10;
const int ONES=1;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    //Initialize Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem Savitch 9thEd Chape 3 ProgProj 3 Roman Numerals"<<endl;
    cout<<"2. Problem Savitch 9thEd Chape 3 ProgProj 7 e^x"<<endl;
    cout<<"3. Problem 3"<<endl;
    cout<<"4. Problem 4"<<endl;
    cout<<"5. Problem 5"<<endl;
    cout<<"6. Problem 6"<<endl;
    cout<<"7. Problem 7"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
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

                //Exit the program
             
            break;
        }
        
        case 2:{
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
        
        case 3:{
            cout<<"You are in problem 3"<<endl;
            break;
        }
        
        case 4:{
            cout<<"You are in problem 4"<<endl;
            break;
        }
        
        case 5:{
            cout<<"You are in problem 5"<<endl;
            break;
        }
        
        case 6:{
            cout<<"You are in problem 6"<<endl;
            break;
        }
        
        case 7:{
            cout<<"You are in problem 7"<<endl;
            break;
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
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}