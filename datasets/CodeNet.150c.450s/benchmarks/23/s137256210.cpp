/*
** 斐波那契数列 使用动态规划来避免重复的计算
*/

# include <cstdio>
# include <cstring>

const int MAX = 44 + 5;

int n, dp[MAX];

// 记忆化递归 
/*
int fib(int i) {
    if (dp[i] != 0) {
        return dp[i];
    }
    if (i <= 1) {
        return 1;
    }
    dp[i] = fib(i - 1) + fib(i - 2);
    return dp[i];
}
*/

// 动态规划

int fib(int t) {
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= t; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[t];
}

void solve() {
    scanf("%d", &n);
    memset(dp, 0, sizeof(dp));
    printf("%d\n", fib(n));
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
