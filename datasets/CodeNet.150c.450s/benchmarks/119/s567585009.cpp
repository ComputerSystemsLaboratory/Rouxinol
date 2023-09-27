#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int w, h;
int c[51][51];
int island[51][51];
int ans;
int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

void dfs(int y, int x, int id) {
    island[y][x] = id;
    rep(i, 8) {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0 && nx<w && ny>=0 && ny<h &&
                c[ny][nx] == 1 && island[ny][nx] != id) {
            dfs(ny, nx, id);
        }
    }
}
    
int main(void){
    while(cin >> w >> h && w) {
        rep(y, h) rep(x, w) cin >> c[y][x];
        ans = 0;
        memset(island, -1, sizeof(island));
        rep(y, h) {
            rep(x, w) {
                if(c[y][x]==1 && island[y][x]==-1) {
                    dfs(y, x, ans);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}