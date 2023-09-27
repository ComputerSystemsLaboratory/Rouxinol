#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
char maps[150][150];
int xiang[4][2]={ {0,1},{0,-1},{1,0},{-1,0} };
int n,m;
void dfs(int x,int y,char c)
{
    int i,tx,ty;
    for(i=0;i<4;i++)
    {
        tx=x+xiang[i][0];
        ty=y+xiang[i][1];
        if(tx<0 || ty<0 || tx>=n || ty>=m || maps[tx][ty]!=c)
            continue;
        maps[tx][ty]='.';
        dfs(tx,ty,c);
    }
}
int main()
{
    while(scanf("%d%d",&n,&m) && n && m)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%s",maps[i]);
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(maps[i][j]!='.')
                {
                    ans++;
                    dfs(i,j,maps[i][j]);
                    maps[i][j]='.';
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

