#include<bits/stdc++.h>
using namespace std;
#define MAXN 102
#define INF 10000000
int dp[MAXN][MAXN];
int p[MAXN];
int main(){
    int n;
    scanf("%d", &n);
    scanf("%d", p);
    int x;
    for(int i = 1; i < n; i++)
        scanf("%d%d", &x, p + i);
    scanf("%d", p + n);
    for(int i = 1; i <= n; i++)
        dp[i][i] = 0;
    for(int l = 1; l < n; l++){
        for(int i = 1; i + l <= n; i++){
            int j = i + l;
            dp[i][j] = INF;
            for(int k = i; k < j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j]);
            }
        }
    }
    printf("%d\n", dp[1][n]);
    return 0;
}

