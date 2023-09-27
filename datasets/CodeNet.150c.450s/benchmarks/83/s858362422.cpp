#include <stdio.h>
int dp[10001] = {0};
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int N, W, weight, value;
    scanf("%d%d", &N, &W);
    for(int i = 0;i < N;i++) {
        scanf("%d%d", &value, &weight);
        for(int j = W; j >= weight; j--)
            dp[j] = max(dp[j], dp[j - weight] + value);
    }
    printf("%d\n", dp[W]);
    return 0;
}