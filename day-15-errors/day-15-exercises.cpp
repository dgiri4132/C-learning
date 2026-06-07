// Errors Exercises
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
#include "std_lib_facilities.h"
//(2)
double ctok(double c) // converts Celsius to Kelvin
{
double k = c + 273.15;
return k;
}

int main(){
double c = 0; // declare input var iable
cin >> c; // retr ieve temperature to input var iable
double l = ctok(c); // convert temperature
cout << l << '/n' ; // pr int out temperature
}
/*
The errors in above code are:-
    int variable not returned and it should be kelvin
    syntax error, the bracket should be after int main, also semicolon on return 
    the c when called is string so it is a run-time error
    I think chaing variable name in the main from k to l would be less confusing
    Cout was capital

*/

//(3)

double ctok(double c) 
{
double k = c + 273.15;
return k;
}

int main(){
double c = 0; 
cin >> c;
if (c<-273.15)
    error("Sorry, the value of Celcius can't be less than -273.15C. ");

double l = ctok(c); 
cout << l << '/n' ; 
}


//(5)
double ctok(double c) 
{
    if (c<-273.15){
        error("The temperature cannot be less than -273.15C. ");
    }
    double k = c + 273.15;
    return k;
}
double ktoc(double k) 
{
    if (k<0){
        error("The temperature cannot be less than 0 Kelvin. ");
    }
    double c = k - 273.15;
    return c;
}
int main(){

double c = 0;
int option=0;
cout << "Do you want kelvin to C or C to kelvin. If first please press 1 else 2.";
cin >> option;
if(option ==1){
    cout<< "Please enter temperature in Kelvin\n";
    cin >> c;   
    double l = ktoc(c); 
    cout << l << '/n' ; 
}
else if (option ==2){
    cout << "Please enter temperature in Celcius\n";
    cin >> c;   
    double l = ctok(c); 
    cout << l << '/n' ;
}
else
    cout<<" Wrong option please try again";
}

//(6)
double ctof(double c) 
{
    if (c<-273.15){
        error("The temperature cannot be less than -273.15C. ");
    }
    double f = (c*9/5)+32;
    return f;
}
double ftoc(double f) 
{
    if (f<-459.67){
        error("The temperature cannot be less than -459.67 Farenheit. ");
    }
    double c = (f-32)*5/9;
    return c;
}
int main(){

double input = 0;
int option=0;
cout << "Do you want farenheit to C or C to farenheit. If first please press 1 else 2.";
cin >> option;
if(option ==1){
    cout<< "Please enter temperature in Farenheit\n";
    cin >> input;   
    double l = ftoc(input); 
    cout << l << '/n' ; 
}
else if (option ==2){
    cout << "Please enter temperature in Celcius\n";
    cin >> input;   
    double l = ctof(input); 
    cout << l << '/n' ;
}
else
    cout<<" Wrong option please try again";
}




