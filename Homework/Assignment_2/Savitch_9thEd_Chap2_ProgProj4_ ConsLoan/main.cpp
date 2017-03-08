/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 02, 2017, 11:29 AM
 * Purpose:  Calculating loan perameters
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PERCENT = 100.0f; //Percent conversion
const float CNVYRMN = 12.0f ; //Year to month conversion

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float FaValLo; //Face value of Loan
    float ConsRec; //What the consumer receives $'s
    int   IntRate; //Yearly percentage Interest Rate
    float MontPay; //How much per month it is to pay
    int   NumMont; //How many months the loan will last

    //Initialize values
    
    //Input data
    cout<<" This program calculates loan Parameters "<<endl;
    cout<<" Input loan amount to be recieved in $'s ";
    cin>>ConsRec;
    cout<<" Number of months in the loan ";
    cin>>NumMont;
    cout<<" Interest rate % = ";
    cin>>IntRate;
    
    //Process/Calculations Here
    FaValLo = ConsRec / ( 1 - IntRate / PERCENT / CNVYRMN * NumMont );
    MontPay = FaValLo / NumMont;
    
    //Output Located Here
    cout<< fixed << setprecision (2) << showpoint;
    cout<<" Loan amount received = $ "<< ConsRec <<endl;
    cout<<" Number of monthly payments = "<< NumMont <<endl;
    cout<<" Interest rate = "<< IntRate <<" % " <<endl;
    cout<<" Face value of the loan = $ "<< FaValLo <<endl;
    cout<<" Monthly payments = $ "<< MontPay <<endl;

    //Exit
    return 0;
}

