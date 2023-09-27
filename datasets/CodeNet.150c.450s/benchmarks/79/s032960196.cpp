#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, r;
vector<int> p, c;
void ops(vector<int> &card, int p, int c) {
    auto tmp = card;
    p--;
    rep(i, c) {
        card[i] = tmp[i + p];
    }
    rep(i, p) {
        card[i + c] = tmp[i];
    }
}
void solve() {
    vector<int> card(n);
    rep(i, n) card[i] = n - i;
    rep(i, r) {
        ops(card, p[i], c[i]);
        // rep(i, n) cout << card[i] << " ";
        // cout << endl;
    }
    cout << card[0] << endl;
}
int main() {
    while (cin >> n >> r, n) {
        p.resize(r);
        c.resize(r);
        rep(i, r) cin >> p[i] >> c[i];
        solve();
    }

    return 0;
}