#include<cstdio>
#include<algorithm>
#include<memory.h>
#define N 105
using namespace std;
int w, h;
char g[N][N];
bool vis[N][N];
int mov[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dfs(int x, int y, char flag)
{
    vis[x][y] = true;
    for(int i = 0; i < 4; i++) {
        int nx = x + mov[i][0];
        int ny = y + mov[i][1];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w || g[nx][ny] != flag || vis[nx][ny]) continue;
        dfs(nx, ny, flag);
    }
}

void solve()
{
    int cnt = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(!vis[i][j]) {dfs(i, j, g[i][j]); cnt++;}
        }
    }
    printf("%d\n", cnt);
}

int main()
{
    while(~scanf("%d %d", &h, &w)) {
        getchar();
        if(h == 0 && w == 0) break;
        memset(vis, false, sizeof(vis));
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                scanf("%c", &g[i][j]);
            }
            getchar();
        }
        solve();
    }

    return 0;
}

