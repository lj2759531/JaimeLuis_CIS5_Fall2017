/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi, fim1, fim2, counter;
    //Initialize Variables
    fim1=fim2=1;    //initialize the sequence
    counter=3;       //start with 3rd term in seq
    
    //Process or map the inputs to the outputs
    cout<<fim1<<","<<fim2<<",";
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<",";
    //Swap and calculate
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<fi<<endl;
    
    //Exit the program
    return 0;
}