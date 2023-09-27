#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int w, h, c[55][55], ans;
bool is_search[55][55];
int vx[8] = {0, -1, -1, -1, 0, 1, 1, 1},
    vy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};


void bfs(int x, int y) {
    queue<pair<int, int> > que;
    que.push(make_pair(x, y));
    is_search[x][y] = true;

    while (!que.empty()) {
        pair<int, int> p = que.front(); que.pop();
        //cout << p.first << " " << p.second << endl;
        rep(i,8) {
            int nx, ny;
            nx = p.first + vx[i], ny = p.second + vy[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w &&
                c[nx][ny] == 1 && is_search[nx][ny] == false) {
                   que.push(make_pair(nx, ny));
                   is_search[nx][ny] = true;
            }
        }
    }

}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (cin >> w >> h, w | h) {
        memset(c, 0, sizeof(c));
        memset(is_search, false, sizeof(is_search));
        ans = 0;
        rep(i,h) {
            rep(j,w) {
                cin >> c[i][j];
            }
        }

        rep(i,h) {
            rep(j,w) {
                if (is_search[i][j] == false && c[i][j] == 1) {
                    bfs(i,j);
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}