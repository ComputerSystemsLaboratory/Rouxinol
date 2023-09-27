#include <iostream>
#include <string>
#include <algorithm>

constexpr int MAX_XY = 1010;

int lx, ly, q, dp[MAX_XY][MAX_XY];
std::string sx, sy;

void fill_dp(){
    for(int i = 1; i <= lx; ++i){
        for(int j = 1; j <= ly; ++j){
            if(sx[i - 1] == sy[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
}

void solve(){
    fill_dp();
    std::cout << dp[lx][ly] << std::endl;
    return;
}

int main(){
    std::cin >> q;
    
    for(int i = 0; i < q; ++i){
        std::cin >> sx >> sy;
        lx = sx.size(), ly = sy.size();
        solve();
    }
    return 0;
}