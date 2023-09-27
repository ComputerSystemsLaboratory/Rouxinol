#include <bits/stdc++.h>
using namespace std;

const int INF = 0x7fffffff;

int main(){
    int n, m;
    int d[20];
    int dp[50001];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; i++){
        scanf("%d", d + i);
    }
    fill(dp, dp + n + 1, INF);
    dp[0] = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j + d[i] <= n; j++){
            dp[j + d[i]] = min(dp[j + d[i]], dp[j] + 1);
        }
    }
    printf("%d\n", dp[n]);
    return 0;
}