#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

void swap_v(int a, int b){
    int temp; 
    temp = a, a=b;
    b=temp;
    cout << a << ", " << b<< "\n";
}

void swap_r(int&a, int&b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << ", " << b<< "\n";
}

namespace X{
    int var;
    void print(){ cout<< var;}
}

namespace Y{
    int var;
    void print(){cout << var;}
}

namespace Z{
    int var;
    void print(){ cout << var;}
}

int main()
{
X::var = 7;
X::print(); 
using namespace Y;
var = 9;
print(); {
// pr int X’s var
// pr int Y’s var
using Z::var;
using Z::print;
var = 11;
print(); // pr int Z’s var
}
print(); X::print(); // pr int X’s var
 }