#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define LL long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<LL> v(n);
    for (auto &it : v) cin >> it;
    vector<LL> basis(60, -1);
    string s;
    cin >> s;
    bool ok = true;

    auto InsertIntoBasis = [&basis](LL x) {
        for (int i=59;i>=0;--i) if (x & (1LL<<i)) {
            if (basis[i] == -1) {
                basis[i] = x;
                return;
            } else {
                x ^= basis[i];
            }
        }
    };

    auto CheckBasis = [&basis](LL x) {
        for (int i=59;i>=0;--i) if (x & (1LL<<i)) {
            if (basis[i] == -1) return false;
            x ^= basis[i];
        }
        return x == 0;
    };

    for (int i=n-1;i>=0;--i) {
        if (s[i] == '0') {
            InsertIntoBasis(v[i]);
        } else {
            ok &= CheckBasis(v[i]);
        }
    }
    cout << (ok ? "0\n" : "1\n");
}

int main() {
    FASTIO;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}