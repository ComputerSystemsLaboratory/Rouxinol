#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

typedef long long ll;

int pow_mod(ll m, int n, int mod){
    ll x = 1;
    m = m % mod;
    while (n > 0) {
        if (n&1) {
            x = (x*m)%mod;
        }
        n >>= 1;
        m = (m*m)%mod;
    }
    return x;
}

int main(){
    int m,n;
    cin >> m >> n;
    printf("%d\n",pow_mod(m,n,1000000007));
    
    return 0;
}