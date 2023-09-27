#include <cstdio>
#include <vector>

using namespace std;

using i64=long long;

const i64 INF=1LL<<61;

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> r(n), c(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d %d", &r[i], &c[i]);

    vector<vector<i64>> dp(n, vector<i64>(n, INF));
    for (size_t i=0; i<n; ++i) dp[i][i] = 0;

    for (size_t k=1; k<n; ++k)
        for (size_t i=0; i+k<n; ++i) {
            size_t j=i+k;
            for (size_t m=i; m<j; ++m) {
                i64 tmp=dp[i][m]+dp[m+1][j]+r[i]*c[j]*c[m];
                if (dp[i][j] > tmp)
                    dp[i][j] = tmp;
            }
        }

    printf("%lld\n", dp[0][n-1]);
    return 0;
}