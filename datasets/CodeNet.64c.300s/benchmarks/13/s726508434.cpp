#include <iostream>

using namespace std;

int dp[100];

int main() {
    int n;
    cin >> n;
    fill(dp, dp + 100, -1);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << endl;
}