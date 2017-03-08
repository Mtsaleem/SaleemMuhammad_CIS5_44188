/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on February 21, 2017, 1:01 PM
 * Purpose:  To calculate the number of peas in the pods
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
    int number_of_pods, peas_per_pod, total_peas;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data    
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas = number_of_pods*peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" Peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all pods.\n";
    //Exit stage right!
    return 0;
}

