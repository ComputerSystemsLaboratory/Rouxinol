#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifdef tabr
#include "library/debug.cpp"
#else
#define debug(...)
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        set<ll> dp;
        bool ans = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                for (ll e : dp) {
                    a[i] = min(a[i], a[i] ^ e);
                }
                set<ll> ndp;
                for (ll e : dp) {
                    ndp.emplace(min(e, e ^ a[i]));
                }
                dp = ndp;
                dp.emplace(a[i]);
            } else {
                for (ll e : dp) {
                    a[i] = min(a[i], a[i] ^ e);
                }
                if (a[i]) {
                    ans = true;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
