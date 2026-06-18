#include <iostream>
#include <string>
#include <cmath>
#include "std_lib_facilities.h"
using namespace std;
/*
Let's start by revising what we had to do last time out.
we made cases for token ts, if it was full, to return the full char because that would be 
necessary, or priority. 
Now for character, like actual character cases eg (,), or +, we return the characters themselves
For the numbers we use putback() to putback the char gthat was consumed by get() in the first place.
After that, the cin can read the whole value like Token_stream.
We used cin.putback() instead of ts.putback() because the token may return 123 but the cin only returns 1, which
is what we need. hence*/

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
void Token_stream::putback(Token t){
    if (full)
        error("putback() into a full buffer");
    buffer=t;
    full=true;
}   

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

Token_stream ts;
double expression();

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
            }
        case '8':
            return t.value;
        default :
            error("Primary expected");
            return 0;
        
        
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
                val=expression();
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
