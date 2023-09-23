#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
 
char ma[105][105];
int vis[105][105];
int ans;int w,h;
 
int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};
 
void dfs(int x,int y,char ch)
{
    if(vis[x][y]) return ;
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx>=0&&xx<w&&yy>=0&&yy<h&&ma[xx][yy]==ch)
        dfs(xx,yy,ma[xx][yy]);
    }
}
 
 
int main()
{
 
    while(scanf("%d%d",&w,&h)&&w!=0)
    {
        memset(vis,0,sizeof(vis));
        ans=0;
        for(int i=0;i<w;i++)
            scanf("%s",&ma[i]);
 
        for(int i=0;i<w;i++)
        {
            for(int j=0;j<h;j++)
            {
                if(vis[i][j])continue;
                dfs(i,j,ma[i][j]);ans++;
            }
 
 
        }
        printf("%d\n",ans);
 
    }
    return 0;
}
