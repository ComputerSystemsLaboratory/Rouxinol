#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int R, C;
int sheet[101][101];

int main(void) {

    cin >> R >> C;

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            cin >> sheet[r][c];
            sheet[r][C] += sheet[r][c];
            sheet[R][c] += sheet[r][c];
            printf("%d ", sheet[r][c]);
        }
        sheet[R][C] += sheet[r][C];
        printf("%d\n", sheet[r][C]);
    }

    for (int c = 0; c < C; ++c) {
        printf("%d ", sheet[R][c]);
    }
    printf("%d\n", sheet[R][C]);

    return 0;
}