#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dp[16][64];

int main() {
    dp[0][0] = 1;
    rep (k, 10) {
        for (int i = 10; i >= 0; i--) {
            rep (j, 64) if (dp[i][j]) dp[i+1][j+k] += dp[i][j];
        }
    }
    for (;;) {
        int n, s;
        scanf("%d%d", &n, &s);
        if (n == 0 && s == 0) return 0;
        printf("%d\n", n < 16 && s < 64 ? dp[n][s] : 0);
    }
}