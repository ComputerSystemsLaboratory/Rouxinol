#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
int h, w, n, result;
char map[1005][1005];
bool vis[1005][1005];
int x[10], y[10];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
struct Node
{
    int x, y;
    int step;
};
void BFS(int sx, int sy, int target)
{
    queue <Node> que;

    Node s, t;
    s.x = sx;
    s.y = sy;
    s.step = 0;
    memset(vis, false, sizeof(vis));

    que.push(s);
    vis[sx][sy] = true;

    while(!que.empty())
    {
        s = que.front();
        que.pop();

        if(map[s.x][s.y] == target + '0')
        {
            result += s.step;
            break;
        }

        for(int i = 0; i < 4; i++)
        {
            int tx = s.x + dx[i];
            int ty = s.y + dy[i];

            if(tx >= 0 && tx < h && ty >= 0 && ty < w && !vis[tx][ty] && map[tx][ty] != 'X')
            {
                vis[tx][ty] = true;
                t.x = tx;
                t.y = ty;
                t.step = s.step + 1;
                que.push(t);
            }
        }
    }

    return;
}
int main(void)
{
    while(scanf("%d%d%d", &h, &w, &n) != EOF)
    {
        for(int i = 0; i < h; i++)
            scanf("%s", map[i]);

        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
            {
                if(map[i][j] == 'S')
                {
                    x[0] = i;
                    y[0] = j;
                }
                else if(map[i][j] >= '0' && map[i][j] <= '9')
                {
                    x[map[i][j] - '0'] = i;
                    y[map[i][j] - '0'] = j;
                }
            }

        result = 0;

        for(int i = 0; i < 9; i++)
        {
            BFS(x[i], y[i], i + 1);
        }

        printf("%d\n", result);
    }

	return 0;
}

