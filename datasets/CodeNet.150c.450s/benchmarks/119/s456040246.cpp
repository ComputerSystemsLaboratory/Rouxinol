#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))

const int M = 55;
int w,h;
int f[M][M];
int dx[] = {1,1,1,0,0,-1,-1,-1};
int dy[] = {0,1,-1,1,-1,0,1,-1};

void dfs(int x, int y) {
    if(x == w || y == h) return ;
    f[y][x] = 0;
    rep(i,8) {
        int nx = x+dx[i], ny = y+dy[i];
        if(f[ny][nx] == 1)
            dfs(nx, ny);
    }
}

int main() {
    while(cin>>w>>h && w) {
        ZERO(f);
        rep(i,h) rep(j,w) cin >> f[i][j];

        int ans = 0;
        rep(i,h) rep(j,w) {
            if(f[i][j] == 0) continue;
            dfs(j,i);
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}