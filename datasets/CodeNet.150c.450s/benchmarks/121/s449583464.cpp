#include <bits/stdc++.h>  

using namespace std;

//#define int long long
#define FOR(i, j, k) for(int i = j; i < (int)k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define INF (1 << 30)

typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> Pi;

const int MOD = 1e9 + 7;
const int dy[] = {0, 0, 1, -1};
const int dx[] = {1, -1, 0, 0};

template <class T> void chmin(T& a, const T& b) { a = min(a, b); }
template <class T> void chmax(T& a, const T& b) { a = max(a, b); }

string s[100];
bool went[100][100];
int h, w, cnt;

void dfs(int y, int x, char t) {
    if(went[y][x]) return;
    went[y][x] = true;
    ++cnt;
    rep(i, 4) {
        int nx = x + dx[i], ny = y + dy[i];
        if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
        if(s[ny][nx] == t) {
            dfs(ny, nx, t);
        }
    }
}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while((cin >> h >> w), h | w) {
        rep(i, h) cin >> s[i];
        int res = 0;
        cnt = 0;
        memset(went, 0, sizeof(went));
        rep(i, h) rep(j, w) {
            cnt = 0;
            dfs(i, j, s[i][j]);
            if(cnt > 0) ++res;
        }
        cout << res << endl;
    }
    return 0;
}