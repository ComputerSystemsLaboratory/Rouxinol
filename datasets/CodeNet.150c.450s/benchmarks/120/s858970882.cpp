#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;
typedef vector<vec> mat;

int R, C;

void solve() {
    mat v(R, vec(C));
    for (auto& i : v) for (auto& j : i) cin >> j;

    int ans = 0;
    for (int i = 0; i < (1 << R); i++) {
        int tmp = 0;
        vector<int> tb(R);
        for (int j = 0; j < R; j++)
            if (i & (1 << j)) tb[j] = 1;
        for (int j = 0; j < C; j++) {
            int count = 0;
            for (int k = 0; k < R; k++)
                count += tb[k]^v[k][j] ? 1 : 0;

            tmp += max(count, R - count);
        }
        ans = max(tmp, ans);
    }

    cout << ans << endl;
}

int main() {
    while (cin >> R >> C, R || C) solve();

    return 0;
}