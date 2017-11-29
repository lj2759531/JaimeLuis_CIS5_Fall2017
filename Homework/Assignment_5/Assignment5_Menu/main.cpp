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
#include <fstream>      //Write to File
#include <cstdlib>      //Random Number Generator
#include <ctime>        //Time for setting seed

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants


//Function Prototypes
float degC(float);//Linear Conversion
float degC(float,float,float,float,float);//Interpolation
void getScore(float &,float &,float &, float &, float &);
float fndLowst(float,float,float, float, float);
float average(float,float,float, float, float);
bool isPrime(unsigned int);
char cmpRPS();
char plyRPS();
string winner(char,char);
float pRand();
void shoot(bool,float,bool &,bool &);
void gtScore(float &,float &,float &, float &, float &);
float fndLwst(float,float,float, float, float);
float fndLgst(float,float,float, float, float);
float ovalScr(float,float,float, float, float);
unsigned char cnvMnth(string);
unsigned char cnvDay(string);
bool isLpYr(unsigned short);
unsigned char gtCntVl(unsigned short);
unsigned char gtYrVal(unsigned short);
unsigned char gtMnVal(unsigned char, unsigned short);
string wkDay(unsigned char, unsigned char, unsigned short);
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
   //Declare Variables
    float degCent, degFahr;//independent and dependent variable for Temp
    float f1,f2,c1,c2;//Tabular data points
    
    //Initialize Variables
    f1=32; //Freezing Point of water 32 degrees Fahrenheit
    f2=212;//Boiling Point of water 212 degrees Fahrenheit
    c1=0;  //Freezing Point of water  0 degrees Centigrade
    c2=100;//Boiling Point of water 100 degrees Centigrade
    
    //Output the Temperature Table
    cout<<"The Temperature Conversion Table"<<endl;
    cout<<"Fahrenheit  Celsius 1   Celsius 2"<<endl;
    cout<<fixed<<setprecision(4)<<showpoint;
    for(int f=f1;f<=f2;f++){
        cout<<setw(7)<<f
            <<setw(14)<<degC(f)
            <<setw(12)<<degC(f,f1,f2,c1,c2)<<endl;
    }
}

float degC(float f){
    return (f-32)*5/9;
}

float degC(float f,float f1,float f2,float c1,float c2){
    return c1+(c2-c1)*(f-f1)/(f2-f1);
}

void prob2(){
    //Declare variables
    float v1,v2,v3,v4,v5;
    
    //Input the values
    getScore(v1,v2,v3,v4,v5);
    
    //Display/Output all pertinent variables
    cout<<"The Average 4 highest Scores = "<<average(v1,v2,v3,v4,v5);
    
}

float average(float a,float b,float c, float d, float e){
    float lowest=fndLowst(a,b,c,d,e);
    return (a+b+c+d+e-lowest)/4;
}

float fndLowst(float a,float b,float c, float d, float e){
    float lowest=a;
    if(b<lowest)lowest=b;
    if(c<lowest)lowest=c;
    if(d<lowest)lowest=d;
    if(e<lowest)lowest=e;
    return lowest;
}

void getScore(float &a,float &b,float &c, float &d, float &e){
    static int cnt=1;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>a;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>b;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>c;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>d;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>e;
}

void prob3(){
     //Declare variables
    float v1,v2,v3,v4,v5;
    
    //Input the values
    gtScore(v1,v2,v3,v4,v5);
    
    //Display/Output all pertinent variables
    cout<<"The Competition Scores = "<<ovalScr(v1,v2,v3,v4,v5);
    
}

float ovalScr(float a,float b,float c, float d, float e){
    float lowest=fndLwst(a,b,c,d,e);
    float highest=fndLgst(a,b,c,d,e);
    return a+b+c+d+e-lowest-highest;
}

float fndLwst(float a,float b,float c, float d, float e){
    float lowest=a;
    if(b<lowest)lowest=b;
    if(c<lowest)lowest=c;
    if(d<lowest)lowest=d;
    if(e<lowest)lowest=e;
    return lowest;
}

float fndLgst(float a,float b,float c, float d, float e){
    float largest=a;
    if(b>largest)largest=b;
    if(c>largest)largest=c;
    if(d>largest)largest=d;
    if(e>largest)largest=e;
    return largest;
}

void gtScore(float &a,float &b,float &c, float &d, float &e){
    static int cnt=1;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>a;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>b;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>c;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>d;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>e;
}

void prob4(){
   //Declare Variables
    unsigned int tabLmt;
    unsigned char perLine;
    ofstream out;
    
    //Initialize Variables
    out.open("prime.dat");
    perLine=10;
    
    //Input Data/Variables
    cout<<"This program displays a table of"<<endl;
    cout<<"Prime Numbers"<<endl;
    cout<<"Input the table Limit"<<endl;
    cin>>tabLmt;
            
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    out<<"Prime Number Table"<<endl;
    for(int cnt=0,i=2;i<=tabLmt;i++){
        if(isPrime(i)){
            cnt++;
            out<<setw(8)<<i;
        }
        if(cnt%perLine==(perLine-1)){
            out<<endl;
            cnt=0;
        }
    }
    
    //Close the File
    out.close();
}

bool isPrime(unsigned int number){
    float sqRtNum=sqrt(number);
    for(int i=2;i<=sqRtNum;i++){
        if(number%i==0)return false;
    }
    return true;
}

void prob5(){
     //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char cmptr,player;
    
    //Initialize Variables
    cmptr=cmpRPS();
    
    //Input Data/Variables
    player=plyRPS();
    
    //Process Display/Output 
    cout<<"Computer->"<<cmptr<<
          " Player-->"<<player<<endl<<
          " Results->"<<
            winner(cmptr,player)<<endl;
}

string winner(char cmp,char ply){
    if(cmp==ply)return "Tie";
    if((cmp=='R'&&ply=='S')||
       (cmp=='P'&&ply=='R')||
       (cmp=='S'&&ply=='P'))return "Computer Wins";
    return "Player Wins";
}

char plyRPS(){
    char plyTrn;
    cout<<"This Game is Rock-Paper_Scissors"<<endl;
    cout<<"Input your choice"<<endl;
    cout<<"R-Rock, P-Paper, S-Scissors"<<endl;
    cin>>plyTrn;
    return plyTrn;
}

char cmpRPS(){
    char cmptr;
    do{
        cmptr=rand()%4+80;//[P,Q,R,S] = [80,81,82,83]
    }while(cmptr=='Q');//if Q choose again
    return cmptr;
}

void prob6(){
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool aliveA,aliveB,aliveC;//A,B,C Lives
    float pkillA,pkillB,pkillC;//A,B,C Kill Probability
    int nGames,nWinA,nWinB,nWinC;//A,B,C number of Wins given nGames
    
    //Initialize Variables
    pkillA=1.0f/3;
    pkillB=1.0f/2;
    pkillC=1.0f;
    nWinA=nWinB=nWinC=0;
    nGames=100000000;
    
    //Take Statistics on who is left alive how often
    for(int game=1;game<=nGames;game++){
        char aliveSm;
        aliveA=aliveB=aliveC=1;
        do{
            //A shoots B if alive, or C
            shoot(aliveA,pkillA,aliveB,aliveC);
            //B shoots C if alive, or A
            shoot(aliveB,pkillB,aliveC,aliveA);
            //C shoots A if alive, or B
            shoot(aliveC,pkillC,aliveA,aliveB);
            //How many left alive?
            aliveSm=aliveA+aliveB+aliveC;
        }while(aliveSm>1);//Shoot till 1 left standing
        
        //Count the number of times A,B or C left alive
        nWinA+=aliveA;
        nWinB+=aliveB;
        nWinC+=aliveC;
    }
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Number of Games = "<<nGames<<" = "<<nWinA+nWinB+nWinC<<endl;
    cout<<"Order of shots Aaron -> Bob -> Charlie -> Aaron ....."<<endl;
    cout<<"Aaron   with pkill = "<<pkillA<<" won "<<nWinA<<" times"<<endl;
    cout<<"Bob     with pkill = "<<pkillB<<" won "<<nWinB<<" times"<<endl; 
    cout<<"Charlie with pkill = "<<pkillC<<" won "<<nWinC<<" times"<<endl;
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Shoot
//Input:
//      The shooter and their Accuracy
//      a -> alive true or false
//      pka -> a's accuracy
//Output:
//      The results of the one-sided duel
//      b -> alive true or false
//      c -> or alive true or false
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void shoot(bool a,float pka,bool &b,bool &c){
    if(a){
        if(b){
            if(pRand()<=pka)b=false;
        }else if(c){
            if(pRand()<=pka)c=false;
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Random Probability
//Input:
//      None
//Output:
//      Pseudo-Random number between [0,1]
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float pRand(){
    //The maximum random number = 2^31-1
    static const float scale=1/(pow(2,31)-1);
    return rand()*scale;
}



void prob7(){
   //Declare Variables
    string month,day;
    unsigned short year;
    unsigned char nMonth,nDay;
    
    //Input Data/Variables
    do{
        cout<<"This program converts a date to a day"<<endl;
        cout<<"Input a date in the form mmmm dd, yyyy"<<endl;
        cout<<"For instance June 12, 1955"<<endl;
        cin>>month>>day>>year;
        nMonth=cnvMnth(month);
        nDay=cnvDay(day);
        cout<<"You input "<<static_cast<int>(nMonth)
                <<"/"<<static_cast<int>(nDay)
                <<"/"<<year<<endl;
    }while(nMonth==0||nDay>31);
    
    //Process or map the inputs to the outputs
    //And output the results
    cout<<"The Day of the Week = "<<
            wkDay(nMonth,nDay,year)<<endl;
}

string wkDay(unsigned char month, unsigned char day, unsigned short year){
    unsigned char dyOfWk=(day+gtMnVal(month,year)
                    +gtYrVal(year)+gtCntVl(year))%7;
    switch(dyOfWk){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
    }
}

unsigned char gtMnVal(unsigned char month, unsigned short year){
    switch(month){
        case 1:{
            if(isLpYr(year))return 6;
            else return 0;
        }
        case 2:{
            if(isLpYr(year))return 2;
            else return 3;
        }
        case 3: return 3;
        case 4: return 6;
        case 5: return 1;
        case 6: return 4;
        case 7: return 6;
        case 8: return 2;
        case 9: return 5;
        case 10:return 0;
        case 11:return 3;
        case 12:return 5;
        default:exit(EXIT_FAILURE);
    }
}

unsigned char gtYrVal(unsigned short year){
    return year%100+(year%100)/4;
}

unsigned char gtCntVl(unsigned short year){
    return 2*(3-(year/100)%4);
}

bool isLpYr(unsigned short year){
    return ((year%400==0) || ((year%4==0) && year%100!=0));
}

unsigned char cnvDay(string day){
    char nDay=day[0]-'0';
    if(day[1]!=',')nDay=nDay*10+(day[1]-48);
    return nDay;
}

unsigned char cnvMnth(string month){
    if(month=="January")  return  1;
    if(month=="February") return  2;
    if(month=="March")    return  3;
    if(month=="April")    return  4;
    if(month=="May")      return  5;
    if(month=="June")     return  6;
    if(month=="July")     return  7;
    if(month=="August")   return  8;
    if(month=="September")return  9;
    if(month=="October")  return 10;
    if(month=="November") return 11;
    if(month=="December") return 12;
    exit(EXIT_FAILURE);
}

void prob8(){
    
}

void prob9(){
   
}

void menu(){
    //Input Data/Variables
    cout<<endl<<endl<<"Choose from the Menu"<<endl;
    cout<<"1. Gaddis 8thEd Chap6 Prog Proj  7 Celcius Temp Table"<<endl;
    cout<<"2. Gaddis 8thEd Chap6 Prog Proj 11 Lowest Score Drop"<<endl;
    cout<<"3. Gaddis 8thEd Chap6 Prog Proj 12 Star Search"<<endl;
    cout<<"4. Gaddis 8thEd Chap6 Prog Proj 22 Prime"<<endl;
    cout<<"5. Gaddis 8thEd Chap6 Prog Proj 24 Rock Paper Scissors"<<endl;
    cout<<"6. Savitch 9thEd Chap5 Prog Proj 6 Shooter"<<endl;
    cout<<"7. Savitch 9thEd Chap5 Prog Proj 7 Day of Week"<<endl;
    cout<<"8.  "<<endl;
    cout<<"9.  "<<endl;
}