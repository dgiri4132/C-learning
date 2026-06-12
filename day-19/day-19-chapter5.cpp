#include <iostream>
#include <string>
#include <cmath>
#include "std_lib_facilities.h"

using namespace std;
/*
int main(){
    cout<< "Please enter expression( we can handle +, -, * and /): ";
    cout << "add an x to end expression ( e.g., 1+2*3x)";
    int lval=0;
    int rval=0;
    cin >> lval;
    if(!cin)
        error(" No starting operand");
    for (char op;cin>>op;){
        if(op!='x')
            cin >> rval;
        if(!cin)
            error("No second operand.");
        switch(op){
            case '+':
                lval+=rval;
                break;
            case '-':
                lval-=rval;
                break;
            case '*':
                lval*=rval;
                break;
            case '/':
                lval/=rval;
                break;
            default:
                cout << "The result is: " << lval;
                return 0;
        }
    }
}*/
/*
Comment on how this program is running:
    the first value is taken in by lval. Then it is followed by char as usual which is read by the for loop.
    the if statement checks whether it is the end or not, if not the rval is taken in  which is followed by 
    the switch statement that checks what operand to use. After the operation all is done switch has a default 
    statement as op if not the operation signs, will have a value of and that value is lval.
    */

    // Now lets start today's practice

/* Concept of tokens and why they are used
    Here we can see that in the calculator problem, there is no precedance for anyone or anything.
    The problems with looking ahead are how do we search for a * or a / among digits, plusses, minuses, and 
    parantheses on several input lines?
    How do we remember where a * was?
    and How do we handle evaluation that's not strictly left-to-right(e.g., 1+2*3)?

    The concept is tokenization. first input characters are read and assembled into tokens,
    A toekn is a sequence of characters that represent something we consider a unit. The solution apparently is to 
    treat it as a (kind, value) pair. The kind tells us if a token is a number, an operator or a parenthesis. The value
    is numerical value only for a number else it is whatever.
    So we don't have a token defined as a type. So we escape that problem through user-defined types.
    
    
    We start by defining a class, here which is the user deined types we were talking about.

    class Token{
    public:
    char kind;
    double value;
    }
    A char can have value from -127 to 127.

    Token t;
    t.kind='+';
    Token t2;
    t2.kind = '8'; here 8 is numbers
    t2.value = 3.14;
    Token tt=t;
    if(tt.kind!= t.kind)
        error("impossible!");
    t=t2;
    cout<< t.value;

    A note that +, - don't need the value member.

    We can also have functions in the class to make it easy to initialize

    class Token{
    public:
        char kind;
        double value;
        Token (char k):kind{k}, value{0.0} {}
        Token (char k, double v) :kind{k}, value{v} {}
    };
    After that it can be initialized/ constructed as;

    Token t1{'+'}; what kind of token only
    Token t2{'8',11.5};

    Using Tokens
    To use tokens in a calculator you can make a function that reads the token from cin

    Token get_token();
    vector<Token> tok;
    int main()
    {
    while(cin){
    Token t=get_token()
    tok.push_back(t)
    }
    }
     So all the fuss is that Token is a type now, there will be get_token() function that 
    can read the input and a vector is made of tokens that you can use later which we will learn tommorow.
    
    */




