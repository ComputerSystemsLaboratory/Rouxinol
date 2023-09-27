#include <bits/stdc++.h>

using namespace std;

int W, H;
int f[55][55];
const int dx[] = {-1, -1, -1, +0, +0, +1, +1, +1};
const int dy[] = {-1, +0, +1, -1, +1, -1, +0, +1};

void dfs(int x, int y)
{
    f[y][x] = 0;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx < W && 0 <= ny && ny < H &&
            f[ny][nx] == 1) {
            dfs(nx, ny);
        }
    }
}

int main()
{
    while (cin >> W >> H, W) {
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> f[i][j];
            }
        }

        int res = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (f[i][j] == 1) {
                    res++;
                    dfs(j, i);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}