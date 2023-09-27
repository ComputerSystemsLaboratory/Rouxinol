#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

int w, h;
int c[51][51];
bool f[51][51];
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
bool contain(int y, int x){
   return (0 <= y && y < h && 0 <= x && x < w);
}

void dfs(int y, int x){
    f[y][x] = true;
    rep(i, 0, 8){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(!contain(ny, nx)) continue;
        if(f[ny][nx] || c[ny][nx] == 0) continue;
        dfs(ny, nx);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> w >> h, w, h){
        rep(i, 0, h){
            rep(j, 0, w){
                cin >> c[i][j];
                f[i][j] = false;
            }
        }
        int ans = 0;
        rep(i, 0, h){
            rep(j, 0, w){
                if(c[i][j] == 1 && f[i][j] == false){
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
