#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int h, w;
char f[101][101];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
void dfs(int x, int y, char s){
    f[x][y] = '.';
    rep(i, 4){
        int nx = x + dx[i], ny = y + dy[i];
        if(0 <= nx && 0 <= ny && f[nx][ny] == s)
          dfs(nx, ny, s);
    }
    return;
}
int main(){
    while(scanf("%d %d", &h, &w) && h && w){
        rep(i, h + 1) rep(j, w + 1)
          f[i][j] = '.';
        rep(i, h) rep(j, w)
          cin >> f[i][j];
        int res = 0;
        rep(i, h) rep(j, w){
            if(f[i][j] != '.'){
                dfs(i, j, f[i][j]);
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}