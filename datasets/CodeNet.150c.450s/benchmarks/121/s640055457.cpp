#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>
using namespace std;
int n, m, vis[101][101], ans;
int dis[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
char ss[101][101], tmp;
struct xx
{
    int x, y;
}vv;
int check(int x, int y)
{
    if((x >= 0 && x < n) && (y >= 0 && y < m)) return 1;
    return 0;
}
queue <xx> qq;
void bfs()
{
//    ans = 0;
    while(!qq.empty())
    {
        vv = qq.front();
        int x1 = vv.x;
        int y1 = vv.y;
        qq.pop();
        for(int i = 0; i < 4; i++)
        {
            int x0 = x1 + dis[i][0];
            int y0 = y1 + dis[i][1];
            if(check(x0, y0) && ss[x0][y0] != '0' && ss[x0][y0] == tmp)
            {
                ss[x0][y0] = '0';
                vv.x = x0;
                vv.y = y0;
                qq.push(vv);
            }
        }
    }
}
int main()
{
    while(~scanf("%d %d", &n, &m))
    {
        if(!n && !m) break;
        ans = 0;
        for(int i = 0; i < n; i++)
            scanf("%s", ss[i]);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(ss[i][j] != '0')
                {
                    tmp = ss[i][j];
                    vv.x = i;
                    vv.y = j;
                    qq.push(vv);
                    ss[i][j] = '0';
                    bfs();
                    ans++;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}