#include <cstdio>
#include <algorithm>

using namespace std;

const int kMax = 100 + 5;

int n;
int num[kMax], dp[kMax][kMax];

int main() {
    scanf("%d", &n);
    for(int i = 1;i <= n;++ i) scanf("%d%d", &num[i-1], &num[i]);
    for(int l = 2;l <= n;++ l) {
        for(int i = 1;i <= n - l + 1;++ i) {
            int j = i + l - 1;
            dp[i][j] = (1 << 30);
            for(int k = i;k < j;++ k) dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + num[i-1] * num[k] * num[j]);
        }
    }
    printf("%d\n", dp[1][n]);
    return 0;
}