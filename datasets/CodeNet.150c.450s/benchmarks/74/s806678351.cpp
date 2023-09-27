#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 500000 + 10;
const int INF = ~0u >> 2;
int dp[MAX_N], c[22];

int main() {
    int n, m;
   // freopen("F:\\in.txt", "r", stdin);
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &c[i]);
    }
    fill(dp, dp + n + 1, INF);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            if(i >= c[j]) {
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }
    printf("%d\n", dp[n]);
    return 0;
}