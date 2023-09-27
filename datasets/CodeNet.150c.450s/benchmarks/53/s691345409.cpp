#include<iostream>
#include<map>
using namespace std;

map<long long, int> prime_factor(long long n){
    map<long long, int> ret;
    for(long long i=2; i*i<=n; i++){
        while(n%i==0){
            ret[i]++;
            n /= i;
        }
    }
    if(n!=1) ret[n] = 1;
    return ret;
}

int main(){
    long long N;
    bool one=0;
    cin >> N;
    cout << N << ":";
    for(auto p : prime_factor(N)){
        while(p.second--) cout << " " << p.first;
    }
    cout << endl;
    return 0;
}
