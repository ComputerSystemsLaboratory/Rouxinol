#include <iostream>
using namespace std;

const int MAX_H = 100, MAX_W = 100;
int H, W;
char field[MAX_H][MAX_W+1];
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

void dfs(int x, int y, char a) {
    field[x][y] = '.';

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (0 <= nx && nx < H && 0 <= ny && ny < W && field[nx][ny] == a) dfs(nx, ny, a);
    }
    return ;
}

void solve() {
    int res = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (field[i][j] != '.') {
                dfs(i, j, field[i][j]);
                res++;
            }
        }
    }
    cout << res << endl;
}

int main () {
    while(cin >> H >> W, H&&W) {
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> field[i][j];
            }
        }
        solve();
    }
    return 0;
}
