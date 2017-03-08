/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on February 16, 2017, 11:25 AM
 * Purpose:  Calculate the sum and product of two integers
 */

//System Libraries Here
#include <iostream>  //Input - output library
#include <cstdlib>   //Random number generator
#include <ctime>     //Time Library to seed the random number generator
using namespace std; //Name-Space under which system libraries exist

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    short op1,op2,sum,prod;
    
    //Input or initialize values Here
    op1=rand()%171+10;//[10-180]
    op2=rand()%171+10;//[10-180]
    
    //Process/Calculations Here
    
    //Map input to outputs or process the data
    sum=op1+op2;
    prod=op1*op2;
    
    //Output Located Here
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" x "<<op2<<" = "<<prod<<endl;

    //Exit
    return 0;
}

