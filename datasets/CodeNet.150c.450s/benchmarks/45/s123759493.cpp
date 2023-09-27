#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod_pow(ll x, ll n, ll mod) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = (res * x) % mod; //ビット演算(最下位ビットが1のとき)
        x = (x * x) % mod;
        n >>= 1; //右シフト(n = n >> 1)
    }
    return res;
}

int main() {
        int m, n; cin >> m >> n;
        
        ll ret;
        ret = mod_pow(m,n,1000000007);
        cout << ret << endl;
        return 0;
}