/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on Oct 22th, 2017, 8:25 AM
 * Purpose:  Game of Life
 *              Fill and Display 2-D Array
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int COLS=70;//Columns in the 2-D Arrays
//Function Prototypes
void filAray(char [][COLS],int);
void prntAry(char [][COLS], int);
void prntAry(int [][COLS], int);
void glider(int, int, char[][COLS]);
char neighbr (int, int, char[][COLS],int);
void chkCnt(char[][COLS],int[] [COLS],int);
void rules(char[][COLS],char[][COLS], int);
    
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=15;
    char tab1 [ROWS][COLS]={};
    char tab2 [ROWS][COLS]={};
   int cnt [ROWS][COLS]={};
    int nGen=10;
    
    //Initialize Variables  
    filAray(tab1,ROWS);
    glider(2,3,tab1);
    glider(6,33,tab1);
    chkCnt(tab1,cnt,ROWS);
    filAray(tab2,ROWS);
    
    //Play the game of life
    for (int gen=1;gen<nGen;gen++){
        rules(tab1,tab2,ROWS);
        prntAry(tab2,ROWS);
    }
    //Display/Output all pertinent variables
    prntAry(tab1,ROWS);
    prntAry(tab2,ROWS);
    prntAray(cnt,ROWS);
    
    
    //Exit the program
    return 0;
}

void prntAry(int x[][COLS], int rows){
     cout<<endl;
     for (int row=0;row<rows;row++){
        for (int col=0;col<COLS;col++){
           cout<< x[row][col];
        }
        cout<<endl;
    }
     cout<<endl;
}

void rules(char t1[][COLS],char t2[][COLS],int rows){
    for(int row=1;row<rows-1;row++){
        for(int col=1;col<COLS-1;col++){
            int cnt=neighbr(row,col,t1,rows);
            if((cnt<2)&&(t1[row][col]=='x'))t2[row][col]='-';
            if(((cnt==2)||(cnt==3))&&(t1[row][col]=='x'))t2[row][col]='x';
            if((cnt>3)&&(t1[row][col]=='x'))t2[row][col]='-';
            if((cnt==3)&&(t1[row][col]=='-'))t2[row][col]='x';
        }
    }
}

void chkCnt(char c[][COLS],int x[] [COLS],int rows){
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            x[row][col]=neighbr(row,col,c,rows);
        }
    }
}

char neighbr (int row, int col, char x[][COLS],int rows){
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

void glider(int row, int col, char x[][COLS]){
    x[row+0][col+1]='x';
    x[row+1][col+2]='x';
    x[row+2][col+0]='x';
    x[row+2][col+1]='x';
    x[row+2][col+2]='x';
    
}

void prntAry(char x[][COLS], int rows){
     cout<<endl;
     for (int row=0;row<rows;row++){
        for (int col=0;col<COLS;col++){
           cout<< x[row][col];
        }
        cout<<endl;
    }
     cout<<endl;
}

void filAray(char x[][COLS],int rows){
    for (int row=0;row<rows;row++){
        for (int col=0;col<COLS;col++){
            x[row][col]='-';
        }
    }
}