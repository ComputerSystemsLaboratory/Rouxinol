#include <stdio.h>
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
        a[0].push_back(k);
        if(k%2) a[1].push_back(k);
    }
    rep(x, 2) {
        rep(i, 1000001) dp[x][i] = INF;
        dp[x][0] = 0;
        rep(k, a[x].size()) rep(i, 1000001-a[x][k]) {
            dp[x][i+a[x][k]] = min(dp[x][i+a[x][k]], dp[x][i]+1);
        }
    }
    for(;;) {
        int n;
        scanf("%d", &n);
        if(n==0) return 0;
        printf("%d %d\n", dp[0][n], dp[1][n]);
    }
}