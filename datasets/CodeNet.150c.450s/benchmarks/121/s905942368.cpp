#include <iostream>
#include <cstdio>
using namespace std;
const int MAX=110;
char map[MAX][MAX];
int n,m;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
void dfs(int x,int y,char ch)
{
    map[x][y]='+';
    for(int i=0;i<4;++i)
    {
        int tx=x+fx[i];
        int ty=y+fy[i];
        if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&map[tx][ty]==ch)
            dfs(tx,ty,ch);
    }
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;
        int ans=0;
        for(int i=1;i<=n;++i)
        {
            scanf("%s",map[i]+1);
        }
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                if(map[i][j]!='+')
                {
                    ans++;
                    dfs(i,j,map[i][j]);
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}