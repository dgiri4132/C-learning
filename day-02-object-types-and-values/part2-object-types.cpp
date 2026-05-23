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
