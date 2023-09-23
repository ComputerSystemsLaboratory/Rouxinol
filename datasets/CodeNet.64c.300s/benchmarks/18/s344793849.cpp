#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int dp[34] = {0};

    dp[0] = 1;

    for(int i=0;i<31;i++){
        dp[i+1] += dp[i];
        dp[i+2] += dp[i];
        dp[i+3] += dp[i];
    }

    for(int i=0;i<31;i++){
        dp[i] = dp[i]/10;
    }

    while(1){

        int n;

        cin >> n;

        if(n==0) break;

        int ans = dp[n]%365==0 ? dp[n]/365 : dp[n]/365+1;
        
        if(ans==0) ans = 1;

        cout << ans << endl;

    }


    return 0;
}