#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto& x : a)
            cin >> x;
        string s;
        cin >> s;

        vector<ll> basis(64, 0);
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            ll x = a[i];
            bool was = 0;
            for (int j = 0; j < 64; j++) {
                if (!((x >> j) & 1)) continue;
                if (!basis[j]) {
                    was = 1;
                    basis[j] = x;
                    break;
                }
                x ^= basis[j];
            }

            if (was && s[i] == '1') {
                ans = 1;
                break;
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}
