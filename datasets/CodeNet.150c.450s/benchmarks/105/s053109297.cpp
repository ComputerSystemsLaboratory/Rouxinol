#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

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
            for (auto j : dp) a[i] = min(a[i], a[i]^j);
            if (s[i] == '0') {
                if (a[i]) dp.push_back(a[i]);
            } else if (a[i]) {
                ans = 1;
                break ;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}