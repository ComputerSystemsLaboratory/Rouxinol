#include <stdio.h>
#include <algorithm>
#include <cstring>
typedef long long int lli;

lli dp[100][21];
int tbl[100];

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=0; i < n; i++)
        scanf("%d", &tbl[i]);

    memset(dp, 0, sizeof(dp));
    dp[0][tbl[0]] = 1;

    for(int i=0; i < n; i++)
    {
        for(int j=0; j < 21; j++)
        {
            if(j+tbl[i+1] <= 20)
                dp[i+1][j+tbl[i+1]] += dp[i][j];
            if(j-tbl[i+1] >= 0)
                dp[i+1][j-tbl[i+1]] += dp[i][j];
        }
    }
    printf("%ld\n", dp[n-1][tbl[n]]);
}