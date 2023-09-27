#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, W;

    cin >> n >> W;

    int v[n], w[n];
    int dp[W + 1];

    for(int i = 0; i < n; ++i) {
        cin >> v[i] >> w[i];
    }

    fill(dp, dp + W + 1, 0);

    for(int i = 0; i < n; ++i) {
        for(int j = W; j >= w[i]; --j) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    cout << dp[W] << endl;

}