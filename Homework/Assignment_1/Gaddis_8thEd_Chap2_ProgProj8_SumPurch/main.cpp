/* 
 * File:   main.cpp
 * Author: Luis Jaime
 * Created on September 3, 2017, 05:30 PM
 * Purpose: Calculate the total for five items purchased
 */

#include <iostream>

using namespace std;

int main() {

    float item1, item2, item3, item4, item5;
    float total;
    
    item1= 15.95;
    item2= 24.95;
    item3= 6.95;
    item4= 12.95;
    item5= 3.95;
    total= item1+item2+item3+item4+item5;
    cout<<"The total of all the items purchased before taxes is $"<<total<<"."<<endl;
    return 0;
}

