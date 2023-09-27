#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;

int H;
int W;
vvi g;

int erase(vvi &g) {
    int res = 0;
    for (size_t j = 0; j < W; j++) {
        for (size_t i = 0; i < H; i++) {
            if (g[i][j] == 0 || g[i][j] == -1) continue;
            int k = i + 1;
            while (k < H && g[i][j] == g[k][j]) {
                ++k;
            }
            int d = k - i;
            if (d >= 3) {
                for (int l = i; l < k; ++l) {
                    res += g[l][j];
                    g[l][j] = -1;
                }
            }
        }
    }
    for (size_t i = 0; i < H; i++) {
        auto &row = g[i];
        auto it = remove(row.begin(), row.end(), -1);
        row.erase(it, row.end());
        while (row.size() < W) {
            row.push_back(0);
        }
    }
    return res;
}

int main() {
    while (cin >> H && H) {
        W = 5;
        g.assign(W, vi(H));
        for (size_t i = 0; i < H; i++) {
            for (size_t j = 0; j < W; j++) {
                cin >> g[j][i];
            }
        }
        swap(H, W);
        for (size_t i = 0; i < H; i++) {
            reverse(g[i].begin(), g[i].end());
        }
        int ans = 0;
        while (1) {
            int add = erase(g);

            //for (size_t i = 0; i < H; i++) {
            //    for (size_t j = 0; j < W; j++) {
            //        cout << g[i][j];
            //    }
            //    cout << endl;
            //}
            //cout << endl;


            if (add == 0) break;
            ans += add;
        }
        cout << ans << endl;
    }
}