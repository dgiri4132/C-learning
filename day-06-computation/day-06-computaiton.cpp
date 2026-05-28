//Computation continued
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
// Try this
/*int main(){
    char c='a';
    while (c<='z'){
        cout<< c<<'\t'<< int(c)<<'\n';
        ++c;
    }
}*/
// Here c is character but they are also stored as numbers.
// ASCII value comes into play and the computer stores it as 97
// when it is printed, first comes symbol associated with ASCII value in the table
// Which is followed by the integer value of that ASCII value.

/* A sequence of statements delimited by curly braces is called a block statement or a compound statement.
A block is a kind of statement. The empty block is sometimes usefyl for expressing that nothing is to be done*/

// For statements
// For statements are like while statements but they have management of the control variable at the top.
int square(int x);
int main(){
    for( char c='a'; c<='z';++c){
        cout<< c<<'\t'<<int(c)<<'\n';
    }
    cout << "\n";
    cout <<'\n';
    for (char b='A';b<='Z';++b){
        cout << b<<'\t'<<int(b)<<'\n';
    }
    cout<< square(5);
}

/* Now we start functions
A function is a named sequence of statements. A function xan return
a result and the standard library has many useful functions. We mostly
write functions my ourselves as well.
Here if main is above a function, declare it before using it in main.
I have not declared it above in this example just so you know.

*/
 //Declare a function before using or defining
int square(int x){
    int sq=0;
    for(int i=0;i<x;++i){
        sq+=x;
    }
    return sq;
}

/* This section is about vectors. Vectors are one of the simples and 
arguably the most useful ways of storing data.
it is simply a sequence of elements that you can access by an index.
Vector not only store its elements but also stores its size.

Initializing vector
vector<int> v={5,6,7,8,9}

you can also initialize it wihout any specific element
vector<int> vi(6);
*/
