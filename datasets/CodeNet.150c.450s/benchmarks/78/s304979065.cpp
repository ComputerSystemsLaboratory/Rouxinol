#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
#define rep(i, n) for(int i=0; i<(int)(n); i++)
#define INF (1<<28)

int dp[2][1000001];

int main() {
    vector<int> a[2];
    for(int i=1;; i++) {
        const int k = i*(i+1)*(i+2)/6;
        if(k>1000000) break;
        if(k%2) a[0].push_back(k);
        else a[1].push_back(k);
    }
    rep(i, 1000001) dp[0][i] = INF;
    dp[0][0] = 0;
    rep(k, a[0].size()) rep(i, 1000001-a[0][k]) {
        dp[0][i+a[0][k]] = min(dp[0][i+a[0][k]], dp[0][i]+1);
    }
    memcpy(dp[1], dp[0], sizeof(dp[0]));
    rep(k, a[1].size()) rep(i, 1000001-a[1][k]) {
        dp[0][i+a[1][k]] = min(dp[0][i+a[1][k]], dp[0][i]+1);
    }
    for(;;) {
        int n;
        scanf("%d", &n);
        if(n==0) return 0;
        printf("%d %d\n", dp[0][n], dp[1][n]);
    }
}