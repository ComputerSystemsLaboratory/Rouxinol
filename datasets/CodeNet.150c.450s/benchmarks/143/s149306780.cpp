#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, x;
    cin >> n;
    vector<ll> cnt(100001,0);
    ll res = 0;
    for (ll i=0; i<n; i++) {
        cin >> x;
        res+=x;
        cnt[x]++;
    }
    ll q, b, c;
    cin >> q;
    for (ll i=0; i<q; i++) {
        cin >> b >> c;
        res-=(b*cnt[b]);
        res+=(c*cnt[b]);
        cnt[c]+=cnt[b];
        cnt[b] = 0;
        cout << res << endl;
    }
    return 0;
}