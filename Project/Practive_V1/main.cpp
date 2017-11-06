/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on October 29, 04:36 PM
 * Purpose:  Mastermind Game Project
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <stdlib.h>     //Random number generator Library
#include <time.h>        //Time Library
#include <cstring>       //Sting library

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void randPeg(); 
//Execution Begins Here!
int main() {
    //Declare Variables
    
    //Initialize Variables
    
    //Input Data/Variables
    cout <<"You choice of colors is red, blue, yellow, purple, orange green."
           <<endl<<endl;
    cout <<"*****************************************************************"
           <<endl;
    //Process or map the inputs to the outputs
    randPeg();
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}


void randPeg(){
    int maxTry, tries, pegs, right, close; 
    string peg1, peg2, peg3, peg4;
    int a, b, c, d;
    string color1, color2, color3, color4;
    srand (time(NULL));
    a=rand() % 6;	//Determine first color
    {
        if (a==0) {
                color1="red";
        }
        else if (a==1) {
                color1="blue";
        }
        else if (a==2) {
                color1="yellow";
        }
        else if (a==3) {
                color1="purple";
        }
        else if (a==4) {
                color1="orange";
        }
        else if (a==5) {
                color1="green";
        }
    }
    b=rand() % 6;	//Determine second color
    {
        if (b==0) {
                color2="red";
        }
        else if (b==1) {
                color2="blue";
        }
        else if (b==2) {
                color2="yellow";
        }
        else if (b==3) {
                color2="purple";
        }
        else if (b==4) {
                color2="orange";
        }
        else if (b==5) {
                color2="green";
        }
    }
    c=rand() % 6;	//Determine third color
    {
        if (c==0) {
                color3="red";
        }
        else if (c==1) {
                color3="blue";
        }
        else if (c==2) {
                color3="yellow";
        }
        else if (c==3) {
                color3="purple";
        }
        else if (c==4) {
                color3="orange";
        }
        else if (c==5) {
                color3="green";
        }
    }
    d=rand() % 6;	//Determine fourth color
    {
        if (d==0) {
                color4="red";
        }
        else if (d==1) {
                color4="blue";
        }
        else if (d==2) {
                color4="yellow";
        }
        else if (d==3) {
                color4="purple";
        }
        else if (d==4) {
                color4="orange";
        }
        else if (d==5) {
                color4="green";
        }
    }
     maxTry=12;
    
    do{
        
	right=0;    //Reset correct color in correct place
	close=0;    //Reset correct color in wrong place
	
	cout<<endl<<endl<<"Please enter the color of the first peg:  ";
	cin>>peg1;
	cout<<"Please enter the color of the second peg:  ";
	cin>>peg2;
	cout<<"Please enter the color of the third peg:  ";
	cin>>peg3;
	cout<<"Please enter the color of the fourth peg:  ";
	cin>>peg4;
	tries++;
	{
	if (color1==peg1) {
		right++;
	}
	if (color2==peg2) {
		right++;
	}
	if (color3==peg3) {
		right++;
	}
	if (color4==peg4) {
		right++;
	}	//Determine the number of right colors in the right place
	}
	{
	if (peg1!=color1) {
		if (peg1==color2 || peg1==color3 || peg1==color4) {
			close++;
		}
	}
	if (peg2!=color2) {
		if (peg2==color1 || peg2==color3 || peg2==color4) {
			close++;
		}
	}
	if (peg3!=color3) {
		if (peg3==color1 || peg3==color2 || peg3==color4) {
			close++;
		}
	}
	if (peg4!=color4) {
		if (peg4==color1 || peg4==color2 || peg4==color3) {
			close++;
		}
	}
	}	//Determine the number of right colors in the wrong place
	
	if ((peg1==color1) && (peg2==color2) && (peg3==color3) && (peg4==color4)) {
            cout <<endl<<"*****************************************************************";
            cout <<endl<<endl<<"Congratulations! You broke the code in "
                        <<tries<< " tries."<<endl;	//Output the number of guesses made
            cout <<endl<<endl<<"The code was "<<color1<<", "<<color2<< ", "
                        << color3 << ", "<< color4<<"."<<endl<<endl;	//Output the correct code
	}	//Determine whether the code is the correct one
	cout << "You had "<<right<<" of the right colors in the right place."
                <<endl;     //Output the number of correct pegs in the right place
	cout << "You had "<<close<<" of the right colors in the wrong place."
                <<endl;     //Output the number of correct pegs in the wrong place
    }while(tries<=maxTry);
    cout<<endl<<endl<<"*****************************************************************";
    cout<<endl<<endl<<"You have run out of attempts"<<endl<<endl;
}