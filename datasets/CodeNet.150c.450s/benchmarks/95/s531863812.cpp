#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n;
vector<string> s;
void solve() {
    int l = 0, r = 0;
    int ans = 0;
    int next = 1;
    rep(i, n) {
        if (s[i] == "lu") l = 1;
        if (s[i] == "ld") l = 0;
        if (s[i] == "ru") r = 1;
        if (s[i] == "rd") r = 0;
        if (next == l && l == r) {
            next ^= 1;
            ans++;
        }
    }
    cout << ans << endl;
}
int main() {
    while (cin >> n, n) {
        s.resize(n);
        rep(i, n) cin >> s[i];
        solve();
    }

    return 0;
}