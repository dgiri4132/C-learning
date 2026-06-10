// Chapter 5 restart
/* Basic things of what to do while writing programs and how to tackle problems that 
we are trying to solve. 
stages of development
Analysis: Figure out what should be done and a description of your current understanding of that.
Design: Create an overall structure for the system, deciding which parts the implementation should have and how those parts should communicate.

Strategy:
- What is the problem to be solved? The first thing to do is to try to be specific about what you are trying to accomplish. This
    usually starts with something you want to accomplish
    -  Is the problem statement clear? For real problems, it never is. Even for a student exercise, it can be hard to be sufficiently precise and specific.
    -  Does the problem seem manageable, given the time, skills, and tools available? There is little point in starting a project that
    you can't complete

- Try breaking the program into manageableparts. Even the smallest program for solving a real problem is large ebough to be subdivided. As you learn, you will
know what library to use respectively and also ask people
    - Look for parts of a solution that can be separately described, you will get used to it as you go and do more stuff.

- Build a small, limited version of the program that solves a key part of the problem. When we start, we rarely know the problem well. The more you dig in, the 
more you get the feeling that you are wrong and that's okay.

- Build a full-scale solution, ideally, by using parts of the initial version. The ideal is to grow a program from working parts rather than 
writing all the code at once

Using pseudocode/scribbles
*/

#include <iostream>
#include <cmath>
#include <string>
#include "std_lib_facilities.h"

int main(){
    cout<< "Please enter expression( we can handle +, -, * and /): ";
    cout << "add an x to end expression ( e.g., 1+2*3x)";
    int lval=0;
    int rval=0;
    int res=0;
    cin >>lval;
    if(!cin)
        error("no first operand");
    for(char op; cin>>op;){
        if (op!='x')
            cin >> rval;
        if(!cin)
            error("No second operand");
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
                lval/rval;
                break;
            default:
                cout << "Result: " << lval << '\n';
                return 0;
        }
    }
}