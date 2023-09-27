#include <cstdio>

using namespace std;

// row, column
int S[11][5];

int main() {
    for (;;) {
        int H;
        scanf("%d", &H);

        if (!H) { break; }

        for (int i = H - 1; i >= 0; i--) {
            scanf("%d%d%d%d%d", &S[i][0], &S[i][1], &S[i][2], &S[i][3], &S[i][4]);
        }

        for (int i = H; i < 11; i++) {
            S[i][0] = S[i][1] = S[i][2] = S[i][3] = S[i][4] = -2;
        }

        int p = 0;
        for (;;) {
            bool disappear = false;
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 3; j++) {
                    if (S[i][j] < 0) { break; }

                    int k = 1;
                    for (; j + k < 5 && S[i][j + k] == S[i][j]; k++);

                    if (k >= 3) {
                        disappear = true;
                        p += S[i][j] * k;
                        for (int l = 0; l < k; l++) {
                            S[i][j + l] = -1;
                        }
                    }
                }
            }

            if (!disappear) { break; }

            for (int i = 0; i < 5; i++) {
                for (int j = 0; ; j++) {
                    if (S[j][i] == -2) { break; }
                    else if (S[j][i] == -1) {
                        int k = 1;
                        for (;; k++) {
                            if (S[j + k][i] == -2) { S[j][i] = -2; goto next_col; }
                            if (S[j + k][i] != -1) { break; }
                        }

                        for (int l = 0; ; l++) {
                            S[j + l][i] = S[j + k + l][i];
                            if (S[j + k + l][i] == -2) { break; }
                        }
                    }
                }
next_col:;
            }

#if 0
            for (int i = 10; i >= 0; i--) {
                printf("%d %d %d %d %d\n", S[i][0], S[i][1], S[i][2], S[i][3], S[i][4]);
            }
#endif
        }

        printf("%d\n", p);
    }
    return 0;
}