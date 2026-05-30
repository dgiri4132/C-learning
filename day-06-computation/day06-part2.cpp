//Vector computations and endings
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int main(){
    vector<int> v={5,7,9,4,6,8};
    for (int i=0;i<v.size();++i){
        cout << v[i] << "\n";

    }
}*/


/*int main(){
    vector<int> v={5,7,4,6,8};
    for(int x:v)
        cout<< x <<'\n';
}
 The above for loop is called range which is usually used for easy calculations
*/
// you don't need to specify the length of a vector in advance

/*int main(){
    vector<double> temps;
    for (double temp;cin>>temp;)
        temps.push_back(temp);

    double sum =0;
    for(double x:temps)
        sum+=x;
    cout << "Average Temperature: "<< sum/temps.size()<<'\n';

    ranges::sort(temps);
    cout<<" Median Temperature: "<<temps[temps.size()/2]<<'\n';
}

int main(){
    vector<string> words;
    for (string temp; cin>>temp;)
        words.push_back(temp);
    cout<< "Number of words: " << words.size()<<'\n';
    ranges::sort(words);
    for (int i=0;i<words.size();++i){
        if(i==0 || words[i-1]!=words[i])
            cout<< words[i]<<'\n';}
            
}
*/            
/*The vector<string> also accepts ints and also
- ctrl + d for terminating and running program*/

/*int main(){
    vector<string> words;
    vector<string> checker={"Broccoli","Banana","Berries","Boat"};
    for (string temp; cin>>temp;){
        words.push_back(temp);
        if (temp==checker[0])
            cout<< "\n BLEEP!! "<<temp<<" is a disliked word";
        else if(temp==checker[1])
            cout<< "\n BLEEP!! "<<temp<<" is a disliked word";
        else if(temp==checker[2])
            cout<< "\n BLEEP!! "<<temp<<" is a disliked word";
        else if(temp==checker[3])
            cout<< "\n BLEEP!! "<<temp<<" is a disliked word";

    }
}*/
int main(){
    vector<string> disliked={"Broccoli","Spinach","Kale"};
    vector<string> words;
    vector<string> not_disliked;

    for(string temp; cin>>temp;){
        words.push_back(temp);
        int found=0;
        for (int i=0;i<disliked.size();++i){
            if (temp==disliked[i])
                found=1;
              
        }
        if (found)
            cout<<"BLEEP !!! "<< temp<<" is a disliked word.\n";
        else
            not_disliked.push_back(temp); 
    }
    cout<< " The good words are: ";
    for (int i=0;i<not_disliked.size();++i){
        cout<< not_disliked[i]<<" ";
    }
}