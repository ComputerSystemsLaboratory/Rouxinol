#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define erep(i,a,b) for(int i=a;i<=(int)(b);++i)
#define per(i,a,b) for(int i=(b);i>(a);--i)
#define eper(i,a,b) for(int i=((int)(a));i>=b;--i)
#define pb push_back
#define mp make_pair
#define INF (1<<28)-1
#define MOD 1000000007
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef pair<int,int> Pii;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a, b)*b;}

int h, w, n, sx, sy, d[1005][1005];
char g[1005][1005];

int bfs(int x, int y, int cnt) {
    queue<Pii> que;
    que.push(mp(x, y));
    rep(i, 0, h) rep(j, 0, w) d[i][j] = INF;
    d[x][y] = 0;
    int gx, gy;
    while (!que.empty()) {
        Pii p = que.front(); que.pop();
        if (g[p.first][p.second] == (char)('0'+cnt)) {
            gx = sx = p.first, gy = sy = p.second;
            break;
        }
        rep(i, 0, 4) {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w && g[nx][ny] != 'X' && d[nx][ny] == INF) {
                que.push(mp(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
    cin >> h >> w >> n;
    rep(i, 0, h) rep(j, 0, w) {
        cin >> g[i][j];
        if (g[i][j] == 'S') sx = i, sy = j;
    }
    int ans = 0;
    rep(i, 0, n) {
        ans += bfs(sx, sy, i+1);
    }
    cout << ans << endl;
    return 0;
}
