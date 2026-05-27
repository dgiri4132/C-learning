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

int main(){
    for( char c='a'; c<='z';++c){
        cout<< c<<'\t'<<int(c)<<'\n';
    }
    cout << "\n";
    cout <<'\n';
    for (char b='A';b<='Z';++b){
        cout << b<<'\t'<<int(b)<<'\n';
    }
}
