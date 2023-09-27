#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int INF = 1000000000;

int main() {
    int n, m;
    while(cin >> n >> m) {
        vector<int> coin(m);
        for(auto& d: coin) cin >> d;
        sort(coin.begin(), coin.end());

        vector<int> dp(n + 1, INF);
        dp[0] = 0;
        for(const auto& d: coin) {
            for(int sum = 0; sum + d <= n; ++sum) 
                dp[sum + d] = min(dp[sum + d], dp[sum] + 1);
//             for(int sum = n; sum - d >= 0; sum--) 
//                 dp[sum] = min(dp[sum], dp[sum - d] + 1);
        }
        cout << dp[n] << endl;
    }
}