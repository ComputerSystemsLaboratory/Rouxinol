#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int mod = 1000000007;

ll gcdx(ll m, ll n){
    if(n == 0){
        return 1;
    } else if(n % 2 == 0){
        ll res = gcdx(m, n/2);
        return res * res % mod;
    } else {
        ll res = gcdx(m, n-1);
        return m * res % mod;
    }
}

int main() {
    ll m, n; cin >> m >> n;
    cout << gcdx(m, n) << endl;

    return 0;
}
