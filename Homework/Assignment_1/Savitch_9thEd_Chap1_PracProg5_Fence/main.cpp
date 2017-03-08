/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on February 25, 2017, 10:48 AM
 * Purpose:  To calculate the amount of 
 *           fence needed to enclose a rectangular area
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
    int width_feet, height_feet, total_fence;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data    
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the width of the fence in feet:\n";
    cin>>width_feet;
    cout<<"Enter the height of the fence in feet:\n";
    cin>>height_feet;
    total_fence = 2 * width_feet + 2 * height_feet;
    cout<<"If the width is ";
    cout<<width_feet;
    cout<<" And your height is\n";
    cout<<height_feet;
    cout<<" then\n";
    cout<<"the length of fence you will need is ";
    cout<<total_fence;
    cout<<" feet"<<endl;
    //Exit stage right!
    return 0;
}

