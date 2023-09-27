#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int H,W;
char mapdata[110][110];
void dfs(int y,int x){
    char tmp = mapdata[y][x];
    mapdata[y][x] = '.';
    rep(i,4){
        int ny = y+dy[i];
        int nx = x+dx[i];
        //if (nx < 0 || nx >= W || ny < 0 || ny >= H || c == mapdata[ny][nx]) continue;
        if(0 <= ny && ny < H && 0 <= nx && nx < W && tmp == mapdata[ny][nx]) dfs(ny,nx);
        //dfs(ny,nx);
    }
}
int main(){
    while(1){
        cin >> H >> W;
        if(H == 0 && W == 0) break;
        int ans = 0;
        rep(i,H) cin >> mapdata[i];
        rep(i,H){
            rep(j,W){
                /*rep(k,H) { 
                    rep(l,W) cout << mapdata[k][l];
                    cout << endl;
                }*/
                if(mapdata[i][j] != '.'){
                dfs(i,j);
                ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
