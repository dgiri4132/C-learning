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

int main(){
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