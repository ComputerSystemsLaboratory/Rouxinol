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

const int INF = 1e9;
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

int H, W;
int s[50][50];
int d[50][50];

bool inside(int x, int y) {
    return 0 <= x && x < H && 0 <= y && y < W;
}

int bfs(int sx = -1, int sy = -1, int gx = -1, int gy = -1) {
    queue<P> que;
    que.push(P(sx, sy));

    while (!que.empty()) {
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy)
             break;

        rep(k, 8) {
            int nx = p.first + dx[k], ny = p.second + dy[k];

            if (inside(nx, ny) && s[nx][ny] != 0 && d[nx][ny] == INF) {
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

    while (cin >> W >> H, W) {
        rep(i, H) {
            rep(j, W) {
                cin >> s[i][j];
                d[i][j] = INF;
            }
        }

        int ans = 0;
        rep(i, H) {
            rep(j, W) {
                if (d[i][j] == INF && s[i][j] == 1) {
                    bfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}