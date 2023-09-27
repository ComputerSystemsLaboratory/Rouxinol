#include<iostream>
#include<queue>
#include<cctype>


using namespace std;

int cnt;
char field[1002][1002];
int cost[1002][1002];
int factory[9][2];
int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

int bfs(int sx, int sy, int gx, int gy) {
    queue< pair<int,int> > que;

    for(int i = 0; i < 1002; i++) {
        for (int j = 0; j < 1002; j++) {
            cost[i][j] = -1;
        }
    }

    que.push(make_pair(sx, sy));
    cost[sx][sy] = 0;

    while(!que.empty()) {
        pair<int, int> p;
        p = que.front();
        que.pop();
        
        if(p.first == gx && p.second == gy) {
            break;
        }

        for(int i = 0; i < 4; i++) {
            int tx = p.first + x[i]; int ty = p.second + y[i];
            if(field[tx][ty] != 'X' && cost[tx][ty] == -1) {
                que.push(pair<int, int>(tx, ty));
                cost[tx][ty] = cost[p.first][p.second] + 1;
            }
        }
    }
    return cost[gx][gy];
}

int main() {
    int w, h, n, sx, sy;

    cin >> h >> w >> n;

    for (int y = 1; y <= h; y++) {
        for (int x = 1; x <= w; x++) {
            cin >> field[x][y];
            if (field[x][y] == 'S') {
                sx = x;
                sy = y;
            } else if(isdigit(field[x][y])) {
                int tmp = field[x][y] - '0';
                factory[tmp][0] = x;
                factory[tmp][1] = y;
            }
        }
        field[0][y] = 'X';
        field[w + 1][y] = 'X';
    }

    for (int x = 0; x <= w + 1; x++) {
        field[x][0] = 'X';
        field[x][h + 1] = 'X';
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        // 次の目的地へ行くで
        cnt += bfs(sx, sy, factory[i][0], factory[i][1]);
        sx = factory[i][0];
        sy = factory[i][1];
    }

    cout << cnt << endl;
}