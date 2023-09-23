/*
** 斐波那契数列 使用动态规划来避免重复的计算
*/

# include <cstdio>
# include <cstring>

const int MAX = 44 + 5;

int n, dp[MAX];

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
