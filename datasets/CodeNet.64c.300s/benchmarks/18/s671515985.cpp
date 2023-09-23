#include<iostream>

using namespace std;

int main(){

    while(1){
        int n;
        cin>> n;
        if(n==0) break;

        int dp[31];
        fill(dp, dp+31, 0);
        dp[1]=1; dp[2]=2; dp[3]=4;
        for(int i=4; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }

        cout<< (dp[n]+3650-1)/3650<< endl;
    }

    return 0;
}