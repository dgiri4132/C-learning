#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

class Token{
    public:
    char kind;
    double value;
    Token (char k): kind{k}, value{0.0}{};
    Token (char k, double v): kind{k}, value{v}{};
};


double primary(){
    Token t=get_token();
    switch(t.kind){
        case '(':{
            double d = expression();
            t=get_token();
            if(t.kind!=')'){
                error(" ')' expected");
                return d;
            }
        case 'number':
            return t.value;
        default :
            error("Primary expected");
            return 0;
        
        }
    }
}

double term(){
    double left= primary();
    Token t = get_token();
    while (true){
        switch(t.kind){
            case '*':
            left*=primary();
            case '/':{
                double d = primary();
                if(d==0)
                    error("The number is zero.");
                left/=d;
                t = get_token();
                break;
            }
            default:
                return left;
        } 
    }
}

double expression(){
    double left= term();
    Token t = get_token();
    while (true){
        switch(t.kind){
            case '+':
                left +=term();
                t=get_token();
                break;
            case '-':
                left-=term();
                t=get_token();
                break;
            default:
                return left;
        }

    }
}
/* So here essentially everything is recursion right. I was having difficulty with the position 
that the expression or term woud end up with and thought there might be syntax error but it won't ,
the get_tken() method will hae the next token after the recursion was called*/