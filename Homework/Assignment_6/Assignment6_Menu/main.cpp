/* 
 * File:   main.cpp
 * Author: Luis Jaime 
 * Created on Nov 28, 2017, 11:10 PM
 * Purpose:  Menu with functions
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Input/Output Manipulator
#include <string>       //String library
#include <cstdlib>      //Rand and Srand
#include <ctime>        //Time function Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries
//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned int MAXRAND=pow(2,31)-1;
const int COLS=70;//Columns in the 2-D Arrays

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void menu();
void rainFal(float[]);
float ttlRain(float[]);
float avgRain(float[]);
void rainLgS(float[]);
int total(int [], int);
int small(int [], int);
int large(int [], int);
float pRand();  //[0,1]
float stdNorm();//Normal Distribution N(1,0)
float filAray(float [],int);
float mean(float [],int);
float stdDev(float [],int);
void filAray(char [][COLS],int);
void prntAry(char [][COLS],int);
void prntAry(int [][COLS],int);
void glider(int,int,char[][COLS]);
void rules(char[][COLS],char[][COLS],int);
int  neghber(int,int,char[][COLS],int);
void chkCnt(char[][COLS],int[][COLS],int);
void pause(int);

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

            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}

void menu(){
    //Input Data/Variables
    cout<<endl<<endl<<"Choose from the Menu"<<endl;
    cout<<"1. Gaddis 8thEd Chap7 Prog Proj   1 Largest/Smallest Array"<<endl;
    cout<<"2. Gaddis 8thEd Chap7 Prog Proj   2 Rainfall Statistics"<<endl;
    cout<<"3. Gaddis 8thEd Chap7 Prog Proj   3 Chips and Salsa"<<endl;
    cout<<"4. Savitch 9thEd Chap7 Prog Proj  4 Standard Deviation"<<endl;
    cout<<"5. Savitch 9thEd Chap7 Prog Proj 13 Game of Life"<<endl;

}

void prob1(){
    const int size = 10;
       int small,large;
       int numberArray[size];

       //Inputting elements of array
       cout<<"Please enter 10 positive integers :"<<endl;
       for (int i=0;i<size;i++){
       cin>>numberArray[i];
       }

    //Assigning starting element to small,large
    small=numberArray[0];
    large=numberArray[0];

    //Logic to find largest and smallest
    for(int j=0;j<size;j++){
          if(numberArray[j] >large)
             large = numberArray[j];
          if(numberArray[j]<small)
            small = numberArray[j];
      }

        // Displaying the smallest and largest values.
       cout<<"The smallest value is: "<<small<<endl;
       cout<<"The largest value is: "<<large<<endl;
}

void prob2(){
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

void prob3(){    
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


void prob4(){
     //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=500000;
    float x[SIZE]={};
    
    //Initialize Variables
    filAray(x,SIZE);
    
    //Display/Output all pertinent variables
    cout<<"The simulated Normal Distribution = "
        <<"N("<<stdDev(x,SIZE)<<","<<mean(x,SIZE)
        <<")"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Fill Array
//Input:
//      x -> Array
//      n -> Size
//Output:
//      Fill the array with random standard normal values
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


float filAray(float x[],int n){
    for(int i=0;i<n;i++){
        x[i]=stdNorm();
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Standard Deviation
//Input:
//      x -> Array
//      n -> Size
//Output:
//      standard deviation of the array
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


float stdDev(float x[],int n){
    float sum=0;
    float xmean=mean(x,n);
    for(int i=0;i<n;i++){
        float delx=x[i]-xmean;
        sum+=(delx*delx);
    }
    return sqrt(sum/(n-1));
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Mean
//Input:
//      x -> Array
//      n -> Size
//Output:
//      mean or average of the array
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float mean(float x[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                 Standard Normal Probability
//Input:
//      None
//Output:
//      Standard Normal number between [-6,6]
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


float stdNorm(){
    float sum=0;
    for(int i=1;i<=12;i++){
        sum+=pRand();
    }
    return sum-6;
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

void prob5(){
    //Declare Variables
    const int ROWS=15;
    char tab1[ROWS][COLS]={};
    char tab2[ROWS][COLS]={};
    //int  cnt[ROWS][COLS]={};
    int  nGen=20;
    
    //Initialize Variables
    filAray(tab1,ROWS);
    glider(2,3,tab1);
    glider(6,33,tab1);
    glider(2,53,tab1);
    filAray(tab2,ROWS);
    
    //Play the game of life
    prntAry(tab1,ROWS);
    cout<<"Generation = 1"<<endl;
    for(int gen=2;gen<=nGen;gen++){
        pause(1);
        if(gen%2){
            rules(tab2,tab1,ROWS);
            prntAry(tab1,ROWS);
            cout<<"Generation = "<<gen<<endl;
        }else{
            rules(tab1,tab2,ROWS);
            prntAry(tab2,ROWS);
            cout<<"Generation = "<<gen<<endl;
        }
    }
}

void pause(int secs){
    int beg=time(0);
    int end;
    do{
        end=time(0);
    }while(secs>end-beg);
}

void chkCnt(char c[][COLS],int x[][COLS],int rows){
    for(int row=1;row<rows-1;row++){
        for(int col=1;col<COLS-1;col++){
            x[row][col]=neghber(row,col,c,rows);
        }
    }
}

int neghber(int row,int col,char x[][COLS],int rows){
    int count=0;
    if(x[row-1][col-1]=='x')count++;
    if(x[row-1][col-0]=='x')count++;
    if(x[row-1][col+1]=='x')count++;
    if(x[row-0][col-1]=='x')count++;
    if(x[row-0][col+1]=='x')count++;
    if(x[row+1][col-1]=='x')count++;
    if(x[row+1][col-0]=='x')count++;
    if(x[row+1][col+1]=='x')count++;
    return count;
}

void rules(char t1[][COLS],char t2[][COLS],int rows){
    for(int row=1;row<rows-1;row++){
        for(int col=1;col<COLS-1;col++){
            int cnt=neghber(row,col,t1,rows);
            t2[row][col]='-';
            if((cnt<2)&&(t1[row][col]=='x'))t2[row][col]='-';
            if(((cnt==2)||(cnt==3))&&(t1[row][col]=='x'))t2[row][col]='x';
            if((cnt>3)&&(t1[row][col]=='x'))t2[row][col]='-';
            if((cnt==3)&&(t1[row][col]=='-'))t2[row][col]='x';
        }
    }
}

void glider(int row,int col,char x[][COLS]){
    x[row+0][col+1]='x';
    x[row+1][col+2]='x';
    x[row+2][col+0]='x';
    x[row+2][col+1]='x';
    x[row+2][col+2]='x';
}

void prntAry(int x[][COLS],int rows){
    cout<<endl;
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            cout<<x[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}

void prntAry(char x[][COLS],int rows){
    cout<<endl;
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            cout<<x[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}

void filAray(char x[][COLS],int rows){
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            x[row][col]='-';
        }
    }
}
