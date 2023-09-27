#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, s, ans, dp[1<<8][15];

void rec(int base, int sum, int used) {
    if(sum == s) {
        if(used == n) ans += 1;
    }
    if(sum > s || used > n) return;
    for(int i = base; i < 10; i++) {
        rec(i + 1, sum + i, used + 1);
    }
}

int main(void) {
    while(scanf("%d%d", &n, &s) == 2 && !(n + s == 0)) {
        ans = 0;
        memset(dp, 0, sizeof(dp));
        rec(0, 0, 0);
        printf("%d\n", ans);
    }
    return 0;
}