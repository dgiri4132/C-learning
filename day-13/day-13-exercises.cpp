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