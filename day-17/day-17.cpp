#include<iostream>
#include<string>
#include<cmath>
#include "std_lib_facilities.h"
using namespace std;
//(9)
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
    for(int i=0; i<n;++i){
        if(sum>2147483647 || sum < -2147483647)
        sum+=sum_vector[i];
    }
    
    cout<<"The sum of the first "<<n<<" numbers (";
    for(int i=0; i<n;++i){
        cout<<sum_vector[i]<<" ";
    }
    cout <<" ) is"<< sum;

}

/*
Instead of the or line you could call 
#include <climits>
for(int i = 0; i<n; ++i){
if (sum > INT_MAX || sum < - INT_MAX)
    error(" The sum can't be represented as an integer.")
    }
*/

// (10)

int main(){
    int n=0;
    cout<< "Please enter the number of values you want adjacent difference of: ";
    cin>> n;
    cout<< "\nPlease enter some integers(press '|' to stop): ";
    vector<double> nums;
    vector<double> difference_vector;
    double input=0;
    double difference=0;
    while(cin>> input){
        nums.push_back(input);
    }
    if (nums.size()<n){
        error("N should be less than or equal to the total number you input.");
    }
    for(int i=1;i<(n);++i){
        difference = nums[i]-nums[i-1];
        difference_vector.push_back(difference);
        }
    for(int j=0; j<difference_vector.size(); ++j){
        cout<< difference_vector[j]<< " ";
    }


}

