#include <cstdio>
#include <utility>
#include <queue>
#include <cstdlib>
using namespace std;

int H, W, N;
char field[1000][1000];
int d[1000][1000];
pair<int, int> start;
pair<int, int> cheese;
int INF = 1000000;
int result = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs()
{
    for (int n = 1; n < N + 1; n++)
    {
        queue<pair<int, int>> que;
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                d[i][j] = INF;
            }
        }
        que.push(start);
        d[start.first][start.second] = 0;

        while (que.size())
        {
            pair<int, int> p = que.front();
            que.pop();
            if (field[p.first][p.second] == '0' + (char)n)
            {
                cheese = p;
                break;
            }

            for (int i = 0; i < 4; i++)
            {
                int nx = p.first + dx[i];
                int ny = p.second + dy[i];

                if (0 <= nx && nx < H && 0 <= ny && ny < W && field[nx][ny] != 'X' && d[nx][ny] == INF)
                {
                    que.push(pair<int, int>(nx, ny));
                    d[nx][ny] = d[p.first][p.second] + 1;
                }
            }
        }
        result += d[cheese.first][cheese.second];
        start = cheese;
    }
}

int main() {
    scanf(" %d %d %d", &H, &W, &N);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            scanf(" %c", &field[i][j]);
            if (field[i][j] == 'S')
            {
                start.first = i;
                start.second = j;
            }
        }
    }
    bfs();
    printf("%d\n", result);
}
