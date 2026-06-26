#include <iostream>
#include<string>
#include <cmath>
#include "std_lib_facilities.h"

class Name_value{
    public:
    string st;
    double val;
    Name_value (string s, double v): st{s}, val{v}{};

};
int main(){
    vector<Name_value> nv;
    string name;
    double value;

    while (cin>> name >> value){
        nv.push_back(Name_value{name,value});
    }

    string query;
    while(cin >> query){
        bool found = false;
        for (int i = 0; i<nv.size();++i){
            if (nv[i].st == query){
                cout << query << " = "<< nv[i].val<<"\n";
            found =true;
            break;
            }
        }
        if(!found)
            cout << query << " not found \n";
    }
}