#include <iostream>
#include <cstring>

const unsigned int MAX_N = 35;

int N;
int dp[MAX_N];

int main(){
    while(true){
        std::cin >> N;
        if(N == 0)
            break;
        
        memset(dp, 0, sizeof(dp));
        ++N;
        dp[0] = 1;

        for(int i = 0; i < N - 1; ++i){
           for(int j = 1; j <= 3; ++j){
                dp[i + j] += dp[i];
            }
        }

        int ans = dp[N - 1] / 3650 + (dp[N - 1] % 3650 != 0);

        std::cout << ans << std::endl;
    }
    return 0;
}