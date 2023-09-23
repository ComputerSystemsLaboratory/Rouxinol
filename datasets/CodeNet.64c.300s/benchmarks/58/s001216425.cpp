#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

#define inf 0x3f3f3f3f

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char ma[105][105];
int h, w, vis[105][105];

void dfs(int x, int y, char c)
{
    int i, xx, yy;

    for(i = 0; i < 4; i++)
    {
        xx = x + dx[i];
        yy = y + dy[i];
        
        if(xx >= 0 && xx < h && yy >= 0 && yy < w && !vis[xx][yy] && ma[xx][yy] == c)
        {
            vis[xx][yy] = 1;
            dfs(xx, yy, c);
        }
    }
}

int main()
{
    int i, j, ans;

    while(scanf("%d%d", &h, &w) && (h || w))
    {
        getchar();

        for(i = 0; i < h; i++) scanf("%s", ma[i]);
        memset(vis, 0, sizeof vis);
        ans = 0;

        for(i = 0; i < h; i++)
        {
            for(j = 0; j < w; j++)
            {
                if(!vis[i][j])
                {
                    ans++;
                    dfs(i, j, ma[i][j]);
                }
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}