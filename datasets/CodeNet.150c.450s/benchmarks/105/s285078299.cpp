#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        REP(i, n) cin >> a[i];

        string s;
        cin >> s;

        int ans = 0;
        vector<ll> dp;
        for (int i = n - 1; i >= 0; i--) {
            for (ll p : dp)
                a[i] = min(a[i], a[i]^p);
            if (a[i]) {
                if (s[i] == '0') dp.push_back(a[i]);
                else ans = 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}