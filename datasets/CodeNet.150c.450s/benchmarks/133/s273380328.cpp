#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; (i) < ((int)(n)); ++(i))

int main() {
    int D;
    cin >> D;
    vector<int> c(26);
    vector<vector<int>> s(D, vector<int>(26));
    rep(i, 26) cin >> c[i];
    rep(i, D) {
        rep(j, 26) { cin >> s[i][j]; }
    }

    vector<int> t(D);
    rep(i, D) cin >> t[i];

    vector<int> ans(D);
    vector<ll> Cost(26, 0);
    rep(i, 26) Cost[i] = c[i];
    ll v = 0;
    rep(i, D) {
        vector<ll> X(26);
        // rep(j, 26) X[j] = s[i][j] + Cost[j];
        // auto it = max_element(X.begin(), X.end());
        int index = t[i] - 1;
        // ans[i] = index + 1;
        Cost[index] = 0;
        v += s[i][index];
        rep(j, 26) {
            v -= Cost[j];
            Cost[j] += c[j];
        }
        cout << v << endl;
    }
    // rep(i, D - 1) cout << ans[i] << " ";
    // cout << ans[D - 1] << endl;
}