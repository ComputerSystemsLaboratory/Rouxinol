#include <cstdio>
#include <algorithm>
using namespace std;

#define INF 0x7fffffff

int n;
int dp[100001];

int main() {
    scanf("%d", &n);
    fill(dp, dp+n, INF);
    for (int i=0; i<n; i++) {
        int a;

        scanf("%d", &a);
        *lower_bound(dp, dp+n, a) = a;
    }

    printf("%ld\n", lower_bound(dp, dp+n, INF) - dp);
}