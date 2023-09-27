#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for(int (i)=0;(i)<(int)(j);++(i))

int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main() {
    int w, h;
    char f[20][20];
    while (cin >> w >> h && w && h) {
        int c = 1;
        queue<pair<int, int>> q;
        rep(y,h) {
            rep(x,w) {
                cin >> f[y][x];
                if (f[y][x] == '@') {
                    q.push({x, y});
                    f[y][x] = 'x';
                }
            }
        }
        while (q.size()) {
            pair<int, int> p = q.front(); q.pop();
            for (int i = 0; i < 4; ++i) {
                int nx = p.first+dx[i];
                int ny = p.second+dy[i];
                if (0 <= nx && nx < w && 0 <= ny && ny < h && f[ny][nx] == '.') {
                    ++c;
                    q.push({nx, ny});
                    f[ny][nx] = 'x';
                }
            }
        }
        cout << c << endl;
    }
}