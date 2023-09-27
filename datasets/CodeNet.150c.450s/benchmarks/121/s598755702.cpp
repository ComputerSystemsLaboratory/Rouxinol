#include <stdio.h>
#include <stdlib.h>
int n, m, ans;
char s[1000][1000];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int judge(int x, int y) {
    if (s[x][y] == '@')return 1;
    if (s[x][y] == '#')return 2;
    if (s[x][y] == '*')return 3;
}
void dfs(int x, int y) {
    int g = judge(x, y);
    s[x][y] = 0;
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i], yy = y + dy[i];
        if (xx > 0 && xx <= n && yy > 0 && yy <= m &&s[xx][yy] != 0)
        {
            if (judge(xx, yy) == g)dfs(xx, yy);
        }
    }
}
int main() {
 
    while (scanf("%d %d", &n, &m)&&n&&m)
    {
ans = 0;
        for (int i = 1; i <= n; i++)
            scanf("%s", s[i] + 1);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (s[i][j] == '@' || s[i][j] == '*' || s[i][j] == '#') {
                    dfs(i, j);
                    ans++;
                }
 
        printf("%d\n", ans);
    }
}