#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_W 10000

int N, W, v[MAX_N], w[MAX_N];
int dp[MAX_N + 1][MAX_W + 1];

void solve();

int main(){
    std::cin >> N >> W;
    for(int i = 0; i < N; ++i)
        std::cin >> v[i] >> w[i];
    
    solve();
    
    return 0;
}

void solve(){
    for(int i = N - 1; i >= 0; --i){
        for(int j = 0; j <= W; ++j){
            if(j < w[i])
                dp[i][j] = dp[i + 1][j];
            else
                dp[i][j] = std::max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
        }
    }
    
    std::cout << dp[0][W] << std::endl;
    return;
}