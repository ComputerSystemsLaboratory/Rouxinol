#include <algorithm>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

pair<int, int> pd[10000];

void solve(int n, ll m) {
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> pd[i].second >> pd[i].first;
        ans += pd[i].first * pd[i].second;
    }
    sort(pd, pd + n,
         [](auto const &l, auto const &r) { return l.first > r.first; });

    for(int i = 0; i < n; i++) {
        ll x = min(ll(pd[i].second), m);
        ans -= pd[i].first * x;
        m -= x;
        if(x == 0)
            break;
    }
    cout << ans << endl;
}

int main() {
    while(true) {
        int n;
        ll m;
        cin >> n >> m;
        if(n == 0)
            break;
        solve(n, m);
    }
}
