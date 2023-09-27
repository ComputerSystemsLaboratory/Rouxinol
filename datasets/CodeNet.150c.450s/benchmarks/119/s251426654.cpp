#include <bits/stdc++.h>
using namespace std;
int c[50][50];
bool vis[50][50];
int W,H;
void dfs(int x,int y) {
    vis[y][x]=1;
    for(int dx=-1;dx<=1;dx++) {
        for(int dy=-1;dy<=1;dy++) {
            int nx=x+dx,ny=y+dy;
            if(0>nx||nx>=W||0>ny||ny>=H||c[ny][nx]==0||vis[ny][nx]) continue;
            dfs(nx,ny);
        }
    }
}
int main() {
    while(scanf("%d %d",&W,&H),W) {
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) scanf("%d",&c[i][j]);
        }
        memset(vis,0,sizeof(vis));
        int ans=0;
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) {
                if(c[i][j]==1&&!vis[i][j]) {
                    dfs(j,i);
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
}