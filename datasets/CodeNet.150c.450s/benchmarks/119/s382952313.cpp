#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

namespace {
    const int MAX_W = 50;
    const int MAX_H = 50;
    int W, H;
    int F[MAX_H][MAX_W];
    bool input() {
        cin >> W >> H;
        if (W == 0 && H == 0) return false;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> F[i][j];
            }
        }
        return true;
    }

    const int dy[] = {-1, -1, 0, 1, 1, 1 ,0, -1};
    const int dx[] = {0, 1, 1, 1 ,0, -1, -1, -1};

    void solve() {
        bool used[H][W];
        memset(used, 0, sizeof(used));
        int ans = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (F[i][j] == 0) continue;
                if (used[i][j]) continue;
                typedef pair<int, int> P;
                queue<P> Q;
                Q.push(P(i, j));
                ans++;
                used[i][j] = true;
                while (!Q.empty()) {
                    P c = Q.front(); Q.pop();
                    int y = c.first, x = c.second;
                    for (int k = 0; k < 8; k++) {
                        int ny = y + dy[k];
                        int nx = x + dx[k];
                        if (ny < 0 || ny >= H) continue;
                        if (nx < 0 || nx >= W) continue;
                        if (F[ny][nx] == 0) continue;
                        if (used[ny][nx]) continue;
                        used[ny][nx] = true;
                        Q.push(P(ny, nx));
                    }
                }
            }
        }
        cout << ans << endl;
    }
}

int main() {
    while (input()) solve();
    return 0;
}