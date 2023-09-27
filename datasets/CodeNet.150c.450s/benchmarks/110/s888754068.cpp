#include <iostream>
#include <queue>

#define INF 1e9
#define MAX_H 1000
#define MAX_W 1000

using namespace std;

struct Cood {int x, y; };

int N;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };

char field[MAX_H][MAX_W + 1];
int d[MAX_H][MAX_W + 1];
queue<Cood> q;
int h, w, n;
int total_time = 0;

void init_bfs() {
    queue<Cood> new_q;
    swap(q, new_q);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            d[i][j] = INF;
        }
    }
}
/* current position (y, x) with current power 'current' & last cheeese target is 'last' */
int bfs(int sy, int sx, int target, int last) {
    init_bfs();
    int next_y, next_x;
    q.push(Cood{sx, sy});
    d[sy][sx] = 0;

    while (q.size()) {
        Cood current = q.front(); q.pop();
        if (field[current.y][current.x] == '0' + target) {
            total_time += d[current.y][current.x];
            if (target == last) {
                return total_time;
            } else {
                return bfs(current.y, current.x, target + 1, last);
            }
        }

        for (int i = 0; i < 4; ++i) {
            next_y = current.y + dy[i];
            next_x = current.x + dx[i];
            if (0 <= next_y && next_y < h && 0 <= next_x && next_x < w
                && field[next_y][next_x] != 'X' && d[next_y][next_x] == INF) {
                q.push(Cood{next_x, next_y});
                d[next_y][next_x] = d[current.y][current.x] + 1;
            }
        }
    }
}

int main() {
    //freopen("0558_1.in", "r", stdin);
    cin >> h >> w >> n;
    int sx, sy;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> field[i][j];
            if (field[i][j] == 'S') {
                sy = i, sx = j;
            }
        }
    }
    total_time = 0; // init
    cout << bfs(sy, sx, 1, n) << endl;
    return 0;
}