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
    
The last rule is read " A number is a floating-point-literal"
The grammar is there to make the computer understand the conventions 
so if 2 is entered, this is how is it processed
2 is a floating-point-lietral which is a Number which is a Primary which is a Term which
is an Expression

2+3
let's see for plus and three
for plus it looks to the left side for expression and right side for term
The computer reads from left to right so, 2 already becomes an expression when it is '+''s turn so 
they check at right for a term

45+11.5*7
Here 45, 11.5 and 7 are already floating-point-numbers so we are good there
*/
