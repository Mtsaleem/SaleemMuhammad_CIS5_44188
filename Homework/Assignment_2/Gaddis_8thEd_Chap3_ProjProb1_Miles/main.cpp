/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 09, 2017, 12:15 PM
 * Purpose:  To calculate your MPG 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float gall ,  // Gallons your car can hold
          mile ,  // Miles your car can drive on a full tank of gas
          MPG  ;  // Miles Per Gallon of your car
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"This program is to calculate the Miles Per Gallon of your car."<<endl;
    cout<<"How many gallons of gas can your gas hold?"<<endl;
    cin >>gall;
    cout<<"How many miles can your car run on a full tank of gas?"<<endl;
    cin >>mile;
    MPG = mile / gall;
    cout<<"If your car can hold "<<gall<<" gallons of gas"<<endl;
    cout<<"and can drive "<<mile<<" miles on a full tank,"<<endl;
    cout<<"then the MPG of your car is "<<MPG<<endl;

    //Exit
    return 0;
}

