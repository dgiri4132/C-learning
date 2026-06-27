/*
or-expression:
xor-expression
or-expression | xor-expression

xor-expression:
and-expression
xor-expression ^ and-expression

and-expression:
unary-expression
and-expression & unary-expression

unary-expression:
Primary
 ! unary-expression
 ~ unary-expression

Primary:
integer-literal
( expression )*/

#include <iostream>
#include<string>
#include "std_lib_facilities.h"
using namespace std;

/*
Implement a little guessing game called (for some obscure reason) ‘‘Bulls and Cows.’’ The
program has a vector of four different integers in the range 0 to 9 (e.g., 1234 but not 1122)
and it is the user’s task to discover those numbers by repeated guesses. Say the number to be
guessed is 1234 and the user guesses 1359; the response should be ‘‘1 bull and 1 cow’’
because the user got one digit (1) right and in the right position (a bull) and one digit (3) right
but in the wrong position (a cow). The guessing continues until the user gets four bulls, that
is, has the four digits correct and in the correct order.*/
int main(){
    string tbg = "abcd";
    int len_guess = tbg.size();
    string str ;
    while (cin>> str){
        int count_cows = 0;
        int count_bulls = 0;
        for (char c: str){
            if(isdigit(c)){
                cout << "Error: only letters allowed"<<"\n";
                break;
            }
        }
        for (int i = 0; i<tbg.size();++i){
            for (int j = 0; i<str.size(); ++j){
                if (tbg[i]==str[j] && i == j){
                    count_bulls+=1;
                }
                else if (tbg[i] == str[j]){
                    count_cows+=1;
                }
            }
        }
        if(count_bulls == len_guess){
            cout << "You have guessed it right";
            break;
        }
        else if(count_bulls>0 && count_cows >0){
            cout << count_bulls << " "<< count_cows << "\n";
        }

    }
}