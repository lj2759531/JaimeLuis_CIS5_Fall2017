/* 
 * File:   main.cpp
 * Author: LUIS JAIME
 * Created on September 17, 2017, 4:37 PM
 * Purpose: Create program with no errors.
 */

#include <iostream>
using namespace std;

int main(){
    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Press return after entering a number"<<endl;
    cout<<"Enter the number of pods"<<endl;
    
    cin>>number_of_pods;
    cout<<"Enter number of peas per pod"<<endl;
    cin>>peas_per_pod;
    total_peas=number_of_pods*peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods"<<endl;
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod"<<endl;
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all pods."<<endl;
    return 0;
}

