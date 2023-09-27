#include <iostream>
#include <algorithm>

using namespace std;

int w, h;
int field[51][51];
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

void dfs(int x, int y)
{
    field[y][x] = -1;

    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= w || ny >= h)
            continue;

        if (field[ny][nx] == 1)
            dfs(nx, ny);
    }
}

int main()
{
    while (cin >> w >> h, w || h)
    {
        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                cin >> field[y][x];
            }
        }

        int ans = 0;

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                if (field[y][x] == 1)
                {
                    dfs(x, y);
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}