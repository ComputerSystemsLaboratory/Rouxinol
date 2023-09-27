#include <cstdio>

int fibo(int n, int *dp) {
    if (n == 0 || n == 1) return 1;
    if (0 < dp[n]) return dp[n];
    return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
}

int
main ()
{
    int n;
    int dp[50];
    for (int i=0; i<50; i++) dp[i] = -1;
    scanf("%d", &n);
    printf("%d\n", fibo(n, dp));
    return 0;
}