#include <bits/stdc++.h>
using namespace std;

const int INF = 0x7fffffff;

const int MAX_N = 200000;

int main(){
    int N;
    int r[MAX_N];
    int dp[MAX_N];
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", r + i);
    }
    fill(dp, dp + N, INF);
    int ans = -INF;
    dp[0] = r[0];
    for(int i = 1; i < N; i++){
        ans = max(ans, r[i] - dp[i-1]);
        dp[i] = min(r[i], dp[i-1]);
    }
    printf("%d\n", ans);
    return 0;
}