// Try this question
#include <iostream>
#include <string>
#include <cmath>
int main() {
    std :: string name;
    int age;
    std :: cout<< "Enter your name and age\n";
    std :: cin >> name >> age;
    int in_months=12*age;
    double fractional_age = (in_months+5)/12.0; // I used +5 as a random number so that it would return in decimals
    std :: cout << name << " your real age is "<< fractional_age;

    // Try this second part
    
    std :: cout << "\nPlease enter a floating-point value: ";
    int n=0;
    std ::cin >> n;
    std:: cout << "n="<< n
                << "\n n+1 = "<< n+1
                <<"\n Three times n = " << 3*n
                <<"\n Twice n = " <<n+n
                <<"\n n squared = " << pow(n,2)
                <<"\n square root of n = " << sqrt(n)
                <<"\n n modulo 2 = "<< n%2
                <<"\n";
    return 0;
}
