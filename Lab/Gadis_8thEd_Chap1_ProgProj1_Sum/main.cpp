/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on February 16, 2017, 12:05 AM
 * Purpose:  Convert acres to ft^2,mile^2
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVACFT=43560;//1 Acre = 43560 sq feet
const float CNVMIFT=1.0f/5280;//1 Mile = 5280 feet

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float acres,ftsq,milesq;
    
    //Input or initialize values Here
    acres=1.0f;//Number of acres
    
    //Process/Calculations Here
    
    //Map input to outputs or process the data
    ftsq=acres*CNVACFT;
    milesq=ftsq*CNVMIFT*CNVMIFT;
    
    //Output Located Here
    cout<<acres<<" Acres = "<<ftsq<<" ft^2 = "<<milesq<<" miles^2"<<endl;

    //Exit
    return 0;
}

