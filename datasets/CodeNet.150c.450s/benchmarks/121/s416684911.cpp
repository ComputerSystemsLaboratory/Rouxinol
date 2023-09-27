#include <iostream>
#include <algorithm>

using namespace std;

int H, W;
char mp[101][101];
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int visited[101][101] = {false};

void dfs(int x, int y, char f)
{
    visited[y][x] = true;

    for (int i = 0; i < 4; i++)
    {
        int mx = x + dx[i];
        int my = y + dy[i];

        if (mx < 0 || my < 0 || H <= my || W <= mx || f != mp[my][mx])
            continue;
        
        if (visited[my][mx])  
            continue;

        dfs(mx, my, f);
    }

    return;
}

int main()
{
    while (cin >> H >> W, H || W)
    {
        for (int y = 0; y < H; y++)
        {
            for (int x = 0; x < W; x++)
            {
                cin >> mp[y][x];
                visited[y][x] = false;
            }
        }

        int N = 0;





        for (int y = 0; y < H; y++)
        {
            for (int x = 0; x < W; x++)
            {
                if (!visited[y][x])
                {
                    N++;
                    dfs(x, y, mp[y][x]);
                }
            }
        }

        cout << N << endl;
    }
    return 0;
}
