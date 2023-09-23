#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    while (scanf("%d", &n)&&n!=0) {
        long long int a[n];
        for (int i=0; i<n; i++) scanf("%lld", &a[i]);
        long long int dp[n];
        dp[0] = a[0];
        long long int res = dp[0];
        for (int i=1; i<n; i++) {
            dp[i] = max(a[i], dp[i-1]+a[i]);
            res = max(res, dp[i]);
        }
        printf("%lld\n", res);
    }
}