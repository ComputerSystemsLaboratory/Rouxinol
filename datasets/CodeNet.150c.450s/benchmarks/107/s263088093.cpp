#include <bits/stdc++.h>
using namespace std;
struct Fast {
    Fast() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} fast;

int main() {
    string x, y;
    cin >> x >> y;
    vector<vector<long>> dp(x.size() + 1, vector<long>(y.size() + 1));
    // dp[i][j] edit distance from x[i] to y[i]
    for (int j = 0; j <= x.size(); j++) {
        dp[j][0] = j;
    }
    // cout << "hogrider" << endl;
    for (int j = 0; j <= y.size(); j++) {
        dp[0][j] = j;
    }
    // cout << "hogrider" << endl;
    for (int i = 1; i <= x.size(); i++) {
        for (int j = 1; j <= y.size(); j++) {
            int cost;
            if (x[i - 1] == y[j - 1]) {
                cost = 0;
            }
            if (x[i - 1] != y[j - 1]) {
                cost = 1;
            }
            dp[i][j] = min({dp[i][j - 1] + 1, dp[i - 1][j] + 1, dp[i - 1][j - 1] + cost});
        }
    }
    // cout << "hogrider" << endl;
    cout << dp[x.size()][y.size()] << endl;
}
