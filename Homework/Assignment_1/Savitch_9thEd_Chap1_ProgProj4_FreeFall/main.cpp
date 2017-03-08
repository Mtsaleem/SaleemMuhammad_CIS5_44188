/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on Febuary 16, 2017, 12:45 AM
 * Purpose:  Calculate the sum
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float GRAVITY=32.174f;//Gravity on Earth Sea-Level

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time,distnce;
    
    //Input or initialize values Here
    time=1.0f;
    
    //Process/Calculations Here
    
    //Map input to outputs or process the data
    distnce=GRAVITY*time*time/2;//Result in ft
    
    //Output Located Here
    cout<<"Free Fall of"<<time<<" sec = "<<distnce<<" ft"<<endl;

    //Exit
    return 0;
}

