#include <iostream>
#include <string>
#include <vector>

using namespace std;

char room[25][25] = {'#'};

int walk(int x, int y) {
    int ret = 1;
    room[y][x] = '#';
    if (room[y-1][x] == '.') ret += walk(x, y-1);
    if (room[y+1][x] == '.') ret += walk(x, y+1);
    if (room[y][x-1] == '.') ret += walk(x-1, y);
    if (room[y][x+1] == '.') ret += walk(x+1, y);
    return ret;
}

int main() {
    int W, H;
    while (cin >> W >> H, W || H) {
        int x, y;
        for (int i=0; i<25; ++i) {
            for (int j=0; j<25; ++j) {
                room[i][j] = '#';
            }
        }
        for (int i=1; i<=H; ++i) {
            for (int j=1; j<=W; ++j) {
                cin >> room[i][j];
                if (room[i][j] == '@') {
                    room[i][j] = '.';
                    y = i, x = j;
                }
            }
        }
        cout << walk(x, y) << endl;
    }
    return 0;
}