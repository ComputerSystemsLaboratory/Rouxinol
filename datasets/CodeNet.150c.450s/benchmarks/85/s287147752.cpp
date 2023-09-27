#include <stdio.h>
//https://www.geeksforgeeks.org/dynamic-programming-set-8-matrix-chain-multiplication/
//return the cost
/*int cal(int a[],int i, int j){
    if(i==j) return 0;
    int min = 1<<30;
    //printf("%d\n",min);
    for(int k = i; k<j; k++){
        int count = cal(a, i, k)+cal(a,k+1, j)+a[i-1]*a[k]*a[j];
        if(count<min) min = count;
    }
    
    return min;
}*/

int main()
{
    int n;
    scanf("%d",&n);
    int x[n+2], y[n+2];
    int dp[n+2][n+2];
    for(int i = 1; i<=n; i++){
        scanf("%d %d",&x[i],&y[i]);
        dp[i][i] = 0;
    } x[n+1] = y[n];
    dp[n+1][n+1] = 0;
    int min = 1<<30;
    for(int m = 2; m<=n+1; m++){
        for(int i = 2; i<=n+2-m ; i++){
            int j = i+m-1;
            dp[i][j] = 1<<30;
            for(int k = i; k<j; k++){
                int count = dp[i][k]+dp[k+1][j]+x[i-1]*x[k]*x[j];
                if(count<dp[i][j]) dp[i][j] = count;
            }
        }
        
    }
    
    //printf("%d\n",cal(x, 2,n+1));
    printf("%d\n",dp[2][n+1]);
    return 0;
}

