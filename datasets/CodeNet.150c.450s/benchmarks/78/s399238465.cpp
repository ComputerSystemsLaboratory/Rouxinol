#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

int dp[500];
int dp1[11111500];
int dp2[11111100];
int main(){
    dp[1]=1;
    for(int i=2;i<210;i++){
        dp[i]=dp[i-1]+i;
    }
    for(int i=2;i<210;i++){
        dp[i]=dp[i-1]+dp[i];
    }
   // fill(dp,dp+400,0);
    fill(dp1,dp1+1111100,99999999);
    fill(dp2,dp2+1111100,99999999);
    dp1[0]=0;dp2[0]=0;
    for(int i=1;i<210;i++){
        int now=dp[i];
        for(int k=now;k<1100000;k++){
            if(dp1[k]>dp1[k-now]+1){
                dp1[k]=dp1[k-now]+1;
            }
        }
    }
    for(int i=1;i<300;i++){
        int now=dp[i];
        if(now%2==0)
            continue;
        for(int k=now;k<1100000;k++){
            if(dp2[k]>dp2[k-now]+1)
                dp2[k]=dp2[k-now]+1;
        }
    }
    int n;
    while(1){
        cin>>n;
        if(n==0)break;
        cout<<dp1[n]<<" "<<dp2[n]<<endl;
    }
    return 0;
}