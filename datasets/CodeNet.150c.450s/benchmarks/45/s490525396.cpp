#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define PRINT(x) cout<<(x)<<endl
#define INF 1000000000000 // 10^12
#define MOD 1000000007 // 10^9+7
#define PB push_back
#define MP make_pair

ll modpow(ll m, ll n) {
    ll res = 1;
    while (n) {
        if (n & 1) res = res * m % MOD;
        m = m * m % MOD;
        n >>= 1;
    }
    return res;
}

int main() {
    ll m, n; cin >> m >> n;
    ll ans = modpow(m, n);
    PRINT(ans);
    return 0;
}
