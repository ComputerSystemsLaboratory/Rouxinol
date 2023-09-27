#include <cstdio>
#include <algorithm>

using namespace std;

const int kMax = 50000 + 5;
const int kMaxM = 20 + 5;

int n, m;
int coin[kMaxM];
int dp[kMax];

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 0;i < m;++ i) scanf("%d", &coin[i]);
    for(int i = 1;i <= n;++ i) dp[i] = kMax;
    dp[0] = 0;
    for(int j = 0;j < m;++ j) {
        for(int i = 0;i + coin[j] <= n;++ i) {
            dp[i + coin[j]] = min(dp[i + coin[j]], dp[i] + 1);
        }
    }
    printf("%d\n", dp[n]);
    return 0;
}