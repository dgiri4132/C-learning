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
*/