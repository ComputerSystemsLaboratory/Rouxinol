#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;
typedef struct cheese {
    P p;
    int hd;
    cheese(P p, int hd) : p(p), hd(hd) {}
} cheese;

const int INF = 1e8;
const int MAX_N = 1010;
int m, n, total;
char map[MAX_N][MAX_N];
int tm[MAX_N][MAX_N];
vector<cheese> che;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int sx, sy;

int bfs(int sx, int sy, int ex, int ey) {
    queue<P> que;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tm[i][j] = INF;
    que.push(P(sx, sy));
    tm[sx][sy] = 0;
    
    while (que.size() > 0) {
        P p = que.front();
        que.pop();
        if (p.first == ex && p.second == ey) return tm[ex][ey];
        
        for (int i = 0; i < 4; i++) {
            int nx = p.first+dx[i], ny = p.second+dy[i];
            if (nx >= 0 && nx < m && ny >=0 && ny < n && map[nx][ny] != 'X' && tm[nx][ny] == INF) {
                que.push(P(nx, ny));
                tm[nx][ny] = tm[p.first][p.second]+1;
            }
        }
    }
    return -1;
}

bool cmp(cheese a, cheese b) {
    return a.hd < b.hd;
}

int main() {
    cin >> m >> n >> total;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'S') {
                sx = i;
                sy = j;
            }
            if (map[i][j] > '0' && map[i][j] <= '9')
                che.push_back(cheese(P(i, j), map[i][j]-'0'));
        }
    sort(che.begin(), che.end(), cmp);
    int sum = bfs(sx, sy, che[0].p.first, che[0].p.second);
    for (vector<cheese>::iterator it = che.begin(); it < che.end()-1; it++) {
        int sx = it->p.first, sy = it->p.second;
        int ex = (it+1)->p.first, ey = (it+1)->p.second;
        sum += bfs(sx, sy, ex, ey);
    }
    cout << sum << endl;
    return 0;
}

