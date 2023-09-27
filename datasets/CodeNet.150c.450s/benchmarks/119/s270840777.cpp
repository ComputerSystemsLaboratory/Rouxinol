#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)

int c[200][200];
int vis[200][200];
int w,h;


void dfs(int ci, int cj){
    vis[ci][cj] = true;
    int di[] = {0,1,0,-1, 1,1,-1,-1};
    int dj[] = {1,0,-1,0, -1,1,-1,1};
    rep(d,8){
        int ni = ci+di[d];
        int nj = cj+dj[d];
        if(ni < 0 || nj < 0) continue;
        if(ni >= h || nj >= w) continue;
        if(vis[ni][nj]) continue;
        if(c[ni][nj]==0) continue;
        dfs(ni,nj);
    }
}

int main(){
    while(cin >> w >> h && w){
        rep(i,h)rep(j,w) cin >> c[i][j], vis[i][j] = 0;
        int ans = 0;
        rep(i,h)rep(j,w){
            if(vis[i][j]) continue;
            if(c[i][j] == 0) continue;
            dfs(i,j);
            ans++;
        }
        cout << ans << endl;
    }
}