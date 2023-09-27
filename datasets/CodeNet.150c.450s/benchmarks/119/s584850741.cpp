#include<iostream>
using namespace std;

int num, land[1080][1080];
int xs[] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int ys[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
void dfs(int x, int y) {
    land[x][y] = 0;
    for (int i = 0; i < 8; i++) {
        int tx = x + xs[i];
        int ty = y + ys[i];
        if (land[tx][ty])dfs(tx, ty);
    }
}

int main() {
    int w, h;
    while (1) {
        cin >> h >> w;
        if (w == 0 || h == 0)
            break;
        num = 0;
        for (int i = 1; i <= w; i++) {
            for (int j = 1; j <= h; j++) {
                cin >> land[i][j];
            }
        }
        for (int i = 1; i <= w; i++) {
            for (int j = 1; j <= h; j++) {
                if (land[i][j]) {
                    num++;
                    dfs(i, j);
                }
            }
        }
        cout << num << endl;
    }
    return 0;
}