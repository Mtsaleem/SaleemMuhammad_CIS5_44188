/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 09, 2017, 12:40 PM
 * Purpose:  To calculate the amount of 
 *           income generated from different
 *           classes of seats
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float classA ,  //Class A seats in stadium worth in $'s
          clssA$ ,  //Amount of Class A seats
          profit ,  //Profit from seats sold in the stadium
          clssB$ ,  //Amount of Class B seats
          clssC$ ,  //Amount of Class C seats
          classB ,  //Class B seats in stadium worth in $'s
          classC ;  //Class C seats in stadium worth in $'s
    
    //Input or initialize values Here
    classA = 15.00f;
    classB = 12.00f;
    classC = 09.00f;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<setfill('0');
    cout<<"This program is to calculate the income generated from the stadium"<<endl;
    cout<<"How many Class A seats where sold in the stadium?"<<endl;
    cin >>clssA$;
    cout<<"How many Class B seats where sold in the stadium?"<<endl;
    cin >>clssB$;
    cout<<"How many Class C seats where sold in the stadium?"<<endl;
    cin >>clssC$;
    cout<<"If you sold "<<clssA$<<" Class A seats, "<<endl;
    cout<<clssB$<<" Class B seats, and "<<clssC$<<" Class C seats "<<endl;
    profit = (classA * clssA$) + (classB * clssB$) + (classC * clssC$);
    cout<<"then you have a profit of $"<< profit<< "." << setw(2) << 0 <<endl;

    //Exit
    return 0;
}

