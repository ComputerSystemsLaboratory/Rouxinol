#include<cstdio>
#include<cstring>

#define MIN(X,Y) ((X)>(Y)?(Y):(X))

int r[1000], c[1000];
int dp[200][200];

int main(void) {
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
        scanf("%d%d",&r[i],&c[i]);

    memset(dp, 0x7F, sizeof(dp));

    for(int i=0; i<n; i++)
        dp[i][i] = 0;
    for(int i=0; i<n-1; i++)
        dp[i][i+1] = r[i]*c[i+1]*r[i+1];

    for(int d=2; d<n; d++)
        for(int i=0; i+d<n; i++)
            for(int j=i; j<i+d; j++)
                dp[i][i+d] = MIN(dp[i][i+d], dp[i][j]+r[i]*c[i+d]*r[j+1]+dp[j+1][i+d]);

    printf("%d\n",dp[0][n-1]);
    return 0;
}