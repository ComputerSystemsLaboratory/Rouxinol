#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

static const int prime_n = 10000;
static bool sieve[prime_n];

vector<int> primes;

void init_primes(){
    sieve[0] = true;
    sieve[1] = true;
    for(int i = 2; i < prime_n; i++){
        if(!sieve[i]){
            for(int j = i*i; j < prime_n; j+=i){
                sieve[j] = true;
            }
        }
    }
    primes = vector<int>();
    for(int i = 2; i < prime_n; i++){
        if(!sieve[i]){
            primes.push_back(i);
        }
    }
}

bool isPrime(int n){
    if(n < prime_n){
        return !sieve[n];
    }
    for(auto p: primes){
        if(n%p == 0){
            return false;
        }
    }
    return true;
}

int main(){
    init_primes();
    int n;
    cin >> n;
    int c = 0;
    int x = 0;
    while(n--){
        cin >> x;
        if(isPrime(x)){
            ++c;
        }
    }
    cout << c << '\n';
    return 0;
}