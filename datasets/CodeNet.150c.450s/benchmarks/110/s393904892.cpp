#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
typedef pair<int, int> Pair;
bool use[1001][1001];
char maze[1001][1001];
Pair p[10];
int m, n;
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};
int d[1001][1001];
int bfs(int deep, int x, int y)
{
    int res = 0;
    queue<Pair> q;
    q.push(Pair(x, y));
    d[x][y] = 0;
    while(q.size())
    {
        int i;
        Pair now = q.front();
        q.pop();
        if(now.first == p[deep].first && now.second == p[deep].second)
            break;
        for(i = 0;i < 4;i++)
        {
            int nx, ny;
            nx = now.first + dx[i];
            ny = now.second + dy[i];
            if(nx >= 0 && nx < m && ny >= 0 && ny < n && maze[nx][ny] != 'X' && !use[nx][ny])
            {
                use[nx][ny] = true;
                q.push(Pair(nx, ny));
                d[nx][ny] = d[now.first][now.second] + 1;
            }
        }
    }
    return d[p[deep].first][p[deep].second];
}
int main()
{
    int k;
    while(scanf("%d%d%d", &m, &n, &k) != EOF)
    {
        int i, j;
        for(i = 0; i < m; i++)
            scanf("%s", maze[i]);
        int x, y;
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                if(isdigit(maze[i][j]))
                {
                    p[maze[i][j] - '0'].first = i;
                    p[maze[i][j] - '0'].second = j;
                }
                else if(maze[i][j] == 'S')
                {
                    x = i;
                    y = j;
                }
        int ans = 0;
        for(i = 1; i <= k; i++)
        {
            memset(use, false, sizeof(use));
            ans += bfs(i, x, y);
            x = p[i].first;
            y = p[i].second;
        }
        printf("%d\n", ans);
    }
    return 0;
}