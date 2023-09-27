#include <bits/stdc++.h>
using namespace std;
char tile[20][21];
bool vis[20][20];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int W,H;
int dfs(int x,int y) {
    int sum=1;
    vis[y][x]=1;
    for(int i=0;i<4;i++) {
        int nx=x+dx[i],ny=y+dy[i];
        if(0>nx||nx>=W||0>ny||ny>=H||tile[ny][nx]=='#'||vis[ny][nx]) continue;
        sum+=dfs(nx,ny);
    }
    return sum;
}
int main() {
    while(scanf("%d %d",&W,&H),W) {
        for(int i=0;i<H;i++) scanf("%s",tile[i]);
        int sx,sy;
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) if(tile[i][j]=='@') {sx=j;sy=i;tile[i][j]='.';}
        }
        memset(vis,0,sizeof(vis));
        printf("%d\n",dfs(sx,sy));
    }
}