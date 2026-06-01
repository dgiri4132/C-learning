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

/*int main(){
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

}*/

//(4)

/*int main(){
    vector<double> dist;
    double first;
    double sum=0;
    double smallest=0,largest=0;
    int count=0;
    while (cin>>first){
        dist.push_back(first);
        sum+=first;
        count+=1;
    }
    for (int i=0;i<dist.size();++i){
        if (i==0)
            smallest=largest=dist[i];
        else if(dist[i]>largest)
            largest=dist[i];
        else if(dist[i]<smallest)
            smallest=dist[i];
    }
    double avg=sum/count;
    cout<<" The average is: "<< avg;
    cout<< "\n The largest is: "<< largest;
    cout<< " \n The smallest is: "<< smallest;
    cout<< " \n The sum is: "<< sum;
}
*/

/*int main(){
    int start=1;
    int end=100;
    int medium=start +((end-start)/2);
    cout<< "Please enter the number: \n";
    char yes_no=' ';
    while(start<end){
        cout<< "\n Is the number less than "<< medium<<" Y/N";
        cin>>yes_no;
        if (yes_no=='Y'){
            end=medium-1;
            medium=start+((end-start)/2);}
        else if(yes_no=='N'){
            start=medium+1;
            medium=start+((end-start)/2);
        }
    }
    cout<< "\n The number is: "<<start;
}*/

// (6)
 /*int main(){
    double a;
    double b;
    char c;
    cout<< " Enter two numbers followed by operator: \n";
    cin >> a >> c >> b;
    vector<char> operators= {'+','-','*','/'};
    if( c==operators[0])
        cout<< "The sum of "<< a <<" and "<< b <<" is: "<< a+b;
    if( c==operators[1])
        cout<< "The difference of "<< a <<" and "<< b <<" is: "<< a-b;
    if( c==operators[2])
    cout<< "The product of "<< a <<" and "<< b <<" is: "<< a*b;
    if( c==operators[3])
        cout<<a<< " divided by "<<b<<" is equal to: "<<a/b;
    
 }
*/
 //(7)

 /*int main(){
    string number=" ";
    vector<string> numbers={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<< "Please enter the number: \n";
    cin>> number;
    if (number==numbers[0])
        cout<< 0;
    if (number==numbers[1])
        cout<< 1;
    if (number==numbers[2])
        cout<< 2;
    if (number==numbers[3])
        cout<< 3;
    if (number==numbers[4])
        cout<< 4;
    if (number==numbers[5])
        cout<< 5;
    if (number==numbers[6])
        cout<< 6;
    if (number==numbers[7])
        cout<< 7;
    if (number==numbers[8])
        cout<< 8;
    if (number==numbers[9])
        cout<< 9;
    if (number=="0")
        cout<< numbers[0];
    if (number=="1")
        cout<< numbers[1];
    if (number=="2")
        cout<< numbers[2];
    if (number=="3")
        cout<< numbers[3];
    if (number=="4")
        cout<< numbers[4];
    if (number=="5")
        cout<< numbers[5];
    if (number=="6")
        cout<< numbers[6];
    if (number=="7")
        cout<< numbers[7];
    if (number=="8")
        cout<< numbers[8];
    if (number=="9")
        cout<< numbers[9];
    
 }*/

 //(8)
// I have made this to output digits or spelled out both
 int main(){
    string a;
    string b;
    char c;
    double m;
    double n;
    cout<< " Enter two numbers followed by operator: \n";
    cin >> a >> c >> b;
    vector<char> operators= {'+','-','*','/'};
    vector<string> numbers={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(a.size()==1){
        if(a[0]>='0' && a[0]<='9'){
            m= a[0]-'0';
        }
    }
    else
    {
        for(int i =0; i<numbers.size();++i){
            if (a==numbers[i]) m=i;
        }
    }


    if( b.size()==1){
        if( b[0]>='0' && b[0]<='9'){
            n=b[0]-'0';
        }
    }
    else
        {
        for (int j=0; j<numbers.size();++j){
            if (b==numbers[j])
            n=j;
        }
    }
    if( c==operators[0])
        cout<< "The sum of "<< a <<" and "<< b <<" is: "<< m+n;
    if( c==operators[1])
        cout<< "The difference of "<< a <<" and "<< b <<" is: "<< m-n;
    if( c==operators[2])
        cout<< "The product of "<< a <<" and "<< b <<" is: "<< m*n;
    if( c==operators[3])
        cout<<a<< " divided by "<<b<<" is equal to: "<<m/n;   
    
 }