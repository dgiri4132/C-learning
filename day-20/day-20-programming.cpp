/*
Things to remember from yesterday
    Due to difficulty to make a priority basis on the operator, we started tokenization. It helped us separate the inputs into various tokens 
    and call the function within classes for input and ordering, hopefully by the time I finish the chapter
    */
#include <iostream>
#include <string>
#include <cmath>
#include "std_lib_facilities.h"

using namespace std;

class Token{
    public:
    char kind;
    double value;
    Token (char k): kind{k}, value{0.0}{};
    Token (char k, double v): kind {k}, value{v} {};

};
/*
We can now construct things such as 
Token t1 {'+'};
Token t2 {'number', 11.5}
 */
Token get_token();
vector<Token> tok;

int main () {
    while(cin){
        Token t = get_token();
        tok.push_back(t);

    }
}

/*

for (int i = 0; i < tok.size(); ++i){
    if(tok[i].kind=='*'){
    double d = tok[i-1].value* tok[i+1].value;

    }
    after that line you fidn a logic error that it only works for 1+2*3 
    and not for every other operation
}*/

/*
Try this

couldn't work out!

Below are some of the questions that have been answered and not answered still
- finding individual parts(Tokenization)
- What terminates an input expression? A newline, of course! ( BE sus of "of course")
- How do we represent 45+5/7 as data, need to convert 4 and 5 into 4*10+5
- How do we make sure that 45+5/7 is evaluated as 45+(5/7) and not as (45+5)/7
- can we have variabes? 

Know it- Build simple version early and then add feature accordingly so that you can not make it more difficult for
you to finish the project.

*/

/*5.4.1
Grammars
the input 45+11.5/7 the tokens should look like
45
+
11.5
/
7

For the priority, we start by writing simple expression of grammar

First we write a grammar defining the syntax of our input and then write a program that implements the rueles of that 
grammar

Expression:
    Term
    Expression "+" Term
    Expression "-" Term

    Term:
    Primary
    Term "*" Primary
    Term "/" Primary
    Term "%" Primary

    Primary:
        Number
        "("Expression")"
    Number:
        floating-point-literal
    These are the simple set of rules.
    Continuing tommorow do faster please.
    
*/