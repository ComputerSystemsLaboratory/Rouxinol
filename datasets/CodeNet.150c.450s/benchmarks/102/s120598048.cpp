#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 20;

int W, H;
int sx, sy;                 // ?????????????????§?¨?
int dx[4] = {-1, 0, 0, 1};
int dy[4] = { 0,-1, 1, 0};

bool isVisited[MAX_N][MAX_N];

int dfs(const vector<vector<char>>& masu, int x, int y) {
    if (!isVisited[y][x] && masu[y][x] != '#') {
        isVisited[y][x] = true;

        int ret = 1;
        for (int i = 0; i < 4; i++) {
            if (0 <= x+dx[i] && x+dx[i] < W && 0 <= y+dy[i] && y+dy[i] < H) {
                // cout << "#: x=" << x+dx[i] << ", y=" << y+dx[i] << endl;
                ret += dfs(masu, x+dx[i], y+dy[i]);
            }
        }

        return ret;
    }
    return 0;
}

int main(void) {

    while (cin >> W >> H, W) {
        for (int i = 0; i < MAX_N; i++) {
            for (int j = 0; j < MAX_N; j++) {
                isVisited[i][j] = false;
            }
        }

        vector<vector<char>> masu(H, vector<char>(W));
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> masu[i][j];
                if (masu[i][j] == '@') {
                    sx = j;
                    sy = i;
                }
            }
        }

        cout << dfs(masu, sx, sy) << endl;
    }

    return 0;
}