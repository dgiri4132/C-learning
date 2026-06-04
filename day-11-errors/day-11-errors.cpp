//Errors continued
#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"

/*
Range Errors
It simply means not being in the range, eg: in vector where 
you might go out of range if you use v.size() instead of v.size()-1.

*/
//Tackling range errors
int main(){
    try{
        vector <int> v;
        for (int x; cin >>x;){
            v.push_back(x);
        }
        for (int i=0;i<=v.size();++i){
            cout<< "v["<<i<<"] == " << v[i] <<'\n';
        }
    }
    catch(out_of_range){
        cerr << "Oops! Range error\n";
        return 1;
    }
    catch(...){
        cerr << "Exception:something went wrong\n";
        return 2;
    }
}
/* You can handle errors by 
    try and catch method, if you know what error
    you can also have if error throw class something
    which is followed by usually having a catch function
    in the main function. 
    So to recap previous section's code
    
    class bad_area{};

    void test(int x, int y, int z){
    int area1=area(x,y);
    int area2=framed_area(1,z);
    . . . . . . . . . . . . . . . 

    }
then you have try function

    int main()
    try {
    test(-1,2,4);
    }
    catch (bad_area){
    cout/cerr << " Oops! bad arguments to area()\n";
    }

    */


/* Bad inputs
 The detailed section of what to do with bad inputs is in 9.4.
 In this section, we will just show you how to see if input were fine
 
 double d=0;
 cin >> d;
 
 if(cin){
 everything is good, we can try reading again.
}
 else{
 the last read didn't succed, so we take some other action.
 }
 
 eg:-
 double some_function(){
 double d=0;
 cin>> d;
 if(!cin)
    error("couldn't read a double in 'some_function()'")
    if not use d then
    }

error is supposed to terminate the program after the message is
written of what we wrote.
exceptions can rather return values like 1 
So the ultimatum is like if you want the error message and just stop the program
use if , else if you want the caller of the funciton to do a specific thing when it is called
then do the try catch exception thing.

Everything that you don't understand right now is mainly because 
you will be taught this in the later chapters like catch(runtime_error& e)

when you use error(), you'll often pass two pieces of information hence 
you can use throw runtime_error{s1+s2} if it is void, error (string s1, string s2)
    */

// Try this

double square_root(double x){
    if (x<0)
        error("can't tale square root of a number that is negative");
    return sqrt(x);
}

int main(){
    square_root(-4);
    return 0;
}

// Estimation (part one of avoiding and finding errors)
/*
Estimating the result is very essential. asking the question: Is this answer to this particular problem
plausible? 
The aim is not to find the pinoint answer but rather to find whether the answer that our
program produced is a good estimate or not. Estimation is a noble art that comnines common sense and some very siple arithmetic applied 
to a few facts. just guessing well enough is pluasible
like Newyork to Denver in 14 hours is not plausible . it might seem doable but the distance is 2000 miles and you would have to maintain
an average speed of 145 km/hour and no rest as well.
So this part is just common sense

*/