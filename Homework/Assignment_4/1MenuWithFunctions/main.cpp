/* 
 * File:   main.cpp
 * Author: Luis Jaime 
 * Created on Oct 18th, 2017, 9:10 AM
 * Purpose:  Menu with functions
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Math Library
#include <iomanip>      //Input/Output Manipulator

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const char  DOLLAR =100;      //Dollar contains 100 pennies
const char  QUARTER= 25;      //Quarter contains 25 pennies
const char  DIME   = 10;      //Dime contains 10 pennies
const char  NICKEL =  5;      //Nickel contains 5 pennies
const float HLFPNY =0.005f;   //Half penny round up
const char  CNVPNY =100;      //Conversion to a penny
const float GRAVITY=6.673e-8f;//Universal Gravitational Constant cm^3/gram/sec^2
const float CNVCMFT=1/30.48f; //30.48cm/ft
const float CNVMFT =5280.0f;  //5280 ft/mile
const float CNVGKG =1000.0f;  //1000 grams to 1 kilogram
const float REARTH =3959.0f;  //Radius of the earth miles
const float MEARTH =5.972e24f;//Mass of the earth kilograms
const float galConv= .264179; // Liters to gallons

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
        menu();
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}

void prob1(){
    int number;  
    cout<<"This program will out put all ASCII codes"<<endl;
    cout<<"For numbers 0-127"<<endl;
    for(number=0; number<=127;number++){
        cout<<(char)number<<" ";
        if(number % 16 == 0)
            cout<<endl;
        }
}

void prob2(){
    //Declare Variables
    int dollar,pennies,days, change;
    float pay; 
    
    //Initialize Variables
    cout<<"This program will output number of pennies paid"<<endl;
    cout<<"You will get maid 1 penny first day and add a penny every day after that"<<endl;
    cout<<"Ex. Day 1= 1 penny, Day 2= 2 pennies, Day 3= 3 pennies, etc."<<endl;
    cout<<"Enter the amount of days worked"<<endl;
    cin>>days;
   
    //Process or map the inputs to the outputs
    pennies=(days * (days + 1)) / 2;
    dollar=(pennies/100)+.5;
    change=(pennies%100)+.5;
    pay=dollar+change;
    
    cout<<"Your pay for "<<days<<" days is "<<pennies<<" pennies"<<endl;
    cout<<"Your pay is $"<<dollar<<"."<<change<<endl;
    
}

void prob3(){
   //Declare Variables
    float pop, incPop, popPow;
    int nYears;
    //Initialize Variables
    cout<<"Calculate the increase in population over time"<<endl;
    cout<<"Input the population, percentage yearly increase and "<<endl;
    cout<<"The number of years"<<endl;
    cin>>pop>>incPop>>nYears;
    //Input Data/Variables
    popPow=pop*pow((1+incPop/100),nYears);
    for(int year=1;year<=nYears;year++){
        pop*=(1+incPop/100.0f);
    }
    //Process or map the inputs to the outputs
    cout<<"The resulting population in "<<nYears<<" years = ";
    cout<<pop<<" people not poop."<<endl;
    cout<<"Same result population in "<<nYears<<" years = "
            <<popPow<<" people not poop"<<endl;
}

void prob4(){
    //Display/Output all pertinent variables
    for(int cnt1=1,cnt2=19,cnt3=10;cnt1<=10;cnt1++,cnt2--,cnt3--){
        //Display First Triangle
        for(int t1=1;t1<=cnt1;t1++)cout<<"*";
        //Display Middle Spaces
        for(int t1=1;t1<=cnt2;t1++)cout<<" ";
        //Display Second Triangle
        for(int t1=1;t1<=cnt3;t1++)cout<<"*";
        cout<<endl;
    }
    
}

void prob5(){
     //Declare Variables
    int dollar,pennies,days, change;
    float pay; 
    
    //Initialize Variables
    cout<<"This program will output number of pennies paid"<<endl;
    cout<<"You will get maid 1 penny first day and add a penny every day after that"<<endl;
    cout<<"Ex. Day 1= 1 penny, Day 2= 2 pennies, Day 3= 3 pennies, etc."<<endl;
    cout<<"Enter the amount of days worked"<<endl;
    cin>>days;
   
    //Process or map the inputs to the outputs
    pennies=(days * (days + 1)) / 2;
    dollar=(pennies/100)+.5;
    change=(pennies%100)+.5;
    pay=dollar+change;
    
    cout<<"Your pay for "<<days<<" days is "<<pennies<<" pennies"<<endl;
    cout<<"Your pay is $"<<dollar<<"."<<change<<endl;
}

void prob6(){
    //Declare Variables
    char again;
        do{
        int liters, mi, gal; //Liters miles MPG and Gallons
        float mpg;
        //Initialize Variables
        cout<<"This Program converts liters used by car and miles driven"<<endl;
        cout<<"To convert to MPG"<<endl;
        cout<<"Enter amount of liters in car and miles driven"<<endl;
        cin>>liters>>mi;
        //Input Data/Variables
        gal=liters*galConv;
        mpg=mi/gal;
        //Process or map the inputs to the outputs

        //Display/Output all pertinent variables
        cout<<"The MPG of "<<liters<<" liters and "<<mi<<" miles is "<<mpg<<" MPG"<<endl;
        cout<<"Do you wanna try again (Y/N)"<<endl;
        cin>>again;
            }while(again=='Y'||again=='y');  
}

void prob7(){
   //Declare Variables
    int yrNow=2017,yrThen;
    double infRate,prNow,prThen;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"This program calculates inflation rate"<<endl;
    cout<<"Year and Price of Original Item"<<endl;
    cout<<"as well as price today"<<endl;
    cin>>yrThen>>prThen>>prNow;
    
    //Process or map the inputs to the outputs
    infRate=.01;
    double delta,prCalc;
    double kGain=.00001,tol=.00000001;
    do{
        prCalc=prThen;
        for(int year=yrThen+1;year<=yrNow;year++){
            prCalc*=(1+infRate);
        }
        delta=(prNow-prCalc)/prNow;
        infRate+=kGain*delta;
    }while(abs(delta)>=tol);
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"In "<<yrThen<<"    the price = $"<<setw(11)<<prThen<<endl;
    cout<<"In "<<yrNow<<"    the price = $"<<setw(11)<<prNow<<endl;
    cout<<"The Price calculated = $"<<setw(11)<<prCalc<<endl;
    cout<<"The inflation rate   =  "<<setw(11)<<infRate*100.0f<<"%"<<endl;
    
}

void prob8(){
    //Declare Variables
    float price,tndrd;
    unsigned short change;
    unsigned char nDlrs,nQtrs,nDimes,nNckls;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"The Vending Machine Problem calculates the change"<<endl;
    cout<<"Input the Price of the Product and the Amount Tendered"<<endl;
    cin>>price>>tndrd;
    
    //Calculate the change
    change=(tndrd-price+HLFPNY)*CNVPNY;//Accounts for float inaccuracy
    change=(tndrd-price)*CNVPNY;
    nDlrs=(change-change%DOLLAR)/DOLLAR;
    change-=(nDlrs*DOLLAR);
    nQtrs=(change-change%QUARTER)/QUARTER;
    change-=(nQtrs*QUARTER);
    nDimes=(change-change%DIME)/DIME;
    change-=(nDimes*DIME);
    nNckls=(change-change%NICKEL)/NICKEL;
    change-=(nNckls*NICKEL);
    change=nDlrs*DOLLAR+nQtrs*QUARTER+nDimes*DIME+nNckls*NICKEL;
    
    
    //Display/Output all pertinent variables
    cout<<"The change in Pennies  = "<<change<<endl;
    cout<<"The number of Dollars  = "<<static_cast<int>(nDlrs)<<endl;
    cout<<"The number of Quarters = "<<static_cast<int>(nQtrs)<<endl;
    cout<<"The number of Dimes    = "<<static_cast<int>(nDimes)<<endl;
    cout<<"The number of Nickels  = "<<static_cast<int>(nNckls)<<endl;
    
}

void prob9(){
   //Declare Variables
    float myMass, myWgt, actWgt;
    
    //Initialize Variables
    myMass=6.0f;//6 slugs
    
    //Input Data/Variables
    cout<<"This program converts your weight in lbs to"<<endl;
    cout<<"Your mass in slugs"<<endl;
    cout<<"Input your actual weight in lbs"<<endl;
    cin>>actWgt;
    
    //Process or map the inputs to the outputs
    float delta,tol=.001f;
    float kGain=tol;
    do{
        myWgt=GRAVITY*CNVCMFT*CNVCMFT*CNVCMFT*MEARTH*CNVGKG*myMass/
            (REARTH*REARTH*CNVMFT*CNVMFT);
        delta=actWgt-myWgt;
        myMass+=kGain*delta;
    }while(abs(delta)>=tol);
    
    //Display/Output all pertinent variables
    cout<<"Your weight = "<<myWgt<<" lbs"<<endl;
    cout<<"Your mass   = "<<myMass<<" slugs"<<endl;
    
}

void menu(){
    //Input Data/Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Gaddis 8thEd Chap5 Prog Proj 2 ASCII Code"<<endl;
    cout<<"2. Gaddis 8thEd Chap5 Prog Proj 7 Pennies4Pay"<<endl;
    cout<<"3. Gaddis 8thEd Chap5 Prog Proj 11 PopulationGrowth"<<endl;
    cout<<"4. Gaddis 8thEd Chap5 Prog Proj 23 PatterDisplay"<<endl;
    cout<<"5. Gaddis 8thEd Chap5 Prog Proj 25 WebPage"<<endl;
    cout<<"6. Savitch 9thEd Chap4 Prog Proj 1 Liter2MPG"<<endl;
    cout<<"7. Savitch 9thEd Chap4 Prog Proj 4 Inflation"<<endl;
    cout<<"8. Savitch 9thEd Chap4 Prog Proj 6 VendingMachine"<<endl;
    cout<<"9. Savitch 9thEd Chap4 Prog Proj 7 Weight"<<endl;
}