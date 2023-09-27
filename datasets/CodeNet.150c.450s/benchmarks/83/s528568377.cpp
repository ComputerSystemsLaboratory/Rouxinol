#include<cstdio>
#include<algorithm>

int dp[101][10001];

int main(){
    int n, w;
    scanf("%d %d\n", &n, &w);
    int val[n], wei[n];
    for(int i=1; i<=n; i++){
        scanf("%d %d\n",&val[i], &wei[i]);
    }
    // init. dp table
    for(int i=0; i<=n; i++){
        dp[i][0] = 0;
    }
    for(int j=0; j<=w; j++){
        dp[0][j] = 0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=w; j++){
            if(wei[i]<=j){
                dp[i][j] = std::max(dp[i-1][j-wei[i]] + val[i], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    printf("%d\n", dp[n][w]);
/*
    for(int i=0; i<=n; i++){
        for(int j=0; j<=w; j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
*/

    return 0;
}