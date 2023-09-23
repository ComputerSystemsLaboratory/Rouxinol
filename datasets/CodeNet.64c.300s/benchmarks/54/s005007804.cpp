#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
long long int dp[100000][30] = {0};
using namespace std;
int main(){
    int n;
    scanf("%d",&n);

    int a[10000]={0};
    for(int i = 0;i < n; i++)scanf("%d",&a[i]);

    memset(dp,0,sizeof(dp));

    dp[0][a[0]] = 1;
    int v = 0;
    for(int i = 1;i < n-1; i++){
        for(int j = 0;j <= 20; j++){
            if(dp[i-1][j] > 0){
                v = j + a[i];
                if(v <= 20){
                    dp[i][v] += dp[i-1][j];
                }
                v = j-a[i];
                if(v >= 0){
                    dp[i][v] += dp[i-1][j];
                }
            }
        }
    }
    printf("%lld\n",dp[n-2][a[n-1]]);
    return 0;
}