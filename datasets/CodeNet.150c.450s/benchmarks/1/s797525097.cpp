#include <cstdio>
#include <algorithm>
using namespace std;
static const long long INFTY = 10000000000;
long long a[100000];
long long dp[100000];


int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    fill(dp, dp+n, INFTY);
    for (int i = 0; i < n; i++) {
        *lower_bound(dp, dp+n, a[i]) = a[i];
    }
    printf("%ld\n", lower_bound(dp, dp+n, INFTY)-dp);

    return 0;
}

