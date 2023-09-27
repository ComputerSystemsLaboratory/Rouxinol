#include <iostream>
#define REP(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,a) REP(i,0,a)
using namespace std;

int w,h;
int c[51][51];

int dx[] = {1,1,0,-1,-1,-1,0,1};
int dy[] = {0,1,1,1,0,-1,-1,-1};

void dfs(int x,int y) {
    c[y][x] = 0;
    
    rep(i,8) {
        int nx = x+dx[i], ny = y+dy[i];
        if (0 <= nx && nx < w && 0 <= ny && ny < h && c[ny][nx] == 1) dfs(nx,ny);
    }
}
    
int main(void){
    while (1) {
        cin >> w >> h;
        if (w == 0 && h == 0) break;
        rep(y,h) rep(x,w) cin >> c[y][x];
        
        int ans = 0;        
        rep(y,h)
            rep(x,w)
                if (c[y][x] == 1) {
                    dfs(x,y);
                    ans++;
                }

        cout << ans << endl;
    }
    return 0;
}