#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

typedef long long ll;

int main() {
    int D;
    cin >> D;
    vector<int> c(26), t(D);
    rep(i, 26) cin >> c[i];
    vector<vector<int>> s(D, vector<int>(26)), last(D + 1, vector<int>(26, 0));
    rep(i, D) rep(j, 26) cin >> s[i][j];
    rep(i, D) cin >> t[i];
    ll p = 0;
    rep(d, D) {
        p += s[d][t[d] - 1];
        rep(i, 26) last[d + 1][i] = last[d][i];
        last[d + 1][t[d] - 1] = d + 1;
        rep(i, 26) {
            p -= c[i] * (d + 1 - last[d + 1][i]);
        }
        cout << p << "\n";
    }
}