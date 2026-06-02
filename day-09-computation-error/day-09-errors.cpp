//starting chapter on errors
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
/*
There are many kind of error and many ways of classifying errors as well.
Some of them are:-
- Compile-time errors: Errors found by the compiler which are syntax errors and type errors.
- Link type errors: Errors found by the linker when it is trying to combine object files into
    executable program.
- Run-time errors: Errors found by checks in a running program. We can further classify runtime errors
- Compile-time erro is like a missing syntax 
- Run- time error is dividing by zero kind of stuff.
- They are detected by hardware, library or user code
- Also called lofic error.
- There are also two nasties kind of error:
    - undetected logic errors leading to crashes or wrong results.
    - Mismatches between what the user needs and what the code delivers.

-Unless specified, the general assumption is that program will
    - Produce desired result for all legal inputs.
    - Should give reasonable error messagesfor all illegal inputs.
    - Need not worry about misbehaving hardware.
    - Need not worry about misbeheaving system software.
    - Is allowed to terminate after ginding an error.

-Sources of errors:-
    - Poor specification: edge cases.
    - Incomplete programs: cases not handled as of now.
    - Unpexpected arguments: eg sqrt(-1.2)
    - unexpected input: wrong input into the program.
    - Unexpected state: wrong data of wrong place.
    - Logical errors: The code isn't doing what it is supposed to do .
    
*/

// Compile-time errors
/*The error that are based off of wrong use of sign or input usually
eg:- take line int area(int length, int width)
    anything you do like int s1=area(7,2); will be considered syntax error because something is missing.

    */

// Try this
/*int area(int length, int width){
    return length*width;
}
Int s3=area(7,2); all of them showed easy error signals*/

// Type errors
/* 
Using same things as examples
int x0=arena(7,2);
int x1=area(7);
int x2=area('seven',2);

answers like 
    int x4=area(10,-7);
    int x5=area(10.7,9.3);
    char x6=area(100,9999)
    
    All of them give answers, even though there can't be a rectangle
    with negative width or the numbers will be rounded  down implicitly
    */


// Link-time errors

/* A program consists of several compiled parts, called translation units
or modules. Every function in a program must be declared with eactly the same type in every translation unit in which it is used. 
Every function must also be defined exactly once in a program.

here follows a typical linker error

int area(int length, int width);

int main()
{int x = area(2,3);}

This code above will give error because the function 
is only called but not defined.
Functions with the same name but different types will not match and will be ignored.
*/

// Run-time errors

/* The output produced is wrong, maybe logic is flawed or maybe didn't write what you thought you wrote
maybe made a silly error or whatever

eg;-

int area(int length, int width)
{
return length*width;
}

int framed_area(int x,int y)
{
return area(x-2,y-2);
}

void test(int, int y , int z){
    int area1=area(x,y)
    int area2=framed_area(1,z);
    int area3=framed_area(y,z);
    double ratio=double(area1)/area3;
    }
    Here we know that int by int is int so you need to convert
    area, which is in int to double so that the ratio is in double*/