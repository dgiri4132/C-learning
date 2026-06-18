// Trying to correct errors today
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
class Token_stream{
    public:
    Token get();
    void putback(Token t);
    private:
        bool full=false;
        Token buffer;
};

Token Token_stream :: get(){
    if (full){
        full = false;
        return buffer;
    }
    char ch = 0;
    if(!(cin >> ch))
        error("no input");
    switch (ch){
        case ';':
        case 'q':
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token {ch};
        case '.':
        case '0': case '1': case '2': case '3': case '4':
case '5': case '6': case '7': case '8': case '9':
{
    cin.putback(ch);
    double val = 0;
    cin >> val;
    return Token{'8', val};
}
default: 
    error("Bad token");
    }
}
void Token_stream::putback(Token t){
    if (full)
        error("putback() into a full buffer");
    buffer=t;
    full=true;
}   

double primary(){
    Token t=ts.get();
    switch(t.kind){
        case '(':{
            double d = expression();
            t=ts.get();
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

double term(){// We're doing the same thing to term as we did to expression
    double left= primary();
    Token t = ts.get();
    while (true){
        switch(t.kind){
            case '*':
            left*=primary();
                t=ts.get();
                break;
            case '/':{
                double d = primary();
                if(d==0)
                    error("The number is zero.");
                left/=d;
                t = ts.get();
                break;
            }
            default:
                ts.putback(t);
                return left;
        } 
    }
}

double expression(){// We're gonna edit this to have a putback function for caller to use
    double left= term();// when it isn't used by the expression()
    Token t = ts.get();
    while (true){
        switch(t.kind){
            case '+':
                left +=term();
                t=ts.get();
                break;
            case '-':
                left-=term();
                t=ts.get();
                break;
            default:
                ts.putback(t);
                return left;
        }

    }
}

int main(){
    try{
        double val = 0;
        while (cin){
            Token t=ts.get();
            if (t.kind == 'q')
                break;
            if(t.kind == ';')
                cout << "=" << val << '\n';
            else:
                ts.putback(t);
                val=expression()
        }
    }
    catch (exception &e){
        cerr << e.what()<<"\n";
    }
    catch(...){
        cerr << "exception \n";
        return 2;
    }
}

/*
In expression, when the Token returned by get_token() is not a + or a -, we just return. We don't use that token
anywhere and we also don't store it anywhere for any other function to use later. Same thing is with term() as well
so now we change the expression() and also term as well.
Basically, it prevents the data/ token spillage when term or expression donot need or their case does not match
*/
