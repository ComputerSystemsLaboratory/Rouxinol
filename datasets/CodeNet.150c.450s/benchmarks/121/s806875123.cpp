#include <iostream>


#define MAX_H 100
#define MAX_W 100

using namespace std;

int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };

char field[MAX_H][MAX_W];
int h, w;

/* check position (y, x) with fruit 'c' */
void dfs(int y, int x, char c) {
    int next_y, next_x;
    for (int i = 0; i < 4; ++i) {
        next_y = y + dy[i];
        next_x = x + dx[i];
        if (0 <= next_y && next_y < h && 0 <= next_x && next_x < w
            && field[next_y][next_x] == c) {
            field[next_y][next_x] = '/';  // update used flag
            dfs(next_y, next_x, c);
        }
    }
}

int main() {
    //freopen("0118.in", "r", stdin);

    while (cin >> h >> w, h|w) {
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> field[i][j];
            }
        }

        /* init */
        int count = 0;
        /* check field
         * '@' apple
         * '#' kaki
         * '#' orange
         * '/' already checked (used true flag)
         */
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (field[i][j] != '/') {
                    dfs(i, j, field[i][j]);
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}