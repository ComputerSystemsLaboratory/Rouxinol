#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
bool fld[60][60];
int W, H;
void dfs(int x, int y){
    fld[y][x] = false;
    REP(i, -1, 2) REP(j, -1, 2){
        int nx = x + i, ny = y + j;
        if(nx < 0 || ny < 0 || W <= nx || H <= ny) continue;
        if(!fld[ny][nx]) continue;
        dfs(nx, ny);
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    while(cin >> W >> H && W){
        memset(fld, 0, sizeof(fld));
        rep(i, H) rep(j, W) cin >> fld[i][j];
        int cnt = 0;
        rep(i, H) rep(j, W) if(fld[i][j]){
            dfs(j, i);
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}