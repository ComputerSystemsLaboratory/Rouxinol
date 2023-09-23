#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for(int (i)=0;(i)<(int)(j);++(i))

const int MAX = 101;
int h, w;
char f[MAX][MAX];

int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void dfs(int y, int x, char c) {
    f[y][x] = '.';
    rep(i, 4) {
        int nx = x+dx[i], ny = y+dy[i];
        if (0 <= nx && nx < w && 0 <= ny && ny < h && f[ny][nx] == c) {
            dfs(ny, nx, c);
        }
    }
}

int main() {
    while (cin >> h >> w, (h||w)) {
        rep(y, h) rep(x, w) cin >> f[y][x];
        int c = 0;
        rep(y, h) rep(x, w) {
            if (f[y][x] != '.') {
                c++;
                dfs(y, x, f[y][x]);
            }
        }
        cout << c << endl;
    }
}