#include<cstdio>
#include<algorithm>
using namespace std;
int a[99];
long long dp[100][21];
int main(){
    int n;
    fill(dp[0],dp[0]+2100,0);
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d",a+i);
    }
    dp[0][a[0]]=1;
    int m;
    scanf("%d",&m);
    for(int i=1;i<n-1;i++){
        for(int j=0;j<21;j++){
            if(j+a[i]>=0&&j+a[i]<=20) dp[i][j+a[i]]+=dp[i-1][j];
            if(j-a[i]>=0&&j-a[i]<=20) dp[i][j-a[i]]+=dp[i-1][j];
        }
    }
    printf("%lld\n",dp[n-2][m]);
    return 0;
}