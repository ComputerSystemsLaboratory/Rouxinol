#include<bits/stdc++.h>
using namespace std;

int dp[30];

int main(){

    dp[0] = 1;dp[1] = 2;dp[2] = 4;
    for(int i=3;i<30;++i){
        dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
    }

    while(1){
        int n;
        scanf("%d",&n);
        if(n == 0)break;
        printf("%.0f\n",ceil(dp[n-1]/(365.0*10.0)));
    }

    return 0;
}