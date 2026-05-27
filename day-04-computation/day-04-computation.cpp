// Computaion chapter 3 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/*
Today it was more of a theory lesson on how to write good code I guess.
 First I learned how code actually works, which was followed by objectives
 as programmers, which is , in order, writing code correctly, simply, 
 efficiently. 
 Two approaches to problem-solving. First by using functions/abstraction
 and second by dividing it into smaller problems until ultimately you can solve them.
 Coding is about making least mistakes as possible as well and that tends to happen
 when we are not writing one 10000 line code but rather 10 parts of 1000 line codes
 int length = 20 means the value found in the object length is 20 while
 length=99 means that put 99 into the object length.
 
 We can also use const term for constant term that we will be using in programs
 but using repeatedly.
 The next thing that was taught was assignments and operators again
 if statement are used for two possible binary results
  in python it was elif, here it is else as many times as you want.*/
int main(){
    const double cm_per_inch=2.54;
    double length =1;
    char unit=' ';
    cout << " Please enter length followed by (c or i): \n";
    cin >> length >> unit;
    if ( unit =='i')
        cout << length << " in= "<< length * cm_per_inch << " cm\n";
    else 
        cout << length << " cm= "<< length/cm_per_inch << " in\n";

}