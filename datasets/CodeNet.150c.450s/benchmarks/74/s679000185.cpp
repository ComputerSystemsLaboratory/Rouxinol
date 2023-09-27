#include <cstdio>
#include <algorithm>
using namespace std;

#define INF 0x33433433

int n;
int m;
int c[20];
int dp[50001];

int main() {
    scanf("%d%d", &n, &m);
    for (int i=0; i<m; i++) {
        scanf("%d", &c[i]);
    }

    fill(dp, dp+50001, INF);
    dp[0] = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (i+c[j] <= n) {
                dp[i+c[j]] = min(dp[i+c[j]], dp[i]+1);
            }
        }
    }

    printf("%d\n", dp[n]);
}