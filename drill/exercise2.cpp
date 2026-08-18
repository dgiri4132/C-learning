#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"
using namespace std;


vector<int> fibonacci(int x, int y, vector<int>v, int n){
    v.push_back(x);
    v.push_back(y);
    int j = 0;
    for (int i = 2;i<n;++i){
        j = v[i-1]+v[i-2];
        v.push_back(j);
    }
    return v;
}
int fibonaccii(){
    int a = 1;
    int b = 2;
    int next = a+b;
    while (next>b){
        a = b;
        b = next;
        next = a+b;
    }
    return b;
}

void print(vector<int> abcd){
    cout<< "printed: ";
    for(int i = 0;i<abcd.size();++i){

        cout<<abcd[i]<< " ";
    }
}

int main(){
    vector<int> v = {};
    vector<int> ab = fibonacci(1,3,v,5);
    print(ab);
}


