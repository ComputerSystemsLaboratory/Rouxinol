#include <stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
typedef long long lint;
int i,j;
int dp[5050][5050]={};
#define INF (1<<30)

int main(void){
    char S[5050],T[5050];
    scanf("%s",S);
    scanf("%s",T);
    int N=strlen(S),K=strlen(T);
    for(i=0;i<=N;i++) dp[i][0]=i;
    for(i=0;i<=K;i++) dp[0][i]=i;
    for(i=1;i<=N;i++) for(j=1;j<=K;j++){
        int min=INF;
        int add=S[i-1]==T[j-1]?0:1;
        if(dp[i-1][j-1]+add<min) min=dp[i-1][j-1]+add;
        if(dp[i-1][j]+1<min) min=dp[i-1][j]+1;
        if(dp[i][j-1]+1<min) min=dp[i][j-1]+1;
        dp[i][j]=min;
    }
    printf("%d\n",dp[N][K]);
}
