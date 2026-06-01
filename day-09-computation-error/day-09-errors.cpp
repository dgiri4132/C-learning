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

