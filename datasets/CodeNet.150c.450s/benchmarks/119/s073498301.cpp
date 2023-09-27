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

int field[64][64];
bool done[64][64];
int w, h;

const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

void dfs(int y, int x) {
    done[y][x] = true;
    for (int i = 0; i < 8; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (0 <= nx && nx < w && 0 <= ny && ny < h && field[ny][nx] == 1 && done[ny][nx] == false) {
            dfs(ny, nx);
        }
    }
}

int main(void) {
    while (1) {
        cin >> w >> h;
        if (w == 0 && h == 0) break;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> field[i][j];
                done[i][j] = false;
            }
        }
        int ans = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (field[i][j] == 1 && done[i][j] == false) {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}