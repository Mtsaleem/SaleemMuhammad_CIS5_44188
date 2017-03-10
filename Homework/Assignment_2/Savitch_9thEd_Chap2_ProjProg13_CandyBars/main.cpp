/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 07, 2017, 11:58 AM
 * Purpose:  To calculate the amount of 
 *           candy bars that a person is 
 *           able to eat according to 
 *           their BMR
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
    char           sex           ;  //Male or Female
    unsigned short ht            ,  //Height in inches
                   wt            ,  //Weight in lbs
                   age           ;  //Age in years
    unsigned char  cdyCals = 230 ;  //CandyBar calories
    float          bmr           ;  //Body Metabolic Rate   
    int            nCdyBrs       ;  //Number of Candy Bars
     
    //Input or initialize values Here
    cout<<"This program calculates the number of "<< endl;
    cout<<"CandyBars allowed per day based upon your BMR"<< endl;
    cout<<"Type in your Sex(M/F), Wt(lbs), Ht(in), Age(yrs)"<< endl;
    cout<<"Inputs are integer based"<< endl;
    cin >> sex >> wt >> ht >> age;
    
    //Map Inputs
    bmr = ( sex == 'M') ?
           66 + 6.3f * wt + 12.9f * ht  - 6.8f * age:
          655 + 4.3f * wt +  4.7f * ht  - 4.7f * age;
    nCdyBrs = static_cast < int > ( bmr / cdyCals );
    
    //Output Located Here
    cout<<"The number of candy bars that you can eat = "<< nCdyBrs << endl;

    //Exit
    return 0;
}

