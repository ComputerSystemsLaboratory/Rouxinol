#include <cstdio>
#include <algorithm>
using namespace std;

int N;
int W;
int ans;
int v[100];
int w[100];
int dp[101][10001];

int main() {
    scanf("%d%d", &N, &W);
    for (int i=0; i<N; i++) {
        scanf("%d%d", &v[i], &w[i]);
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<=W; j++) {
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
            
        for (int j=0; j<=W; j++) {
            if (j + w[i] <= W) {
                dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j]+v[i]);
            }
        }
    }

    for (int i=0; i<=W; i++) {
        ans = max(ans, dp[N][i]);
    }
    printf("%d\n", ans);
}