/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on February 25, 2017, 12:06 PM
 * Purpose:  To calculate the worth of coins in cents
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float QValue = 25; // Value of a single Quarter
    float NValue  =  5; // Value of a single Nickel
    float DValue    = 10; // Value of a single Dime
    float Quarters, Dimes, Nickels, Cents;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    //Cents = ( Quarter * Quarters + Nickel * Nickels + Dime * Dimes );
    
    //Output the transformed data
    cout<<"Press Enter after every number"<<endl;
    cout<<"This is to calculate the amount of cents you have"<<endl;
    cout<<"How many Quarters do you have?"<<endl;
    cin>>Quarters;
    cout<<"How many Dimes do you have?"<<endl;
    cin>>Dimes;
    cout<<"How many Nickels do you have?"<<endl;
    cin>>Nickels;
    Cents = ( QValue * Quarters + NValue * Nickels + DValue * Dimes );
    cout<<"If you have "<<Quarters<<" Quarters, "<<Nickels<<
          " Nickels, and "<<Dimes<<" Dimes then you have "<<
          Cents<<" Cents"<<endl;
    
    //Exit stage right!
    return 0;
}

