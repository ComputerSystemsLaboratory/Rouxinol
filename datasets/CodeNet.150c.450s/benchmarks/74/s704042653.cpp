#include <stdio.h>

int main() {
    int INF = 100000000;
    int n, m; scanf("%d%d", &n, &m);
    int c[30];
    for(int i=0; i<m; i++) scanf("%d", &c[i]);

    int dp[30][50010];
    for(int i=0; i<=m; i++) {
        for(int j=0; j<50010; j++) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for(int i=1; i<=m; i++) {
        for(int j=0; j<50010; j++) {
            dp[i][j] = dp[i-1][j];
            if(j-c[i-1] < 0) continue;
            if(dp[i][j] > dp[i][j-c[i-1]] + 1) dp[i][j] = dp[i][j-c[i-1]] + 1;
        }
    }
    printf("%d\n", dp[m][n]);
    return 0;
}