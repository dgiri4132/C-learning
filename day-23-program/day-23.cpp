#include <iostream>
#include <string>
#include <cmath>
 using namespace std;
 //Expressions: third time lucky


/*
Restart

Tokens- Tokenizing means converting into meaningful bits
so the input string gets split into a sequence of TOken objects, each carrying a kind (what type it is) and a
value ( which is only meaningful for numbers.)

The Token class means that there is a type Token essentially where you can put the sign or sign with the value in which case the value
will be a number. 

The grammar helps make the expression make sense to the computer,
essentially making it know the "rules" of arithmetic

The order of priority is 
parenthesis -> number -> multiplication -> bla bla bla

So let's start the tracing one by one:
There are functions expression, term and primary
let's trace 1+2*3 in the function

double expression(){
    double left = term();
    Token t = get_token();
    while (true){
    switch(t.kind){
        case '+' :
            left+= term();
            t= get_token();
            break;
        
        case '-':
            left -= term();
            t= get_token();
            break;
        default:
            return left;
        }
        }
    }


    term():

    double term(){
    double left = primary();
    Token t = get_token();
    while (true){
    switch (t.kind){
    case '*':
        left*= primary();
        t= get_token();
        break;
    case '/': {
    double d = primary();
    if (d ==0)
        error("divide by zero")
    left /=d;
    t=get_token()
    break;
                }
    default:
        return left;

            }   
        }
    }



    primary():
    double primary(){
    Token t = get_token()
    switch (t.kind){
    case '(' : {
    double d = expression();
    t= get_token();
    if (t.kind != ')')
            error("')' expected");
            return d;
    }
    case 'number' :
        return t.value;
    default:
        error("primary expected");
        return 0;
    }
}
    Let's do the example (1+2)*3 as it does all single function including the 
    recursive call back into expression()

    So the main file calls expression->term->primary and primary reads the first token '('
    Now remember that primary calls expression again when you are in parenthesis to find out what's next in line
    so this loops happens again until primary reads 1. 
    remember that primary currently has t.kind whose value is 1
    the next token is '+' now initially it goes through term but no '+' there so it goes back to 
    expression where there is case for '+' and after which the term is called again and primary is called again as well
    which finally reads 2 and this two is returned to expression() at the end.
    so left = 1+2 as left+=term() now the next token is ')' and as the default value is left, it returns left.
    remember this left returned by expression is in the inner loop and is returned to the primary()
    the outer primary returns d=3 and the next token is * so primary is called again which returns 3
    It returns 3 which is multiplied by 3 in term() and returned to expression() outer and that returns 3 
    */