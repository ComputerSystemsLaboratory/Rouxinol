#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void sieve(int x=100100){
    vector<bool> is_prime(x, true);
    is_prime[0] = is_prime[1] = false;
    
    for(int i=2; i<x; i++) if(is_prime[i]){
        primes.push_back(i);
        for(int j=2*i; j<x; j+=i)
            is_prime[j] = false;
    }
}
void factor(int x){
    cout << x << ":";
    
    bool is_prime = true;
    for(auto p: primes){
        while(x%p == 0){
            cout << " " << p;
            x /= p;
            is_prime = false;
        }
    }
    if(is_prime)
        cout << " " << x;
    cout << endl;
}

int main(){
    sieve();
    
    int N; cin >> N;
    factor(N);
    
    return 0;
}