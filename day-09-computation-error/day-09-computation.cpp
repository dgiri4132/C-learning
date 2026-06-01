// Computation final day and error start

#include <iostream>
#include <string>
#include<cmath>

using namespace std;
//(9)
/*int main(){
    int target=1000;
    int target_2=1000000;
    int target_3=1000000000;
    int square=0;
    int square_2=0;
    int square_3=0;
    long long grains_on_square=1;
    long long grains_on_square_2=1;
    long long grains_on_square_3=1;
    long long total=0;
    long long total_2=0;
    long long total_3=0;
    
    while (total<target){
        ++square;
        total+=grains_on_square;
        cout<< " Current squares: "<<square<<" Current total: "<< total<< " Current grains: "<< grains_on_square<<"\n";
        grains_on_square*=2;
        
    }
    cout<< " The square required for "<< target<< " is "<< square<< "\n";

    while (total_2<target_2){
        ++square_2;
        total_2+=grains_on_square_2;
        cout<< " Current squares: "<<square_2<<" Current total: "<< total_2<< " Current grains: "<< grains_on_square_2<<"\n";

        grains_on_square_2*=2;
        
    }
    cout<< " The square required for "<< target_2<< " is "<< square_2<< "\n";

    while (total_3<target_3){
        ++square_3;
        total_3+=grains_on_square_3;
        cout<< " Current squares: "<<square_3<<" Current total: "<< total_3<< " Current grains: "<< grains_on_square_3<<"\n";
        grains_on_square_3*=2;
        
    }
    cout<< " The square required for "<< target_3<< " is "<< square_3<< "\n";

}
    */
// (10) for integers, you can have a limit of 2^31 - 1.
//(10) for double it is 1.8*10^308.


//(11)

//(12)
/*bool isPrime(int n){
    if (n<2)    return false;
    for(int i = 2;i<=sqrt(n);++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> prime;
    for(int i =1; i < 101; ++i){
        if(isPrime(i)==true){
            prime.push_back(i);
        }
    }
    for(int i = 0; i< prime.size();++i){
        cout<< prime[i]<<"\n";
    }
}
*/

//(13)

int main(){
    vector<bool> is_prime(101,true);
    vector<int> primes;
    int i=2;
    while(i<sqrt(101)){
        if( is_prime[i]!=false){
            for(int j = i;j<101;++j){
                if( j%i==0){
                    is_prime[j]=false;
                }
            }
        }
        ++i;
    }
    for( int i=0;i<is_prime.size();++i){
        if (is_prime[i]==true){
            primes.push_back(i);
        }

    }
    
}