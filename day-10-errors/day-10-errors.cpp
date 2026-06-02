//Errors
/*
Let's start with run-time errors. It occurs after the program runs. Usually the output
is not produced or the produced output is not the one that you want.
It is "silly" errors in your if-statement kind of stuff.
eg if your program to calculate area is in int and you want to find ratio of two areas
Then you neeed a double right
eg:-
int area1=area(x,y)
int area3=area(y,z)
if you need the ratio then what will you do is divide them 
but here ratio won't be exact because the number returned will be int as both of them are int
so you need to put one of them inside the double bracket
double ratio=double(area1)/area3;

first lets tackle the problem of argument errors with area()
- The first way is by letting the caller of area() deal with bad arguments
- Letting area(), the called function, deal with bad arguments.

The caller deals with bad arguments
    We could start by protecting the call of area(x,y) in main()
    if (x<=0)
        error("non-positive x")
    if (y<=0)
        error("non-positive y")
    int area1=area(x,y)

    but for framed area which uses the definition of returning area(x-2,y-2)
    what is x and y were 1, that would cause an error as well.
    This is called a brittle code.
    we could and a const to make it less brittle.
    const int frame_width =2;
    and then:
    if (1-frame_width<=0 || z-frame_width<=0)
        error(" non-positive argument for area() called by framed-area()")
    int area2= framed_area(1,z);
    if(y-frame_width<=0 || z-frame_width<=0)
        error("non-postitive argument for area() called by framed_area()")
    int area3= framed_area(y,z)

    The way mentioned above is caller, which is void test (x,y,z) dealing with the code
    The next one which is less ugly is the callee dealing with errors

The callee deals with errors
    we can check for valid arguments within framed_area() is wasy, and error() can still be 
    used to report a problem:

    int framed_area(int x, int y)
    {
    const int frame_width=2;
    if (x-frame_width<=0 || y-frame_width <=0)
        error(" non-positive area() argument called by framed_area()");
    return area(x-frame_width, y-frame_width);

    }
    This move helps us increase efficiently drastically as a function that is called 500 times may
    be harder to have if-statement for all of them.
    you can apply the same thing to area as well with length and width arguments

    It isn't always easy to error handle in a function, and there are some respectable reasons
    - The function is in a ibrary, may be you don't have the source code or the library has regular updates so 
    you need to change every time you update anything.
    
    - The called function doesn't know what to do in case of error:- This is typically the case for library functions
    The library writer can detect the error, but only you (the caller) know what is to be done when an error occurs.

    - The called function doesn't know what to do in case of error:- If the function gives general messages, then it is 
    hard to figure out what went wrong.

    - Performance:- For a small function, the cost of a check can be more than the cost of calculating the result. 
    Check your arguments in a function unless you have a good reason not to.


Error reporting 4.5.3 under Run-time error
    So after you find an error, sometimes you can return an 'error value'. 

    int area(int length, int width){
    if(length<=0 || width <=0)
        return -1;
    return length * width;
    }

    We can use this but there a couple of problems that make ut unusable in many cases:
    - Now both the called function and all callers must test. The caller has only a simple tet to do but 
    must still write that test and decide what to do if it fails.
    - A caller can forget to test. That can lead to unpredictable behavior further along in the program.
    - Many functions do not have an "extra" return valye that they can use to indicate an error.
    For example, a function that reads an integer from input ( like >>) can obviously return any int value
    so tehre is no int that it could return to indicate failure.
    
    */