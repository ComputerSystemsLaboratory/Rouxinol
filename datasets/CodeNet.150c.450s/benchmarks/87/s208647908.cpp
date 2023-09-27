#include <bits/stdc++.h>
using namespace std;

int slide(vector<vector<int>>& v, int retu) {
    int rc = 0;
    vector<int> remove;
    for (int i = 0; i < 3; i++) {
        int right = i;
        while (v[retu][i] == v[retu][right + 1] && v[retu][i] != 0 && right < 4) {
            right++;
        }
        if (right - i + 1 >= 3) {
            rc += (right - i + 1) * v[retu][i];
            for (int rRetu = retu; rRetu >= 0; rRetu--) {
                for (int j = i; j <= right; j++) {
                    if (rRetu == 0) {
                        v[0][j] = 0;
                    } else {
                        v[rRetu][j] = v[rRetu - 1][j];
                    }
                }
            }
            return rc;
        }
    }
    return 0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    while (1) {
        int H;
        cin >> H;
        if (!H) break;
        vector<vector<int>> field(H, vector<int>(5, 0));
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < 5; j++) {
                int res;
                cin >> res;
                field[i][j] = res;
            }
        }
        int ans = 0;
        for (int i = 0; i < H * 3 * 3; i++) {
            for (int i = 0; i < H; i++) {
                int res = slide(field, i);
                ans += res;
            }
        }
        cout << ans << endl;
    }
}
