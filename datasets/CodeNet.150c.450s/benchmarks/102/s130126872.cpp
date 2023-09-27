#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000
typedef long long ll;

int W, H;
char field[32][32];
bool used[32][32];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    used[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx < H && 0 <= ny && ny < W && field[nx][ny] != '#' && used[nx][ny] == false) {
            dfs(nx, ny);
        }
    }
}

int main(void) {
    while (1) {
        cin >> W >> H;
        for (int i = 0; i < 32; i++)
            for (int j = 0; j < 32; j++)
                used[i][j] = false;
        if (W == 0 && H == 0) break;
        int sx, sy;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> field[i][j];
                if (field[i][j] == '@') {
                    sx = i; sy = j;
                }
            }
        }
        used[sx][sy] = true;
        dfs(sx, sy);
        int ret = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (used[i][j]) ret++;
            }
        }
        cout << ret << endl;
    }
    return 0;
}