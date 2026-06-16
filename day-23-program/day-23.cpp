#include <iostream>
#include <string>
#include <cmath>
 using namespace std;
 //Expressions: third time lucky


class Token{
    public:
    char kind;
    double value;
    Token (char k):kind{k}, value{0.0} {}
    Token(char k, double v): kind{k}, value{v} {}
}


/*
Primary expressions

Primary:
    Number
    "(" Expression")"
    */
double primary(){
    Token t = get_token();
    switch(t.kind){
        case '(':
        {
            double d = expression();
            t = get_token();
            if ( t.kind!= ')')
                error("')' expected");
                return d;
        }
        case '8':
            return t.value;
        default:
            error("primary expected");
    }
}





/*
Term rule
Term:
    Primary
    Term "*" Primary
    Term "/" Primary
    Term "%" Primary
    */
double term(){
    double left = primary();
    Token t =get_token();
    while (true){
        switch(t.kind){
            case '*':
                left*= primary();
                t=get_token();
                break;
            case '/':{
                double d = primary();
                if (d==0)
                    error("divided by zero");
                left/=d;
                t=get_token();
                break;
            }
            default:
                return left;
        }
    }
}



double expression(){
    double left= term()
    Token t = get_token()
    while (true){
        switch (t.kind){
            case '+':
                left+=term();
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