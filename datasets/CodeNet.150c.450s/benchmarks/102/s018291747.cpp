#include <iostream>
#include <vector>

using namespace std;

static int W, H;
static vector<string> field;

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {-1, 0, 1, 0};

int dfs(int x, int y) {
    if (x < 0 || x >= W || y < 0 || y >= H || field[y][x] == '#')
        return 0;

    field[y][x] = '#';
    int sum = 0;
    for (int k = 0; k < 4; k++) {
        sum += dfs(x + dx[k], y + dy[k]);
    }

    return sum + 1;
}

int main() {
    for (;;) {
        cin >> W >> H;
        if (W == 0) break;

        field.resize(H);
        int sx, sy;
        for (int y = 0; y < H; y++) {
            cin >> field[y];
            for (int x = 0; x < W; x++) {
                if (field[y][x] == '@') {
                    sx = x;
                    sy = y;
                    field[y][x] = '.';
                }
            }
        }

        cout << dfs(sx, sy) << endl;
    }
}