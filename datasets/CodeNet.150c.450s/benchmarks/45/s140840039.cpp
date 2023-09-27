// Power
// 所要時間 分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

const int mod = 1e9 + 7;

ll mod_pow(ll x, ll n){
    ll ret = 1;
    while(n > 0){
        if(n & 1){
            ret *= x;
            ret %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return ret;
}

int main() {

    ll m, n;
    cin >> m >> n;

    cout << mod_pow(m, n) << endl;

    return 0;
}
