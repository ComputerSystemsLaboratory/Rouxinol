#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define vec vector

int dp[22][22];
int dx[4] = {1, -1, 0,  0};
int dy[4] = {0,  0, 1, -1};
int ans;
vec<string> a;

void solve(int p, int q)
{
    if (dp[p + 1][q + 1]) return;
    dp[p + 1][q + 1] = 1;
    if (a[p][q] != '#') {
        ans++;
    } else return;
    rep(i, 4) solve(p + dx[i], q + dy[i]);
}

int main(void)
{
    while(1) {
        int w, h;
        cin >> w >> h;
        if (w == 0) break;
        rep(i, h + 2) rep(j, w + 2) dp[i][j] = 0;
        rep(i, w + 2) {
            dp[0][i] = -1;
            dp[h + 1][i] = -1;
        }
        rep(i, h + 2) {
            dp[i][0] = -1;
            dp[i][w + 1] = -1;
        }
        a.clear();
        a.resize(h);
        pair<int, int> start;
        rep(i, h) {
            cin >> a[i];
            rep(j, w) if (a[i][j] == '@') start = make_pair(i, j);
        }
        //dp[start.first + 1][start.second + 1] = 1;
        ans = 0;
        solve(start.first, start.second);
        cout << ans << endl;
    }
    return 0;
}