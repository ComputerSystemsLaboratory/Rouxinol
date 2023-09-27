#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int mod=1000000007;
    int n,s,ans;
    int dp[11][101]={0};
    dp[0][0]=1;
    for (int i=0;i<10;++i) {
        for (int j=i;j>=0;--j) {
            for (int k=0;k+i<=100;++k) {
                dp[j+1][k+i]+=dp[j][k];
            }
        }
    }
    for (;;) {
        scanf("%d %d",&n,&s);
        if (n==0 && s==0) break;
        printf("%d\n",dp[n][s]);
    }
    return 0;
}