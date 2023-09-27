#include<stdio.h>
#include<algorithm>

int dp[50001];
const int INF = 114514;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int c[m];
    for(int j=0; j<m; j++){
        scanf("%d\n", &c[j]);
    }

    // initialize dp table
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        dp[i] = INF;
    }
    for(int l=0; l<m; l++){
        for(int k=c[l]; k<=n; k++){
            dp[k] = std::min(dp[k], dp[k - c[l]] + 1);
        }
    }
    printf("%d\n",dp[n]);

    return 0;
}