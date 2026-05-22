// Try this question
#include <iostream>
#include <string>
int main() {
    std :: string name;
    int age;
    std :: cout<< "Enter your name and age\n";
    std :: cin >> name >> age;
    int in_months=12*age;
    double fractional_age = (in_months+5)/12.0;
    std :: cout << name << " your real age is "<< fractional_age;
    return 0;
}