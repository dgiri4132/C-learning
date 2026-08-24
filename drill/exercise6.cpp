#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

vector<string> reversed(vector<string>add){
    if (add.size()%2==0){
        for ( int i = 0;i<(add.size()/2);++i){
        int j = add.size()-1-i;
        swap(add[i],add[j]);
        }
    
    }
    if (add.size()%2==1){
        for ( int i = 0;i<(add.size()/2);++i){
        int j = add.size()-1-i;
        swap(add[i],add[j]);
        }
    }

    return add;
}

vector<string> ordering(vector<string> name){
    vector<double> ages = {};
    double age = 0;
    for (int i = 0; i <5;++i){
        cout << "Enter the respective age: "<< "\n";
        cin >> age;
        ages.push_back(age);
    }
    vector<string>copied = name;
    

}