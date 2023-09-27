#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool solve() {
    int R, C;
    cin >> R >> C;
    if (!(R || C)) return false;
    vector<vector<int>> table(R, vector<int>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> table[i][j];
        }
    }

    int ret = -1;
    for (int mask = 0; mask < (1 << R); mask++) {
        int cnt = 0;
        for (int j = 0; j < C; j++) {
            int tmp = 0;
            for (int i = 0; i < R; i++) {
                int bit = (mask >> i) & 1;
                tmp += bit ^ table[i][j];
            }
            cnt += max(tmp, R-tmp);
        }
        ret = max(ret, cnt);
    }
    cout << ret << endl;
    return true;
}

signed main() {
    while (true) {
        if (!solve()) break;
    }
}
