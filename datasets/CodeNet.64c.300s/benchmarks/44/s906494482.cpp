#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int dp[50][50];
int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        memset(dp, 50, sizeof(dp));
        for(int i = 0; i < n; i++)
        {
            int a, b, c;
            scanf("%d%d%d", &a, &b, &c);
            dp[a][b] = dp[b][a] = min(dp[a][b], c);
        }
        for(int k = 0; k <= 15; k++)
            for(int i = 0; i <= 15; i++)
                for(int j = 0; j <= 15; j++)
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
        int a = 0, b = 10000;
        for(int i = 0; i <= 15; i++)
        {
            int tmp = 0;
            for(int j = 0; j <= 15; j++)
            {
                if(dp[i][j] < 1000000 && j != i)
                    tmp += dp[i][j];
            }
            if(tmp && tmp < b)
            {
                a = i;
                b = tmp;
            }
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}