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

string lowered(string ld){
    string l = "";
    for (int i = 0;i<l.size();++i){
        l+=tolower(ld[i]);
    }
    return l;
}


vector<string> ordering(vector<string> name){
    vector<double> ages = {};
    double age = 0;
    for (int i = 0; i < name.size(); ++i){
        cout << "Enter the respective age: "<< "\n";
        cin >> age;
        ages.push_back(age);
    }

    for(int i = 0; i<name.size();++i){
        for (int j = i+1;j < name.size();++j){
            if (lowered(name[j])<lowered(name[i])){
                swap(name[i],name[j]);
                swap(ages[i],ages[j]);
            }
        }
    }

    for (int i = 0; i < name.size(); ++i){
        cout << name[i] << " " << ages[i] << "\n";
    }

    return name;
}