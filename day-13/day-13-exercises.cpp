#include <iostream>
#include <string>
#include <cmath>
#include "std_lib_facilities.h"


using namespace std;

int main()
try{
    char c;
    cin >> c;
    return 0;
}
catch(exception& e){// The exception catches any error which falls from the standard base class.
    cerr << "error: "<<e.what() <<'\n';
    return 1;
}
catch(...){
    cerr<< "Oops: unknown exception!\n";
    return 2;
}
/*
1- The four major types are compile-time error, link-time error, run-time error and logic errors
    Compile-time errors are errors that compiler can already see before ruuning the code 
    Link-time errors are faults whilst declaring, defining or using a function in a program
    Run-time errors are errors found after running the program. This can range from infinite loops or out of range index error
    Logic error means you won't be getting correct answers because you did not write you code correctly.

2- Warnings such as unused variable warnings or implicit conversion warnings, things like that.

3- Should produce the desired results for all legal inputs and should give reasonable error messages for all illegal inputs

4- Organize the code, test case try to break it on purpose and debug systematically when an error is found

5- Most of the time don't know where it is , what is causing it and solving it may produce another bug as well.

6- Syntax error is error due to improper C++ grammar.

7- type error is when you use one type for another eg:- int for double.

8- Linker error is when you don't define a function but call it, basically compiles successfully but the linker can't piece it together.

9- Logic error is you're getting wrong results from the program basically.

10- The four sources are:- Poor specification, Incomplete program, unexpected arguments, unexpected input.

11- If the answer is correct.

12- The caller of a function handle is when the function error is handled in the main
    while in the called function handle the error , the function itself has error handling capability.

13- An input operation is successful, you can check it through if or while statement.

14- When the can't reasonably handle the error, or when there is no sensible error value like in an int function.

15- When the failure is a normal expected outcome and the caller is right there and can immediately handle it.

16- When an error is found in a function, it has a throw case for the error. The main function has try and catch statements
    for the respective errors. The try part will try to get pass the function correctly but if an error is found in the called
    function , the called function throws an error which the catch case receives.
*/