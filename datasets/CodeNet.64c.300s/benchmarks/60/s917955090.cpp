#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

int map[16][16];
int w,h;

int f(int x, int y) {
    if ((map[x][y] == -1) || (x < 0) || (y < 0) || (w <= x) || (h <= y)) {
        return 0;
    }
    if ((x == 0) && (y == 0)) {
        return 1;
    }

    if (map[x][y] != 0) {
        return map[x][y];
    }
    return f(x - 1, y) + f(x, y - 1);
}

int main() {
    while (true) {
        int n;
        cin >> w >> h >> n;
        if ((w == 0) && (h == 0)) return 0;
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

        cout << f(w - 1, h - 1) << endl;
    }
}