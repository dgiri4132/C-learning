// Continuation of the first file
#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>
using namespace std;
// Two consecutive words repetition
// and upper/lower case matter as well
int main(){
    /*
    int count=0;
    string previous;
    string current;
    while ( cin>>current){
        if (previous == current){
            ++count; // without bracket, only first line is for if clause
            cout << "repeated word: "<< current<<" Total number of repated words: "<< count<< "\n";
        }
        previous=current;
    }*/
   string first_name;
   cout << "Enter the name of the person you want to write to:  ";
   cin >> first_name;
   cout << "\nDear "<< first_name<<",\n";
   cout << " How are you? I am fine. I miss you.";
   string friend_name;
   cout << "\n Name your another friend: " ;
   cin >> friend_name;
   cout << "\n Have you seen "<< friend_name<< " lately?";
   int age;
   cout << "\n Enter the age: ";
   cin >> age;
   if (age <=0 || age >=110)
        throw runtime_error("\nYou're kidding!");
   cout << "\n I hear you just had a birthday and you are "<< age<< " years old.";
   if (age<12)
        cout << " \nNext year you'll be "<< age+1<<" .";
   if (age==17)
        cout<< "\n Next year you will be able to vote.";
   if (age>70)
        cout<< "\n Are you retired ? ";
}
// Names can start with a letter and contain only letters, digits , and underscores
/* Review Questions
1- It is a command
2- <<
3- we can use =, (), {}
4- cout << "Enter a number: "; cin>> number;
5- endlines, it ends line
6- Whitespace
7- any non-numerical character.
8- cout << "Hello "<< first_name << "\n";
9- a variable is a named memory that holds a value of a given type.
10- As is value is literal.
11- same amount as there are variables.
12- strutred command that gives a name and a type to an object.
13- bytes and bits for char specific, string it depends
14-bytes and bits
15- = is used when assigning a value and == is used when comparing values
16- definition is a decleration that sets aside memory for an object
17- initialization is initial setiing of the value of the variable while
     assignment can change the initial value.
18- string concatenation is " adding" string and you do it with + operator.
19- All given in the book, the unique one would be mode.
20- c1,d1,a2,b3,a3,c3
21- int, string, bool, char, double
22- short and also using underscore for word separation
23- being safe for initialization, should prevent some errors
24- round down only, accuracy lost, narrowing
25- information lost should be the line to draw.
26- use {} while initializing
27- automatic initialization
*/