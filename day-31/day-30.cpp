#include <iostream>
#include <string>
#include "std_lib_facilities.h"
#include <cmath>


int main(){
    string list;
    vector<char> listed;
    string sub0 = "";
    string sub1 = "";
    string sub2 = "";
    string sub3 = "";
    int val0=0;
    int val1=0;
    int val2=0;
    int val3=0;
    int val_for_position0 = 0;
    int val_for_position1 = 0;
    int val_for_position2 = 0;
    int val_for_position3 = 0;
    int final_total = 0;
    cout << "Please enter the integer up to four digits\n";
    cout << "Enter 'quit' to quit the program.\n";

    while (cin >> list){
        if(list == "quit")
            break;
        listed.clear();
        for(int i = 0;i<list.size();++i){
            listed.push_back(list[i]);
        }
        for (int j = listed.size()-1; j>=0; --j){
            int pos = listed.size()-1-j;
            if (pos==3){
                val3 = listed[j]-'0';
                if(val3>1 && listed[j+1]){
                    sub3 = " thousands and ";
                }
                else if(val3>1)
                    sub3 = " thousands ";
                else if (val3== 1 && listed[j+1])
                    sub3 = " thousand and ";
                else if (val3== 1)
                    sub3 = " thousand ";
                else
                    sub3= "";
                val_for_position3 = val3*1000; 
            }
            else if (pos==2){
                val2 = listed[j]-'0';
                if(val2>1 && listed[j+1]){
                    sub2 = " hundreds and ";
                }
                else if(val2>1)
                    sub2 = " hundreds ";
                else if (val2== 1 && listed[j+1])
                    sub2 = " hundred and ";
                else if (val2== 1)
                    sub2 = " hundred ";
                else
                    sub2 = "";
                val_for_position2 = val2*100; 
            }
            else if (pos==1){
                val1 = listed[j]-'0';
                if (val1> 1 && listed[j+1])
                    sub1 = " tens and ";
                else if(val1>1)
                    sub1 = " tens ";
                else if (val1== 1 && listed[j+1])
                    sub1 = " ten and ";
                else if (val1== 1)
                    sub1 = " ten ";
                else
                    sub1 = "";
                val_for_position1 = val1*10; 
            }
            else if (pos==0){
                val0 = listed[j]-'0';
                if(val0>1)
                    sub0 = " ones ";
                else if (val0== 1)
                    sub0 = " one ";
                else
                    sub0 = "";
                val_for_position0 = val0*1; 
            }   
        }
        final_total = val_for_position0 +val_for_position3+val_for_position2+val_for_position1;
    
    }
    cout << final_total <<" is ";
    if(val3) cout<<val3<<sub3;
    if(val2)cout << val2 << sub2;
    if(listed.size()>=2)cout<<val1<<sub1;
    cout<<val0<<sub0<<".\n"; 
    
}