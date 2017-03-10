/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 09, 2017, 02:33 PM
 * Purpose:  To calculate the amount of calories a person ate in cookies
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float xCookie ,
          totCal  ,
          srvng   ,
          calPer  ;
    
    //Initialize variables
    srvng = 3.00f;
    calPer = 3.00e2f;
   
    //Input data
    
    //Map inputs to outputs or process the data
  
    //Output the transformed data
    cout<<"This program is to calculate "<<endl;
    cout<<"the amount of calories in a given amount of cookies consumed"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin >>xCookie;
    cout<<"If "<<xCookie<<" cookies where consumed, "<<endl;
    totCal = (xCookie / srvng) * calPer;
    cout<<"then the calorie count is "<<totCal<<endl;
    
    return 0;
}
