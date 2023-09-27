#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> c(m);
    for (int i=0; i<m; i++)
        scanf(" %d", &c[i]);
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    for (int i=0; i<=n; i++)
        for (int j=0; j<m; j++)
            if (i - c[j] >= 0)
                dp[i] = min(dp[i-c[j]]+1, dp[i]);
    printf("%d\n", dp[n]);
    return 0;
}