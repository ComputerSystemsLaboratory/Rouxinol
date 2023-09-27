#include <iostream>
#include <vector>

using namespace std;

static int W, H;
static vector<vector<int>> field;

const int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
const int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

void dfs(int x, int y) {
    if (x < 0 || x >= W || y < 0 || y >= H || field[y][x] == 0)
        return;

    field[y][x] = 0;
    for (int k = 0; k < 8; k++)
        dfs(x + dx[k], y + dy[k]);
}

int main() {
    for (;;) {
        cin >> W >> H;
        if (W == 0) break;

        field.resize(H);
        for (int y = 0; y < H; y++) {
            field[y].resize(W);
            for (int x = 0; x < W; x++) {
                cin >> field[y][x];
            }
        }

        int ans = 0;
        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                if (field[y][x] == 1) {
                    dfs(x, y);
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}