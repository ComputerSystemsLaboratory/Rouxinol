//
// Created by Tnecesoc on 2017/4/14.
//

#include <stdio.h>
#include <bitset>

using namespace std;

const int MAX_R = 20;
const int MAX_C = 10000 + 10;

int field[MAX_R][MAX_C];

bitset<MAX_C> toast[MAX_R];

void solve(int fr, int r, int c, int &min) {

    if (fr >= r) {

        int sum = 0;

        for (int i = 0; i < c; ++i) {
            int row_sum = 0;
            for (int j = 0; j < r; ++j) {
                if (toast[j][i]) {
                    row_sum++;
                }
            }

            sum += row_sum < r - row_sum ? row_sum : r - row_sum;
        }

        if (min > sum) {
            min = sum;
        }

        return;
    } else {

        solve(fr + 1, r, c, min);

        toast[fr].flip();

        solve(fr + 1, r, c, min);

    }

}

int main() {
    
    int r, c;
    while (~scanf("%d %d", &r, &c), r | c) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                scanf("%d", &field[i][j]);
                toast[i].set((size_t) j, (bool) field[i][j]);
            }
        }

        int ans = 0x7fffffff;
        solve(0, r, c, ans);
        printf("%d\n", r * c - ans);
    }

    return 0;
}