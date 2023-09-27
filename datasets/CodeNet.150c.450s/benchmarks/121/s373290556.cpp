#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX_N = 110;
char map[MAX_N][MAX_N];
int m, n;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

void dfs(int x, int y, char ch) {
    map[x][y] = '.';
    
    for (int i = 0; i < 4; i++) {
        int nx = x+dx[i], ny = y+dy[i];
        if (nx >= 0 && nx < m && ny >= 0 && ny < n && map[nx][ny] == ch) dfs(nx, ny, ch);
    }
}

int main() {
    while (cin >> m >> n) {
        if (m == 0 && n == 0) break;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> map[i][j];
        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (map[i][j] != '.') {
                    dfs(i, j, map[i][j]);
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
