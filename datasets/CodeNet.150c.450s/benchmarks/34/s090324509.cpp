#include <cstdio>
#include <cstring>
#include <cmath>

int dp[40];

int main(void)
{
    memset(dp, 0, sizeof(dp));

    dp[0] = 1;
    for(int i=0; i < 35; i++)
    {
        dp[i+1] += dp[i];
        dp[i+2] += dp[i];
        dp[i+3] += dp[i];
    }

    while(true) {
        int n;
        scanf("%d", &n);
        if(!n) break;

        printf("%d\n", (int)ceil((double)dp[n]/365/10));

    }

    return 0;
}