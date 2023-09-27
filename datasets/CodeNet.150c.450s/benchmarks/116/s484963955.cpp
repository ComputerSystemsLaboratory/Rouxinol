#include <algorithm>
#include <cstdio>
typedef long long ll;
ll dp[100000];
int v[100000];
int main()
{
    int n, k;
    while (scanf("%d%d", &n, &k), n|k) {
        for (int i=0; i<n; ++i) scanf("%d", v+i);
        dp[k-1] = 0;
        for (int i=0; i<k; ++i) dp[k-1] += v[i];
        for (int i=k; i<n; ++i) dp[i] = dp[i-1] - v[i-k] + v[i];
        printf("%lld\n", *std::max_element(dp+k-1, dp+n));
    }
    return 0;
}