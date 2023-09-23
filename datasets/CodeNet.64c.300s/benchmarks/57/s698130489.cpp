#include <cstdio>
#include <cstring>
#include <cassert>
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <queue>
#include <utility>

using namespace std;

int R, C;
int F[10][10000];
bool input() {
    cin >> R >> C;
    if (R == 0 && C == 0) return false;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> F[i][j];
        }
    }
    return true;
}

int count(int flag) {
    static int G[10][10000];
    memcpy(G, F, sizeof(G));
    for (int y = 0; y < R; y++) {
        if (flag & (1 << y)) {
            for (int x = 0; x < C; x++) {
                G[y][x] = !G[y][x];
            }
        }
    }
    int ans = 0;
    for (int x = 0; x < C; x++) {
        int b = 0, w = 0;
        for (int y = 0; y < R; y++) {
            (G[y][x] ? b : w)++;
        }
        ans += max(b, w);
    }
    return ans;
}

void solve() {
    int ans = 0;
    for (int i = 0; i < (1 << R); i++) {
        ans = max(ans, count(i));
    }
    cout << ans << endl;
}

int main() {
    while (input()) {
        solve();
    }
    return 0;
}