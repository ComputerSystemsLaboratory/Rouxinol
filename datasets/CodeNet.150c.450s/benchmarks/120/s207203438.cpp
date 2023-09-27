#include <cstdio>
#include <map>
#include <queue>
#include <cstring>

#define PRINTF(...) 

int r, c;
int senbei[10][10000];

static inline int reverses(int case_bits, int row_idx) {
    return (case_bits >> row_idx) & 1;
}

int solve() {
    int max = 0;
    int end = 2 << r;
    // all row reverse cases; 0 -> 2^r
    for (int p = 0; p < end; p++) {
        // reverse and count
        int count = 0;
        for (int x = 0; x < c; x++) {
            int count_row = 0;
            for (int y = 0; y < r; y++) {
                int color2count = reverses(p, y);
                if (senbei[y][x] == color2count) {
                    count_row++;
                }
            }
            count += (count_row > r - count_row) ? count_row : r - count_row;
        }

        if (count > max) {
            max = count;
        }
    }
    return max;
}

int main() {
    while (true) {
        scanf(" %d %d", &r, &c);
        PRINTF("r: %d c: %d\n", r, c);
        if (r == 0 && c == 0)
            break;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (scanf(" %d", &senbei[i][j]) == EOF) 
                    return 0;
            }
        }
        printf("%d\n", solve());
    }
}