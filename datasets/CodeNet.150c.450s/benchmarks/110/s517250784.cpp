#include <bits/stdc++.h>
using namespace std;
const int MAX = 1024;

int h, w, n, maze[MAX][MAX];
int b[15];
int r[] = {1, -1, 0, 0};
int z[] = {0, 0, -1, 1};
int d[MAX][MAX];
int ans = 0;

int readchar() {
    for(;;) {
        int ch = getchar();
        if(ch != '\n' && ch != '\r') return ch;
    }
}

int bfs(int x, int y, int x2, int y2)
{
    //cout << x << y << x2 << y2 << endl;

    queue<int> q;
    q.push(x * 10000 + y);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int i = 0; i < 4; ++i) {
            int x1 = v / 10000 + r[i];
            int y1 = v % 10000 + z[i];
            if(x1 == x2 && y1 == y2) {
                d[x1][y1] = d[v / 10000][v % 10000] + 1;
                return 0;
            }
            if(x1 >= 0 && y1 >= 0 && x1 < h && y1 < w && maze[x1][y1] != 'X' && d[x1][y1] == -1) {
                 d[x1][y1] = d[v / 10000][v % 10000] + 1;
                 q.push(x1 * 10000 + y1);
            }
        }
    }
    return 0;
}
int main()
{
    cin >> h >> w >> n;
    for(int i = 0; i < h; ++i)
        for(int j = 0; j < w; ++j) {
             maze[i][j] = readchar();
        if(maze[i][j] == 'S') {
            b[0] = i * 10000 + j;
        }
        if(maze[i][j] != 'S' && maze[i][j] != 'X' && maze[i][j] != '.') {
            b[maze[i][j] - '0'] = i * 10000 + j;
        }
    }
    for(int i = 0; i < n; ++i) {
        memset(d, -1, sizeof(d));
        d[b[i] / 10000][b[i] % 10000] = 0;
        bfs(b[i] / 10000, b[i] % 10000, b[i + 1] / 10000, b[i + 1] % 10000);
        ans += d[b[i + 1] / 10000][ b[i + 1] % 10000];
    }
    cout << ans << endl;
    return 0;
}