//Computation revision and exercises right now
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//(1)
/*int main(){
    int i=0;
    int first=0;
    int second=0;
    while(cin >> first >> second){
        cout << first << " "<< second;
    }
    return 0;
}
*/

//(2) (3)
/*int main(){
    int first=0;
    int second=0;
    while( cin >> first >> second){
        if (first> second){
            cout << "The smaller value is: "<< second;
            cout << "\nThe larger value is: "<< first;
        }
        else if(second > first){
            cout << "The smaller value is: "<<first;
            cout << "\nThe larger value is: "<< second;
        }
        else if(first==second)
            cout<< "Both number are equal";
        else
            cout << "Not a number";
    }
}*/

//(4)

/*int main(){
    double first=0;
    double second=0;
    while( cin >> first >> second){
        if (first> second){
            cout << "The smaller value is: "<< second;
            cout << "\nThe larger value is: "<< first;
        }
        else if(second > first){
            cout << "The smaller value is: "<<first;
            cout << "\nThe larger value is: "<< second;
        }
        else if(first==second)
            cout<< "Both number are equal";
        else
            cout << "Not a number";
    }
}
*/

//(5)
/*int main(){
    double first=0;
    double second=0;
    
    while( cin >> first >> second){
        double difference=first-second;
        if (difference<0)
            difference=difference*-1;
        if (first> second){
            cout << "The smaller value is: "<< second;
            cout << "\nThe larger value is: "<< first;
        }
        else if(second > first){
            cout << "The smaller value is: "<<first;
            cout << "\nThe larger value is: "<< second;
        }
        else if(first==second)
            cout<< "\nBoth number are equal";
        if(difference<0.01)
            cout<< "\nThe numbers are almost equal";
    }
}
    */

// (6)(7)(8)(9)

int main(){
    double first=0;
    double largest=0;
    double smallest=0;
    int i=0;
    string unit="";
    vector<string> acceptable={"cm","m","in","ft"};
    vector <double> conversion={0.01,1.0,0.0254,0.3048};
    vector <double> at_end;
    double converted_to_m=0.0;
    double sum=0;
    while( cin >> first>> unit){
        bool flag=false;
        for(int j=0;j< acceptable.size();++j){
            if (unit==acceptable[j]){
                converted_to_m=first*conversion[j];
                at_end.push_back(converted_to_m);
                flag=true;}

            if (i==0 && unit==acceptable[j]){
                largest=first*conversion[j];
                smallest=first*conversion[j];
            }
            else if (first*conversion[j]> largest && unit==acceptable[j]){
                largest = first*conversion[j];
                cout << largest << "The largest so far ";
                
            }
            else if(smallest > first*conversion[j] && unit==acceptable[j]){
                smallest=first*conversion[j];
                cout << smallest << "The smallest so far ";
                
            }
        }
        if (flag==false){
            cout<<"\n Wrong unit";
            converted_to_m=0;}
        else{
            sum+=converted_to_m;
            cout<<"\nThe new value entered is: "<< first;
            ++i;}


        }
        ranges::sort(at_end);
        for(int i=0;i<at_end.size();++i){
            cout<< at_end[i]<< " ";
        }
}


