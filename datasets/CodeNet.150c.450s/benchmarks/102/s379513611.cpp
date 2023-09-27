#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int W, H;
string s[30];
using P = pair<int, int>;
void solve() {
    P init;
    rep(i, H) rep(j, W) if (s[i][j] == '@') init = P(i, j);
    set<P> visited;
    queue<P> que;
    que.push(init);
    visited.insert(init);

    while (que.size()) {
        auto p = que.front();
        que.pop();
        rep(k, 4) {
            auto np = p;
            np.first += dy[k];
            np.second += dx[k];
            if (np.first < 0 || np.second < 0) continue;
            if (H <= np.first || W <= np.second) continue;
            if (visited.count(np)) continue;
            if (s[np.first][np.second] == '#') continue;

            que.push(np);
            visited.insert(np);
        }
    }
    cout << visited.size() << endl;
}
int main() {
    while (cin >> W >> H, W) {
        rep(i, H) cin >> s[i];
        solve();
    }

    return 0;
}