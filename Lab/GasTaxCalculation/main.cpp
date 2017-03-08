/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on February , 2017, 11:20 AM
 * Purpose:  Calculating percentage of 
 *           profit and tax on a gallon of gas
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PERCENT=100.0f; // For percentage Calculation

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float CATax   = 0.39f;  // CA state tax per gallon
    float FedTax  = 0.184f; // Federal tax
    float CActTax = 0.10f;  // CA cap & Trade tax per gallon
    float CASlTax = 0.08f;  // CA state sales tax
    float OilCPro = 0.07f;  // Oil company profit per gallon
    float BasePrc;         // Base price  of gas per gallon
    float PumPric;         // Price at pump
    float TaxPerc;         // Tax Percentage
    float ProfPer;         // Profit Percentage
    
    //Input or initialize values Here
    cout<<" How much do you pay per gallon for gas at the pump?"<<endl;
    cin>>PumPric;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<" GAS TAX CALCULATION "<<endl;
    BasePrc = (PumPric - CASlTax - CActTax - FedTax) / (1 + CASlTax);
    cout<<" The base Price is "<< BasePrc <<endl;
    TaxPerc = (BasePrc * CASlTax + FedTax + CATax + CActTax) / BasePrc/PERCENT;
    cout<<" Tax Percentage "<< TaxPerc <<endl;
    
    //Exit
    return 0;
}

