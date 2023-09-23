#include <bits/stdc++.h>

using namespace std;

int h, w;
char mp[100][100];

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

void dfs(int y, int x, char fruit)
{
    if (y < 0 || y >= h || x < 0 || x >= w || mp[y][x] != fruit) return;
    mp[y][x] = ' ';
    for (int i = 0; i < 4; ++i) dfs(y + dy[i], x + dx[i], fruit);
}

int main()
{
    while (cin >> h >> w, h || w) {
        for (int i = 0; i < h; ++i) for (int j = 0; j < w; ++j) cin >> mp[i][j];

        int cnt = 0;

        for (int i = 0; i < h; ++i) for (int j = 0; j < w; ++j) {
            if (mp[i][j] != ' ') {
                cnt++;
                dfs(i, j, mp[i][j]);
            }
        }

        printf("%d\n", cnt);
    } 
}