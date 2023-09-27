#include <iostream>
#include <vector>
int INF = 1e9;
int main(){
    int n;
    std::cin >> n;
    std::vector<int> g(n), re(n);
    for(int i = 0; i < n; i++) std::cin >> g[i] >> re[i];
    int dp[n + 1][n + 1];
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++) dp[i][j] = INF;
        if(i < n) dp[i][i + 1] = 0;
        dp[i][i] = 0;
    }
    for(int w = 1; w < n + 1; w++){
        for(int l = 0; l < n; l++){
            int r = l + w;
            if(r > n) break;
            if(r - l == 2) dp[l][r] = g[l]*re[l + 1]*g[r - 1];
            for(int mid = l + 1; mid < r; mid++){
                dp[l][r] = std::min(dp[l][mid] + dp[mid][r] + g[l]*re[r- 1]*re[mid - 1], dp[l][r]);
            }
        }
    }
    std::cout << dp[0][n] << std::endl;
}
