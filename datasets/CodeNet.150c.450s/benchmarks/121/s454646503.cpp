#include <iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
#include<algorithm>
#include<queue>
#include<list>
#include<vector>
#include<stdlib.h>
#include<stack>
#define oo 0x3f3f3f3f

using namespace std;
int n, m;
char str[105][105];
int ans[4][2]={{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int vis[105][105];
void dfs(int x, int y, char c)
{
    if(str[x][y]!=c)
        return ;
    vis[x][y]=1;
    for(int i=0; i<8; i++)
    {
        int nx=x+ans[i][0];
        int ny=y+ans[i][1];
        if(nx>=0&&nx<n&&ny>=0&&ny<m&&str[nx][ny]==c&&!vis[nx][ny])
        {
            vis[nx][ny]=1;
            dfs(nx, ny, c);
        }
    }
    return ;
}
int main()
{
    while(scanf("%d%d", &n, &m), n+m)
    {
       for(int i=0; i<n; i++)
        scanf("%s", str[i]);
        memset(vis, 0, sizeof(vis));
        int sum=0;
       for(int i=0; i<n; i++)
       {
           for(int j=0; j<m; j++)
           {
               if(!vis[i][j])
               {
                   dfs(i, j, str[i][j]);
                   sum++;
               }
           }
       }
       printf("%d\n", sum);
    }
    return 0;
}