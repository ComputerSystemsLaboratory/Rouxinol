#include <iostream>
#include <bitset>
using namespace std;

#define C_MAX 20000
#define R_MAX 20

bitset<C_MAX> senbei[R_MAX];
int R, C;

int count_col(int i) {
    int count = 0; // 0の数
    for (int p = 0; p < R; p++) {
        if (!senbei[p][i]) count++;
    }
    return (count > R - count ? count : R - count);
}

int count_all_cols() {
    int count = 0;
    for (int p = 0; p < C; p++) {
        count += count_col(p);
    }
    return count;
}

int solve(int r) {
    if (r > R) return count_all_cols();
    int turned, not_turned;
    not_turned = solve(r+1);
    senbei[r].flip();
    turned = solve(r+1);
    return (not_turned > turned ? not_turned : turned);
}

int main() {
    while (cin >> R >> C) {
        if (R == 0 && C == 0) break;
        for (int i = 0; i < R; i++) {
            senbei[i].reset();
            for (int j = 0; j < C; j++) {
                int tmp; cin >> tmp;
                if (tmp) {
                    senbei[i].set(j);
                }
            }
        }
        cout << solve(0) << endl;
    }
    return 0;
}