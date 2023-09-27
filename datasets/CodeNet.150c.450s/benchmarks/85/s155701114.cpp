#include <iostream>

using namespace std;

const int N = 102;
int dp[N][N], r[N], c[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &r[i], &c[i]);
    }
    for (int k = 2; k <= n; k++)
    {
        for (int i = 0; i <= n - k; i++)
        {
            int mn = 2e9;
            for (int j = i; j < i + k - 1; j++)
            {
                mn = min(mn, dp[i][j] + dp[j+1][i+k-1] + r[i]*c[j]*c[i+k-1]);
            }
            dp[i][i+k-1] = mn;
        }
    }
    printf("%d\n", dp[0][n-1]);
    return 0;
}

