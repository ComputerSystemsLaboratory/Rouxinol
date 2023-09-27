#include<stdio.h>
#define MAX(A,B) ((A) > (B) ? (A) : (B)) 

int dp[101][10001],v[100],w[100];
int n,W;
int main(void){
    scanf("%d%d",&n,&W);
    for(int i = 0;i < n;i++)
        scanf("%d%d",&v[i],&w[i]);

    for(int i = n - 1;i >= 0;i--){
        for(int j = 0;j <= W;j++){
            if(W < j + w[i])
                dp[i][j] = dp[i + 1][j];
            else{
                dp[i][j] = MAX(dp[i + 1][j],dp[i + 1][j + w[i]] + v[i]);
            }
        }
    }
    printf("%d\n",dp[0][0]);
    return 0;
}