#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

const int maxn = 100 + 5;

int h, w;
char trees[maxn][maxn];
bool vis[maxn][maxn];
int dx[] = { -1, 1, 0, 0 }, dy[] = { 0, 0, -1, 1 };

void dfs(int x, int y) {
    vis[x][y] = true;
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 1 || nx > h || ny < 1 || ny > w) continue;
        if (vis[nx][ny] || trees[x][y] != trees[nx][ny]) continue;
        dfs(nx, ny);
    }
}

int main() {
    while (cin >> h >> w && h) {
        for (int i = 1; i <= h; ++i)
            for (int j = 1; j <= w; ++j) {
                cin >> trees[i][j];
                vis[i][j] = false;
            }
        int ans = 0;
        for (int i = 1; i <= h; ++i)
            for (int j = 1; j <= w; ++j)
                if (!vis[i][j]) dfs(i, j), ++ans;
        printf("%d\n", ans);
    }
    return 0;
}
