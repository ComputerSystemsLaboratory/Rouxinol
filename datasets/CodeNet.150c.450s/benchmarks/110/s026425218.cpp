/* AOJ0558 Cheese */

#include <iostream>
#include <queue>
//#include <string.h>

using namespace std;

const int N = 1000;
char grid[N][N];
int w, h, n;

// 各点到当前工厂的距?
int d[N][N];

const int direct[4][2] = {
    { -1, 0 },
    { 1, 0 },
    { 0, -1 },
    { 0, 1 },
};

int factory[10][2];
typedef pair<int, int> P;

int bfs(const int& sx, const int& sy, const int& gx, const int& gy)
{
    //memset(d, -1, sizeof(d));
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            d[j][i] = -1;
        }
    }
    queue<P> que;
    que.push(P(sx, sy));
    d[sx][sy] = 0;
    while (que.size())
    {
        const P p = que.front(); que.pop();
        // 如果是?点就?束
        if (p.first == gx && p.second == gy)
        {
            break;
        }

        // 四方向漫游
        for (int i = 0; i < 4; ++i)
        {
            int nx = p.first + direct[i][0];
            int ny = p.second + direct[i][1];
            // 是否可以移?，并且?点没有???
            if (0 <= nx && nx < w && 0 <= ny && ny < h && grid[nx][ny] != 'X' && d[nx][ny] == -1)
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gx][gy];
}

int main()
{

    while(cin >> h >> w >> n) {
        for (int i = 0; i < h; ++i)
            for (int j = 0; j < w; ++j) {
                cin >> grid[j][i];
                if (grid[j][i] == 'S') {
                    factory[0][0] = j;
                    factory[0][1] = i;
                    grid[j][i] = '.';
                }
                else if (isdigit(grid[j][i])) {
                    factory[grid[j][i] - '0'][0] = j;
                    factory[grid[j][i] - '0'][1] = i;
                }
            }


        int minstep = 0;
        for (int i = 0; i < n; ++i) {
            minstep += bfs(factory[i][0], factory[i][1], factory[i + 1][0], factory[i + 1][1]);
        }

        cout << minstep << endl;
    }

    return 0;
}