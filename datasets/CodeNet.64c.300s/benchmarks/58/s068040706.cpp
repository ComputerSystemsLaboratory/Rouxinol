#include <iostream>
#include <vector>
using namespace std;

int res = 0, h, w;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
char land[105][105];

void dfs(int x, int y) {
    char tmp = land[x][y];
    land[x][y] = '.';
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < h && ny >= 0 && ny < w && land[nx][ny] == tmp)
            dfs(nx, ny);
    }
}

int cal_blocks() {
    res = 0;
    for (int i = 0; i < h; ++i) 
        for (int j = 0; j < w; ++j) {
            if (land[i][j] != '.') {
                res += 1;
                dfs(i, j);
            }
        }
    return res;
}

int main() {
    while (cin >> h >> w) {
        if (h == 0 && w == 0) break;
        for (int i = 0; i < h; ++i) 
            for (int j = 0; j < w; ++j) 
                cin >> land[i][j];
        cout << cal_blocks() << endl;
    }
    return 0;
}
