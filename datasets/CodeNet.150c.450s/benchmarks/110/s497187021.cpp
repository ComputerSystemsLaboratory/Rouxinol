#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long lint;
const int INF = 1e7;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define trep(i, k, n) for (int i = (k); i < (int)(n); ++i)
typedef pair<int, int> P;
#define H 1001
#define W 1001
int h, w;
int sx, sy;
int gx, gy;
char c[H][W];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n;
vector<vector<int> > d(H, vector<int>(W, INF));
int bfs(void)
{
    rep(i, h)
    {
        rep(j, w)
        {
            d[i][j] = INF;
        }
    }
    queue<P> q;
    q.push(P(sy, sx));
    d[sy][sx] = 0;
    while (q.size())
    {
        P p = q.front();
        q.pop();
        rep(i, 4)
        {
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            if (0 <= ny && ny < h && 0 <= nx && nx < w && c[ny][nx] != 'X' && d[ny][nx] == INF)
            {
                q.push(P(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gy][gx];
}
int main()
{
    cin >> h >> w >> n;
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> c[i][j];
            if (c[i][j] == 'S')
            {
                sy = i;
                sx = j;
            }
        }
    }
    int ans = 0;
    trep(i, 1, n + 1)
    {
        rep(j, h)
        {
            rep(k, w)
            {
                if (c[j][k] == (i + '0'))
                {
                    gy = j;
                    gx = k;
                }
            }
        }
        ans += bfs();
        sy = gy;
        sx = gx;
    }
    cout << ans << endl;
    return 0;
}
