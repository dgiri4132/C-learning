#include <iostream>
#include <string>
#include <cmath>

// Trying to correct errors today
#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

void conv1(double x)
{
    int y = narrow_cast<int>(x);
}

void conv2(int x, int y)
{
    double z = double(x)/y;
}