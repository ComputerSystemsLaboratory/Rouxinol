#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int n,m;//n--rows m--cols
const int maxn=105;
char g[maxn][maxn];
bool vis[maxn][maxn];
int dis[4][2]={{1,0},{-1,0},{0,-1},{0,1}};

void dfs(int x,int y,char c)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int xx=x+dis[i][0],yy=y+dis[i][1];
        if(xx>=0&&xx<n&&yy>=0&&yy<m&&g[xx][yy]==c&&!vis[xx][yy])
        {
            dfs(xx,yy,c);
        }
    }

}


int main()
{
    while(~scanf("%d%d",&n,&m)&&(n+m))
    {
        memset(vis,0,sizeof vis);
        for(int i=0;i<n;i++)
        {
            getchar();
            for(int j=0;j<m;j++)
            {
                scanf("%c",&g[i][j]);
            }
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j])
                {
                    dfs(i,j,g[i][j]);
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }


    return 0;
}