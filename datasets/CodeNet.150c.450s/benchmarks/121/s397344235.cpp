#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100 + 5;
char mp[maxn][maxn];
int vis[maxn][maxn];
int h,w;

void dfs(int x,int y,int cnt)
{
    vis[x][y] = cnt;
    if(x - 1 >= 0 && !vis[x - 1][y] && mp[x - 1][y] == mp[x][y]) dfs(x - 1, y, cnt);
    if(x + 1 < h && !vis[x + 1][y] && mp[x + 1][y] == mp[x][y]) dfs(x + 1, y, cnt);
    if(y - 1 >= 0 && !vis[x][y - 1] && mp[x][y - 1] == mp[x][y]) dfs(x, y - 1, cnt);
    if(y + 1 < w && !vis[x][y + 1] && mp[x][y + 1] == mp[x][y]) dfs(x,y + 1, cnt);
}
int main()
{
    while (scanf("%d%d",&h,&w) != EOF) {//有可能是反的
        if(h == 0 && w == 0) break;
        getchar();
        for (int i = 0; i < h; i ++) {
            scanf("%s",mp[i]);
        }
        memset(vis, 0, sizeof(vis));
        int cnt = 0;
        for (int i = 0; i < h; i ++) {
            for (int j = 0; j < w; j ++) {
                if(!vis[i][j]) dfs(i,j,++cnt);
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}