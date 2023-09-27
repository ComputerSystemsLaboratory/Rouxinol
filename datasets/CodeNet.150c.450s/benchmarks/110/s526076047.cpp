#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

const int INF = 99999999;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

const int MAX_H = 1000;
int H, W;
string s[MAX_H];

bool inside(int x, int y) {
    return 0 <= x && x < H && 0 <= y && y < W;
}

int bfs(int sx, int sy, int gx, int gy) {
    queue<P> que;
    que.push(P(sx, sy));
    vector<vector<int>> d(H, vector<int>(W, INF));
    d[sx][sy] = 0;

    while (!que.empty()) {
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy)
             break;

        rep(k, 4) {
            int nx = p.first + dx[k], ny = p.second + dy[k];

            if (inside(nx, ny) && s[nx][ny] != 'X' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    cin >> H >> W >> N;
    N++;
    vector<int> x(N);
    vector<int> y(N);
    rep(i, H) {
        cin >> s[i];
        rep(j, W) {
            if (s[i][j] == 'S') s[i][j] = '0';

            if (isdigit(s[i][j])) {
                x[s[i][j] - '0'] = i;
                y[s[i][j] - '0'] = j;
            }
        }
    }

    int ans = 0;
    rep(i, N - 1) {
        ans += bfs(x[i], y[i], x[i + 1], y[i + 1]);
    }
    cout << ans << endl;

}