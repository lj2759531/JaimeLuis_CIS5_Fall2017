/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Luis Jaime
 *
 * Created on September 6, 2017, 9:49 AM
 * Purpose: What is known? and What is reality?
 */
#include<iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
    
    short fedBudg;
    short dodBudg;
    short nasaBudg;
    float pctDOD;
    float pctNASA;
    
    fedBudg= 3650; //3650 billion 
    dodBudg= 639; //639 Billion
    nasaBudg= 19;// 19.1 Billion
    
    pctDOD=100.0f*dodBudg/fedBudg;
    pctNASA=100.0f*nasaBudg/fedBudg;
    
    cout<<"DOD Budget= "<<pctDOD<<"%"<<endl;
 cout<<"NASA Budget= "<<pctNASA<<"%"<<endl;
    
    return 0;
}

