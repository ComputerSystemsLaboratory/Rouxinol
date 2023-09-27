#include <iostream>
#include <string>
using namespace std;

string maps[110];

int h, w;

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

void dfs(int x, int y) {
    char type = maps[x][y];
    maps[x][y] = '.';
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < h && ny >= 0 && ny < w && maps[nx][ny] == type) {
            dfs(nx, ny);
        }
    }
}

int main() {
    while (true) {
        cin >> h >> w;
        if (h == 0 && w == 0) {
            break;
        }
        for (int i = 0; i < h; i++) {
            cin >> maps[i];
        }
        int count = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (maps[i][j] != '.') {
                    count++;
                    dfs(i, j);
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}