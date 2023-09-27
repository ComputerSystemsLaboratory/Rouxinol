#include <iostream>
#include <cstdio>
#include <cstring>

int n;
long long dp[31];

int main(){
    while(scanf("%d", &n), n){
        memset(dp, 0, sizeof(dp));
        
        dp[0] = 1;
        for(int j = 0; j <= n; ++j){
            for(int i = 1; i <= 3; ++i){
                if(j + i <= n)
                    dp[j + i] += dp[j];
            }
        }
        
        std::cout << dp[n] / 3650 + (dp[n] % 3650 != 0) << std::endl;
    }
    
    return 0;
}