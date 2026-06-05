//Errors continued
//Debugging

/*
The process of debugging works like this:
- Get the program to compile.
- Get the program to link.
- Get the program to do what it is supposed to do.

Some practical debugging advice
- Start thinking about debugging before you write the first line of code.
- decide how to report errors , usually through error and catch exception in main()

- Comment well
- clean code.
- use meaningful names.
- use library functions whenever possible.
- express code/function into smaller functions, each expressing a logical action.
- don't code when not in good state.

Insert statements that check invariants (that is, conditions that should always hold) in sections of code suspected
of harboring bugs.

I that does not have any effect, insert invariant checks in sections of code not suspected of harboring bugs; if you
can't find a bug, you are almost certainly looking in the wrong place.


*/

//Assertions
/*
A statement that states an invariant is called an assertion. There are many effective ways of programming and 
different ways of debugging come from different projects or programs that people work on.

Precondition is when we add a condition even before the code is executed

eg

int my_complicated_function(int a, int b, int c)
// the arguments are positive and a<b<c

{
if (!(0<a && a<b && b<c))
    error(" bad arguments for mcf")
}


Expect()

there are couple of problems with preconditions
- Some preconditions cannot be checked simply and cheaply.
- we can't see whether an if0statement checks an invariant or is part of the ordinary logic of the function.

we can use expect to do the checking 
eg

bool ordered_positive(int a, int b, int c){
    return 0< a && a<b && b<c;
}
int my_complicated_function(int a, int b, int c)
{
    expect(ordered_positive(a,b,c), "bad arguments for mcf");

}
for direct location where they are used, we can use & , which in expect
looks like [&]{return 0<a && a<b && b<c} us called a lambda expression.

Postconditions
int area (int length, int width)
    // calculate area of a rectangle
    // the arguments are positive
{
    expect([&]{ return 0<length && 0<width;}, "bad arguments to area()")
    return length*width;
}

*/

// Try this 
// find a pair of values so that the precondition of this version of area holds, but the postcondition doesn't.
// I had to claude it, it is a=e-200 b=e-200

//Testing

/*
The last bug is a programmer's joke , there isn't such creature; we never find " the last bug" in a large program.
There needs to be test cases to evaluate whether all the inputs can be satisfied or not, real prgrams have millions of test 
cases. The very best testers are experienced person with a bit of ego that they are better than anu program
As you get better at coding in C++, there are programs called test framworks like Boost.Test, Catch2, Google Test to test your codes, it would 
be better if you can get an experienced developer to help you get started.

*/

// Random numbers

/*
We can generate pseudorandom numbers in C++ 
default_random_engine engine;

for modelling a random number like for a die, we can use uniform distribution function

uniform_int_distribution<int> dist(1,6);
for (int i=0;i<10;++i)
    cout<< dist(engine)<< ' ';

int random_int(int min, int max);
int random_int(int max);

for (int i=0;i<10;++i)
    cout<< random_int(1,6) << '';

for generation of random int or random letters or random vectors, there are functions
in PPP_support.

*/