#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 500000;
const ll INF = 1LL<<60;
typedef struct Node { ll num; char c; } node;
ll cnt, n;
const ll N_MAX = 2000001;
const ll V_MAX = 10000;

signed main() {
    scanf("%lld", &n); 
    vector<ll> seq(n+1), B(n+1), C(V_MAX+1, 0);
    for( ll i = 1; i <= n; i++ ) cin >> seq.at(i);

    for(ll i = 1; i <= n; i++) {
        C.at(seq.at(i))++;
    }
    for(ll i = 1; i <= V_MAX; i++) {
        C.at(i) = C.at(i) + C.at(i-1);
    }
    for(ll j = 1; j <= n; j++) {
        B.at(C.at(seq.at(j))--) = seq.at(j);
    }

    for (ll j = 1; j < n; j++)
    { printf("%lld ", B.at(j)); }
    printf("%lld\n", B.at(n));

    return 0;
}


