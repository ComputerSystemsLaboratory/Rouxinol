#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};
bool use[101][101];
char maze[101][101];
int n, m;
void dfs(char ch, int x, int y)
{
    if(use[x][y])
        return ;
    use[x][y] = true;
    int i, nx, ny;
    for(i = 0;i < 4;i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == ch)
            dfs(ch, nx, ny);
    }
}
int main()
{
    while(scanf("%d%d", &n, &m), n || m)
    {
        int i, j;
        for(i = 0;i < n;i++)
            scanf("%s", maze[i]);
        memset(use, false, sizeof(use));
        int ans = 0;
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < m;j++)
            {
                if(!use[i][j])
                {
                    ans ++;
                    dfs(maze[i][j], i, j);
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}