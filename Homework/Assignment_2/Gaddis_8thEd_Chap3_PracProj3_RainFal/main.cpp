/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 09, 2017, 10:45 PM
 * Purpose:  To calculate the average rainfall in 3 given months
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string mon1     ,  //Month 1
           mon2     ,  //Month 2
           mon3     ;  //Month 3
    
    float  monRai1  ,
           monRai2  ,
           monRai3  ,
           average  ;
    //Initialize variables
    
    //Input data
    cout<<"Enter first month name: "<<endl;
    cin >>mon1;
    cout<<"Enter"<< mon1 <<"of rainfall in inches: "<<endl;
    cin>>monRai1;
    cout<<"Enter second month name: "<<endl;
    cin >>mon2;
    cout<<"Enter "<<  mon2 <<" of rain fall in inches: "<<endl;
    cin >>monRai2;
    cout<<"Enter third month name: "<<endl;
    cin >>mon3;
    cout<<"Enter "<< mon3 <<" of rain fall in inches: "<<endl;
    cin>>monRai3;
    //Map inputs to outputs or process the data
    average = (monRai1 + monRai2 + monRai3)/3;
    //Output the transformed data
    cout<<"The average monthly rain  fall for "<<mon1<<", "<<endl;
    cout<<mon2<<" and, "<<mon3<<" is "<< average <<"inches."<<endl;
    //Exit stage right!
    return 0;
}

