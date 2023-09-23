#include <cstdio>
#include <cstring>
using namespace std;
int W,H,ans,vis[105][105];
char mp[105][105];
const int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
bool check(int x,int y,char c){
    if(vis[x][y])return 0;
    if(mp[x][y]==c&&x&&y&&x<=H&&y<=W)return 1;
    return 0;
}
void dfs(int x,int y,char c){
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        if(check(x+dx[i],y+dy[i],c))dfs(x+dx[i],y+dy[i],c);
    }return;
}
int main(){
    while(~scanf("%d%d",&H,&W),W+H){
        ans=0; memset(vis,0,sizeof(vis));
        for(int i=1;i<=H;i++)scanf("%s",mp[i]+1);
        for(int i=1;i<=H;i++)for(int j=1;j<=W;j++)
        if(!vis[i][j]){ans++;dfs(i,j,mp[i][j]);}
        printf("%d\n",ans);
    }return 0;
}