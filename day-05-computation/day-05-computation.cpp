//Computation continued
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int amount=0;
    char curr=' ';
    cout << "Enter your amount followed by the currency: ";
    cin >> amount >> curr;
    /*if (curr=='p')
        cout << "The amount in pounds is: "<<amount*1.23;
    else if (curr=='y')
        cout<< "The amount in yen is: "<< amount*148;
    else
        cout<<"The amount in Npr is: "<< amount*153;
*/
    switch (curr){
    case 'p':
        cout<<"The amount in pounds is: "<<amount*1.23<<"\n";
        break;
    case 'y':
        cout<<"The amount in yen is: "<<amount*148<<"\n";
        break;
    default:
        cout<<"Sorry, I don't know a currency called "<<curr<<"\n";
    }
    /*This about switch and how to use it. 
    - It can be used for int or char until now.
    - the values in cases must be constant.
    - each case should be different
    - break should be used to end the case.
    - can use several case labels for a single case.
    - it is more efficient than if loop for larger codes.
    - is always better to end with default.*/
}