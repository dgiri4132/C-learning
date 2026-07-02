#include <iostream>
#include <string>
#include "std_lib_facilities.h"
#include <cmath>

/*
The plan is to understand how the calculator works :-
The first intuition is as we go from left to right, when you read 123 you see
1 then when you see 2 you multiply the one besides 2 which is one by 10 and then add two to that 
equalling 12. then you do that for 3 as well, 12 on side times 10 plus 3 which becomes 123
as per output
*/

int main(){
    string s;
    cout<< "Please enter the number: \n";
    cout << "Enter 'quit' to quit\n";
    while (cin>>s){
        if (s=="quit"){
            break;
        }
        int total = 0;
        for (int i = 0; i<s.size();++i){
                int val;
                val = s[i]-'0';
                total = total*10 + val;
            }
        if (s.size() == 4){
            cout << total << " is " << s[0]-'0'<< " thousand and "<< s[1]-'0'<< " hundred and "<< s[2]-'0' << " tens and "<< s[3]-'0'<< " ones.\n";
        }
        else if (s.size() == 3){
            cout << total << " is " <<s[0]-'0'<< " hundred and "<< s[1]-'0' << " tens and "<< s[2]-'0'<< " ones.\n";
        }
        else if (s.size() == 2){
            cout << total << " is " << s[0]-'0' << " tens and "<< s[1]-'0'<< " ones.\n";
        }
        else if (s.size() == 1){
            cout << total << " is " << s[0]-'0'<< " ones.\n";
        }
        }

    }