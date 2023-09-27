#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
char mp[MAX][MAX+1];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};

int H, W;

void dfs(int x, int y) {
    char pos = mp[x][y];
    mp[x][y] = '.';
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx < W && 0 <= ny && ny < H && mp[nx][ny] == pos)
        {
            dfs(nx, ny);
        }
    }
}

int main(void) {
    while (cin >> H >> W) {
        if (H == 0 && W == 0)
            break;
        for (int y = 0; y < H; y++)
        {
            for (int x = 0; x < W; x++)
            {
                cin >> mp[x][y];
            }
        }

        int ans = 0;
        for (int y = 0; y < H; y++)
        {
            for (int x = 0; x < W; x++)
            {
                if (mp[x][y] == '.')
                    continue;
                dfs(x, y);
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
