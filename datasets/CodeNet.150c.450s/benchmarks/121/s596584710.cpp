#include<cstdio>
#include<cstring>
const int maxs=105;
int n,m;
char map[maxs][maxs];
int vis[maxs][maxs];
int xx[4]={1,0,0,-1};
int yy[4]={0,1,-1,0};
void dfs(int x,int y,char c)
{
    for(int i=0;i<4;i++)
    {
        int a=x+xx[i];
        int b=y+yy[i];
        if(a>=0&&a<n&&b>=0&&b<m&&!vis[a][b]&&map[a][b]==c)
        {
            vis[a][b]=1;
            dfs(a,b,c);
        }
    }
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF&&n!=0)
    {
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        scanf("%s",map[i]);
        int ans=0;

        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {
                if(!vis[i][j])
                {
                    ans++;
                    vis[i][j]=1;
                    dfs(i,j,map[i][j]);

                }
            }
        }



        printf("%d\n",ans);
    }
}