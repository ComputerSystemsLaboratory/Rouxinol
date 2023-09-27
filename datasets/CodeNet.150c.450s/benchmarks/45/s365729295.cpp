#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll modpow(ll a, ll n, ll mod){
    ll res = 1;
    while(n > 0){
        if(n & 1) res = res * a % mod;
        a = a*a % mod;
        n >>= 1;
    }
    return res;
}

int main(){
    ll m, n;
    cin >> m >> n;
    cout << modpow(m, n, 1e9+7) << endl;
}
