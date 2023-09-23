#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1000000007;

ll mlpow(ll x, ll p) { //x^p(long long)%MOD
    ll tmp = 1;
    if(p == 0) return 1;
    while(p != 0) {
        if(p & 1) tmp = tmp*x % MOD;
        x = x*x % MOD;
        p = p >> 1;
    }
    return tmp;
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << mlpow(m,n) << endl;

    return 0;
}

