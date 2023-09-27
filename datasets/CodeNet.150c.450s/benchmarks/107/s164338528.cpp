#include<stdio.h>
#include<string.h>
int min(int a, int  b){return a>b?b:a;}
int dp[1001][1001];
int main(){
    char s1[1001];
    char s2[1001];
    scanf("%s",&s1);
    scanf("%s",&s2);
    dp[0][0] = 0;
    for(int i = 1; i<=strlen(s1); i++){
        dp[i][0] = i;
    }
    for(int i = 1; i<=strlen(s2); i++){
        dp[0][i] = i;
    }
    for(int i = 1; i<=strlen(s1); i++){
        for(int j = 1; j<=strlen(s2); j++){
            if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1]))+1;
            }
        }
    }
     
    printf("%d\n",dp[strlen(s1)][strlen(s2)]);
    return 0;
}

