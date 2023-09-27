#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n); REP(i, n) cin >> a[i];
        string s; cin >> s;

        int ans = 0;
        vector<ll> dp;
        for (int i = n; i--;) {
            for (ll j : dp) a[i] = min(a[i], a[i]^j);
            if (a[i]) {
                if (s[i] == '0') dp.push_back(a[i]);
                else {
                    ans = 1;
                    break ;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
