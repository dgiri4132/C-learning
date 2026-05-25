// Doing exercises
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;
int main(){
    /*(1) double x;
    cout << "Enter the length in miles: ";
    cin >> x;
    double in_kms= x * 1.609;
    cout << " The length in kilometers is "<< in_kms << ".\n";
    return 0;*/

    /* (2) int 2ass=3;
    double @ss=4;*/

    int val1;
    int val2;
    cout << " Enter two integer values ";
    cin >> val1 >> val2;
    if( val1>val2){
        cout << " first is larger\n";
    }
    else
        cout << "second is larger\n";
    
    int sum= val1+val2;
    int product= val1*val2;
    int difference=val1-val2;
    int ratio = val1/val2;
    cout<< "Sum is: "<< sum;
    cout << "\nProduct is: "<< product;
    cout << "\nDifference is: "<< difference;
    cout << "\nRatio is : "<< ratio;
}