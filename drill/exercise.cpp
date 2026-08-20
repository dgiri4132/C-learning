#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

vector<int> reverse(vector<int> ad){
    vector<int> reversed = {};
    for (int i = ad.size()-1;i>=0;--i){
        reversed.push_back(ad[i]);
    }
    return reversed;
}

vector<int> reversed(vector<int>add){
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