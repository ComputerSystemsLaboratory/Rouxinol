#include <iostream>
#include <vector>
#include <algorithm>
int INF = 1e9;
int main(){
    int N;
    std::cin >> N;
    std::vector<int> a(N);
    for(int i = 0; i < N; i++) std::cin >> a[i];
    std::vector<int> dp(N, INF);
    for(int i  = 0; i < N; i++){
        int t = std::lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
        dp[t] = a[i];
    }
    int ans = 0;
    for(int i = 0; i < N; i++){
        if(dp[i] != INF) ans = i + 1;
        else break;
    }
    std::cout << ans << std::endl;
}
