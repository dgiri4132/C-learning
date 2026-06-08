//Error exercises continued
#include<iostream>
#include<string>
#include<cmath>
#include "std_lib_facilities.h"

//(7)

/*vector<double> quadratic(double a, double b, double c){
    double b_sq=pow(b,2);
    double root_value=b_sq-(4*a*c);
    vector<double> roots;
    if (root_value<0){
        error("There is no real solution because there is square root of negative one.");
    }
    double x1= (-b +pow(root_value,0.5))/(2*a);
    double x2= (-b -pow(root_value,0.5))/(2*a);
    roots.push_back(x1);
    roots.push_back(x2);
    return roots;
}

int main(){
    double a;
    double b;
    double c;
    cout << "\nEnter the values for a,b and c: ";
    cin >> a >> b>> c;
    vector<double>pair=quadratic(a,b,c);
    for (int i=0;i<pair.size();++i)
        cout<< pair[i]<<"\n";
}
*/

//(8)

int main(){
    int n=0;
    cout<< "Please enter the number of values you want to sum: ";
    cin>> n;
    cout<< "\nPlease enter some integers(press '|' to stop): ";
    vector<int> sum_vector;
    int input=0;
    int sum=0;
    while(cin>> input){
        sum_vector.push_back(input);
    }
    if (int(sum_vector.size())<n){
        error(" Sorry you asked for the sum of more number than what you entered: ");
    }
    cout<<"The sum of the first "<<n<<" numbers (";
    for(int i=0; i<n;++i){
        sum+=sum_vector[i];
        cout<<sum_vector[i]<<" ";
    }
    cout <<" ) is"<< sum;

}

