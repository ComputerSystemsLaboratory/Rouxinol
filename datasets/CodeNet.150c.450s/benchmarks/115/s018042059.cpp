#include<bits/stdc++.h>
using namespace std;


int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        string s, t;
        cin >> s >> t;
        int sl = s.size(), tl = t.size();
        int dp[1010][1010];
        dp[0][0] = 0;
        for (int j = 1; j <= sl; ++j) {
            for (int k = 1; k <= tl; ++k) {
                if (s[j - 1] == t[k - 1]) {
                    dp[j][k] = dp[j - 1][k - 1] + 1;
                }
                else {
                    dp[j][k] = max(dp[j - 1][k], dp[j][k - 1]);
                }
            }
        }
        cout << dp[sl][tl] << "\n";
    }
    return 0;
}