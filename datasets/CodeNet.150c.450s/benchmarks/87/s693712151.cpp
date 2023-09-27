#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h;
    while (cin >> h, h) {
        vector<vector<int>> field(5, vector<int>(h));
        for (int j = h - 1; j >= 0; j--) {
            for (int i = 0; i < 5; i++) cin >> field[i][j];
        }
        int ans = 0;
        bool update = true;
        while (update) {
            update = false;
            // check
            vector<vector<int>> alive(5, vector<int>(h, 1));
            vector<vector<int>> v_idxs = {
                {0, 1, 2, 3, 4}, {0, 1, 2, 3}, {1, 2, 3, 4},
                {0, 1, 2}, {1, 2, 3}, {2, 3, 4}
            };
            for (int j = 0; j < h; j++) {
                for (int k = 0; k < 6; k++) {
                    auto& idxs = v_idxs[k];
                    int size = idxs.size();
                    bool f = true;
                    for (int i2 = 0; i2 < size - 1; i2++) { // i2, i2 + 1: zip
                        if (field[idxs[i2]][j] + field[idxs[i2 + 1]][j] == 0) {
                            f = false;
                        }
                        f &= field[idxs[i2]][j] == field[idxs[i2 + 1]][j];
                    }
                    if (f) {
                        for (int i: idxs) alive[i][j] = 0, ans += field[i][j];
                        update = true;
                        break;
                    }
                }
            }
            // update
            for (int i = 0; i < 5; i++) {
                int jt = 0;
                for (int j = 0; j < h; j++) if (alive[i][j]) {
                    field[i][jt++] = field[i][j];
                }
                while (jt < h) field[i][jt++] = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
