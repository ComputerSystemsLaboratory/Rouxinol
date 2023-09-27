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

int H, W;
vector<string> s;

bool inside(int x, int y) {
    return 0 <= x && x < H && 0 <= y && y < W;
}

int bfs(int sx, int sy) {
    queue<P> que;
    que.push(P(sx, sy));
    vector<vector<int>> d(H, vector<int>(W, INF));
    d[sx][sy] = 0;
    int ans = 0;

    while (!que.empty()) {
        P p = que.front(); que.pop();
        ans++;

        rep(k, 4) {
            int nx = p.first + dx[k], ny = p.second + dy[k];

            if (inside(nx, ny) && s[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return ans;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while (cin >> W >> H, W) {
        s.clear();
        s.resize(H);
        int sx, sy;
        rep(i, H) {
            cin >> s[i];
            rep(j, W) {
                if (s[i][j] == '@') {
                    sx = i, sy = j;
                }
            }
        }
        cout << bfs(sx, sy) << endl;
    }

}