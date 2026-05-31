// Exercises from the computation chapter
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//(2)
/*int main(){
    string c="";
    cout<< "Enter the string: "<<"\n";
    cin>>c;
    for(int i =0 ; i<c.size();++i){
        cout<< c[i]<<" ";
    }
}
*/

//(3)

int main(){
    vector<double> temps;
    for( double temp; cin>>temp;){
        temps.push_back(temp);
    }
    double median;
    ranges::sort(temps);
    if(temps.size()%2==0){
        median=(temps[(temps.size()/2)-1]+temps[(temps.size()/2)+1])/2;
        cout<<"The median is: "<< median;
    }
    else
        cout<<"The median is: "<< temps[(temps.size()+1)/2]<<"\n";

}
