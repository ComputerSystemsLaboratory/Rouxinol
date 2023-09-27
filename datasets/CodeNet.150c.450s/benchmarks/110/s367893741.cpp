
#include <cstdio>
#include <queue>
#include <limits.h>
#include <cstring>
using namespace std;

typedef pair<int, int> P;
const int MAXN = 1010;
char map[MAXN][MAXN];
int n, m, t, sx, sy, ex, ey;
int d[MAXN][MAXN];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1} };
P a[15];

int bfs()
{
    queue<P> q;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            d[i][j] = INT_MAX;
        }
    }
    d[sx][sy] = 0;
    q.push(P(sx, sy));
    while(!q.empty())
    {
        P p = q.front();  q.pop();
        if(p.first == ex && p.second == ey)
            break;
        for(int i = 0; i < 4; i++)
        {
            int x = p.first + dir[i][0];
            int y = p.second + dir[i][1];
            if(x >= 0 && x < n && y >= 0 && y < m
               && 'X' != map[x][y] && INT_MAX == d[x][y])
               {
                   q.push(P(x, y));
                   d[x][y] = d[p.first][p.second] + 1;
               }
        }
    }
    return d[ex][ey];
}

int main()
{
    scanf("%d%d%d", &n, &m, &t);
    getchar();
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%c", &map[i][j]);
            if('S' == map[i][j])
            {
                a[0] = P(i, j);
            }
            else
            {
                if('.' != map[i][j] && 'X' != map[i][j])
                {
                    a[map[i][j] - '0'] = P(i, j);
                }
            }
        }
        getchar();
    }
    int ans = 0;
    for(int i = 1; i <= t; i++)
    {
        sx = a[i-1].first;
        sy = a[i-1].second;
        ex = a[i].first;
        ey = a[i].second;
        ans += bfs();
    }
    printf("%d\n", ans);
    return 0;
}