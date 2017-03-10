/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 09, 2017, 01:57 PM
 * Purpose:  To calculate the percentage 
 *           of male and female registered in class
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100.0f;  //Percent conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float mStud     ,  //Number of male students registered
          mStudPer  ,  //Percent of male students
          fStudPer  ,  //Percent of female students
          totStud   ,  //Number of female students registered
          fStud     ;  //Total number of students registered
    
    //Initialize variables
    totStud = 20.00f;
   
    //Input data
    
    //Map inputs to outputs or process the data

    //Output the transformed data
    cout<<"This program s to calculate the percentage of Male and"<<endl;
    cout<<"Female students in the class"<<endl;
    cout<<"There are 20 students registered for the class";
    cout<<"How many of the students are Male?"<<endl;
    cin >>mStud;
    cout<<"How many of the students are Female?"<<endl;
    cin >>fStud;
    cout<<"The Total number of students enrolled in the class is "<<totStud<<endl;
    mStudPer = (mStud / 20) * PERCENT;
    cout<<"The number of male students in the class is "<<mStud<<" which is ";
    cout<<mStudPer<<"%."<<endl;
    cout<<"And the number of Female students is "<<fStud<<" which is ";
    fStudPer = (fStud / 20) * PERCENT;
    cout<<fStudPer<<"%."<<endl;

    return 0;
}

