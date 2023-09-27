#include <iostream>

using namespace std;

char table[21][21];
bool reachable;
int cnt;
int w, h;

void dfs(int x, int y) {
    if (table[y][x] == '@')
        reachable = true;
    table[y][x] = '#';
    for (int dy = -1; dy <= 1; dy++) {
        for (int dx = -1; dx <= 1; dx++) {
            if (dx*dy != 0 || x+dx < 0 || x+dx >= w || y+dy < 0 || y+dy >= h)
                continue;
            if (table[y+dy][x+dx] != '#') {
                cnt++;
                dfs(x+dx, y+dy);
            }
        }
    }
}

int main()
{
    start:
    while (cin >> w >> h, w|h) {
        // input
        for (int i = 0; i < h; i++) {
            cin >> table[i];
        }
        // dfs
        for (int j = 0; j < h; j++) {
            for (int i = 0; i < w; i++) {
                if (table[j][i] != '#') {
                    reachable = false;
                    cnt = 1;
                    dfs(i, j);
                    if (reachable) {
                        cout << cnt << endl;
                        goto start;
                    }
                }
            }
        }
    }

    return 0;
}