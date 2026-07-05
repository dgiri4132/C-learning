/*
Today we will be learning to address more syntax and handling more of these errors as well
*/
#include <iostream>
#include <string>
#include <cmath>

// Trying to correct errors today
#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

constexpr char number = '8';
constexpr char quit = 'q';
constexpr char print = ';';
constexpr string result = "= ";
constexpr string prompt = ">";
class Token{
    public:
    
    char kind;
    double value;
    Token (char k): kind{k}, value{0.0}{};
    Token (char k, double v): kind{k}, value{v}{};
};
class Token_stream{
    public:
    Token_stream(): full{false}, buffer{0} {}
    Token get();
    void putback(Token t);
    void ignore(char c);
    private:
        bool full=false;
        Token buffer=0;
};
class Variable{
    public:
    string name;
    double value;
};

void Token_stream :: ignore(char c){
    if (full && c==buffer.kind){
        full = false;
        return;
    }
    full = false;

    char ch = 0;
    while(cin >>ch)
        if (ch ==c)
            return;
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
        case '(': 
        case ')': 
        case '+': 
        case '-': 
        case '*': 
        case '/':
        case '%':
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


Token_stream ts;
double expression();
void clean_up_mess(){
    ts.ignore(print);
}
/*
Update in primary needed:
for negative numbers, we need to add the acceptance of '-' and '+' because some asshole will try to use
plus as well just to test.
*/
double primary(){
    Token t=ts.get();
    switch(t.kind){
        case '(':{
            double d = expression();
            t=ts.get();
            if(t.kind!=')')
                error(" ')' expected");
            return d;
        }
        case '8':
            return t.value;
        case '+':
            return primary();
        case '-':
            return -primary();
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
            case '%':
                {
                    double d = primary();
                    if (d==0)
                        error("cant modulo by zero");
                    left = fmod(left,d);
                    t=ts.get();
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

double define_name(string var, double val);

double declaration(){
    Token t =ts.get();
    if(t.kind != name)
        error("Name expected in declaration");
    
    Token t2 = ts.get();
    if(t2.kind!= '=')
        error("= missing in declaration of ", t.name);
    double d = expression();
    define_name(t.name, d);
    return d;
}


double statement(){
    Token t = ts.get();
    switch(t.kind){
        case "let":
            return declaration();
        default:
        ts.putback(t);
        return expression();
        }
}

vector <Variable> var_table;

bool is_declared(string var){
    for(const Variable& v: var_table)
        if( v.name == var)
            return true;
    return false;
}

double define_name(string var, double val){
    if (is_declared(var))
        error(var, " declared twice");
    var_table.push_back(Variable{var,val});
    return;
}

void calculate()
{
    while (cin){
       try{ cout << prompt;
        Token t = ts.get();
        while (t.kind == print)
            t = ts.get();
        if(t.kind == quit)
            return;
        ts.putback(t);
        cout << result << statement()<< '\n';
    }
    catch(exception& e){
        cerr << e.what() << '\n';
        clean_up_mess();
    }
}
}


double get_value(string s){
    for(const Variable& v: var_table){
        if(v.name == s)
            return v.value;
        error("trying to read undefined variable ",s);
    }
}

int main(){
    try{
        calculate();
        return 0;
    /*
    Here above there are a few things to consider before making changes
    The semicolon part when cases like 1+2;q are given take a time and 
    also call val again which calls primary in the end and there is no space for
    q in primary, it is not defined. so it results in an error . In the case of 
    1+2 q it stores the value but as q case is over all other cases, it gets discontinued
    even before printing everything. The while loop keeps consuming until the semicolon 
    thing ends*/
    }
    catch (exception &e){
        cerr << e.what()<<"\n";
        return 1;
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

/*
I was also kind of relearning how the putback thing works. So firstly we start taking input and there are cases for expressions
and cases for numbers. In the case of expression it returns the token as is. and in cases of numbers it putsback the input that .
Lets take the example of 12+3
here firstly the token 1 is consumed, finds out its a number and cin's it again,until we run out of numbers. When it comes to +, it consumes +,
finds out it is not /,* and then returns to expression( as after primary, we enter terms), and expression looks for the buffer, finds the one
and then uses it instead and then 3 is again used as the usual case.*/