#include <stdio.h>
#include <algorithm>
using namespace std;
int N,W,v[200],w[200];
int dp[20000][200] = {0};
int ex(int sum,int n)
{
    int res=0;
    if(dp[sum][n] != 0)return dp[sum][n];
    if(n == N)return 0;
    if(sum + w[n] > W)return ex(sum,n + 1);
    dp[sum][n] = max(ex(sum,n + 1),ex(sum + w[n],n + 1) + v[n]);
    return dp[sum][n];
}
int main()
{
    scanf("%d%d",&N,&W);
    for(int i = 0; i < N; i++)
    {
        scanf("%d%d",&v[i],&w[i]);
    }
    printf("%d\n",ex(0,0));
}