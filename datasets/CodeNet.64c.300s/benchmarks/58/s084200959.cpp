#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int dx[] = {0, -1, 1, 0};
const int dy[] = {-1, 0, 0, 1};
char kaju[102][102];

void reset() {
    for (int i=0; i<102; ++i) {
        for (int j=0; j<102; ++j) {
            kaju[i][j] = '.';
        }
    }
}

void clr(int y, int x) {
    char t = kaju[y][x];
    kaju[y][x] = '.';
    for (int i=0; i<4; ++i) {
        if (kaju[y + dy[i]][x + dx[i]] == t) {
            clr(y + dy[i], x + dx[i]);
        }
    }
}

int main() {
    int H, W;
    while (cin >> H >> W, H) {
        reset();
        for (int i=0; i<H; ++i) {
            for (int j=0; j<W; ++j) {
                cin >> kaju[i][j];
            }
        }
        int cnt = 0;
        for (int i=0; i<H; ++i) {
            for (int j=0; j<W; ++j) {
                if (kaju[i][j] != '.') {
                    cnt ++;
                    clr(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}