#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
using namespace std;

const int N = 1000;
const int INF = 0x3f3f3f3f;

int n, m, f;
char map[N][N+1];

bool legal(int x, int y, int k)
{
    return x >= 0 && x < n && y >= 0 && y < m
        && map[x][y] != 'X';
}

void input()
{
    cin >> n >> m >> f;
    for (int i = 0; i < n; i ++) {
        scanf("%s", map[i]);
    }
}

int BFS(int k)
{
    int i, j;
    int d[N][N];
    typedef pair<int, int> P;
    queue <P> q;
    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j ++) {
            d[i][j] = INF;
            if ((k == 0 && map[i][j] == 'S') || map[i][j] == '0'+k) {
                q.push(P(i, j));
                d[i][j] = 0;
                map[i][j] = '.';
            }
        }
    }

    while( q.size() ) {
        P p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;

        if (map[x][y] == INF)
            return d[x][y];

        int pos[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for (i = 0; i < 4; i ++) {
            int nx = x + pos[i][0];
            int ny = y + pos[i][1];
            if (legal(nx, ny, k) && d[nx][ny] == INF) {
                q.push(P(nx, ny));
                d[nx][ny] = d[x][y]+1;
                if (map[nx][ny] == '0'+k+1) {
                    return d[nx][ny];
                }
            }
        }
    }

    return INF;
}

void solve()
{
    int res = 0;
    for (int i = 0; i < f; i ++) {
        res += BFS(i);
    }
    printf("%d\n", res);
}

int main(void)
{
    input();

    solve();

    return 0;
}