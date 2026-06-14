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
Now, we have to learn prioritization. Here, the lowest code has highest priority as in the level

we look at 11.5 now, it is a term followed by * so comes under term* primary rule
hence gets multiplied by 7 which is followed by addition of 45 as we would normally do

Writing a simple grammar is straightforward:
- Distinguish a rule from a token
- Put one rule after another
- Express alternative patterns
- Express a repeating patterin
- Recognize the grammar rule to start with

The examples in the book help understand how to structure the code 

Turning grammar into code
There are many ways but the one in the book is 
writing a function for each grammar rule and using our type Token to represent tokens.

we need four functions
get_token() -- to read characters -> uses cin
expression() -- deal with + and -  -> calls term and get_token()
term() -- deal with *, /, %        -> calls primary and get_token
primary() -- deal with numbers and parentheses -> calls expression() and get_token()


What usually happens is that each function build some kind of data structure and a sepatare step walks the tree and computes the actual numbers
but in the book, each function does its job and directly returns the number which makes it really easier
get_token() just returns the token for which the operation is to be done.
*/
