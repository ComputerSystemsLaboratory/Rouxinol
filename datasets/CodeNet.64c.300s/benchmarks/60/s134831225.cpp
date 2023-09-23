#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

int map[16][16];

inline int get(int x, int y) {
    if (map[x][y] == -1) {
        return -1;
    }
    int r = 0;
    if ((0 < x) && (map[x - 1][y] != -1)) {
        r += map[x - 1][y];
    }
    if ((0 < y) && (map[x][y - 1] != -1)) {
        r += map[x][y - 1];
    }

    return r;
}

int main() {
    while (true) {
        int n, w, h;
        cin >> w >> h >> n;
        if ((w == 0) && (h == 0)) {
            return 0;
        }
        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < h; ++j) {
                map[i][j] = 0;
            }
        }
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            map[x - 1][y - 1] = -1;
        }
        map[0][0] = 1;

        for (int mw = 1; mw < w; ++mw) {
            for (int mh = 1; mh < h; ++mh) {
                for (int x = 0; x < mw; ++x) {
                    map[x][mh] = get(x, mh);
                }
                for (int y = 0; y < mh; ++y) {
                    map[mw][y] = get(mw, y);
                }
                map[mw][mh] = get(mw, mh);
            }
        }

        cout << map[w - 1][h - 1] << endl;
    }
}