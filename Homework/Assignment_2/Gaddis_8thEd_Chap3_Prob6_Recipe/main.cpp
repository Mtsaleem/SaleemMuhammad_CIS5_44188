/* 
 * File:   main.cpp
 * Author: Muhammad Saleem
 * Created on March 09, 2017, 11:25 AM
 * Purpose:  Calculate ratio of ingredients for cookies
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
    float sugar   ,  //Amount of sugar needed in the original recipe
          butter  ,  //Amount of butter needed in the original recipe
          cookies ,  //Amount of cookies in the original recipe
          xcookie ,  //Amount of cookies you want to make
          recipe  ,
          rSug    ,  //Amount of sugar needed in the new recipe
          rButr   ,  //Amount of butter needed in the new recipe
          rFlwr   ,  //Amount of flower needed in the new recipe
          flower  ;  //Amount of flower needed to make 48 cookies
    
    //Input or initialize values Here
    butter  = 1.00f;  //Butter in cups
    sugar   = 1.50f;  //Sugar in cups
    flower  = 2.75f;  //Flower in cups
    cookies = 48.0f;  //Amount of cookies
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"This program is to calculate the ratio of ingredients "<<endl;
    cout<<"needed to make a certain amount of cookies"<<endl;
    cout<<"How many cookies do you want to make?"<<endl;
    cin >>xcookie;
    recipe = xcookie / cookies ;
    cout<<"If you want "<<xcookie<<" then you will need"<<endl;
    rSug = sugar * recipe ;
    cout<<rSug<<" cups of sugar"<<endl;
    rButr = butter * recipe;
    cout<<rButr<<" cups of butter"<<endl;
    rFlwr = flower * recipe;
    cout<<rFlwr<<" cups of flower"<<endl;
    

    //Exit
    return 0;
}

