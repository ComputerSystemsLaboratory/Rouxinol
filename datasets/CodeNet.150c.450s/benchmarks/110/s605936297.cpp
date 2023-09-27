#include <iostream>
#include <queue>
//aoj 0558 广度优先搜索
#define M_VALUE 10000000
using namespace std;
//定义四个方向
int H, W, N;

int dir[4][2] = {
        {0,  1},
        {0,  -1},
        {1,  0},
        {-1, 0}
};

//用于存储迷宫
char map[1024][1024];

//用于存储距离
int d[1024][1024];

int factory[16][2];

typedef pair<int, int> P;

//采用广度优先遍历，寻找从(sx,sy)到(ex,ey)的最短路径
int bfs(int sx, int sy, int ex, int ey) {
    queue<P> que;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            d[i][j] = M_VALUE;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;
    while (que.size()) {
        P p = que.front();
        que.pop();

        if (p.first == ex && p.second == ey) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = p.first + dir[i][0];
            int ny = p.second + dir[i][1];


            if (nx >= 0 && ny >= 0 && nx < H && ny < W && d[nx][ny] == M_VALUE && map[nx][ny] != 'X') {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }

        }


    }
    return d[ex][ey];

}

int main() {
    cin >> H >> W >> N;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'S') {
                factory[0][0] = i;
                factory[0][1] = j;
            }
            if (isdigit(map[i][j])) {
                int index = map[i][j] - '0';
                factory[index][0] = i;
                factory[index][1] = j;
            }
        }
    }
    int res = 0;

    for (int i = 0; i < N; i++) {
        res += bfs(factory[i][0], factory[i][1], factory[i + 1][0], factory[i + 1][1]);
    }
    cout << res << endl;

    return 0;
}
