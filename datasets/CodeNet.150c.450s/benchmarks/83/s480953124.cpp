#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000007;

int main(){
    int n, W;
    int v[100], w[100];
    scanf("%d%d", &n, &W);
    for(int i = 0; i < n; i++){
        scanf("%d%d", v + i, w + i);
    }
    int dp[100][10001];
    for(int i = 0; i < n; i++){
        fill(dp[i], dp[i] + W + 1, 0);
    }
    fill(dp[0] + w[0], dp[0] + W + 1, v[0]);
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= W; j++){
            dp[i][j] = dp[i-1][j];
            if(j >= w[i]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= W; i++){
        ans = max(ans, dp[n-1][i]);
    }
    printf("%d\n", ans);
    return 0;
}