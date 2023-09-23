#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    int dp[31] = {};
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    rep(i, 31) if (i > 2) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    int n;
    while(cin >> n, n) {
        int ans = dp[n];
        // cout << ans << endl;
        ans = (ans / 10 + 365) / 365;
        cout << ans << endl;
    }

    return 0;
}