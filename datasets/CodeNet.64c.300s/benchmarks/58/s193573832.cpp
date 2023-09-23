#include <bits/stdc++.h>

using namespace std;

char a[100][100];
int vis[110][110], m, n;
void dfs(int x, int y, char op)
{
    vis[x][y] = 1;
    int di[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for(int i = 0;i < 4;i++)
    {
        int tx = x + di[i][0];
        int ty = y + di[i][1];
        if(a[tx][ty] == op && tx < m && tx >= 0 && ty < n && ty >= 0 && !vis[tx][ty])
            dfs(tx, ty, op);
    }
}
int main()
{
     while(scanf("%d %d", &m, &n), m && n)
     {
         memset(vis, 0, sizeof(vis));
         int ans = 0;
         for(int i = 0;i < m;i++)
            scanf("%s", a[i]);
         for(int i = 0;i < m;i++)
            for(int j = 0;j < n;j++)
            {
                if(!vis[i][j])
                {
                    dfs(i, j, a[i][j]);
                    ans++;
                }
            }
        printf("%d\n", ans);
     }
    return 0;
}