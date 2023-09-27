#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const int M = 1000000007;

int main() {
    int lim = 1000010;
    vector<int> dp(lim, lim);
    vector<int> oddp(lim, lim);
    vector<int> lis;
    for (int i = 1; ; ++i) {
        int p = i * (i + 1) * (i + 2) / 6;
        if (p > lim) break;
        lis.push_back(p);
    }
    dp[0] = oddp[0] = 0;
    for (int i = 1; i < lim; ++i) {
        for (int j : lis) {
            if (j > i) break;
            dp[i] = min(dp[i], dp[i - j] + 1);
            if (j & 1)
                oddp[i] = min(oddp[i], oddp[i - j] + 1);
        }
    }
    while (1) {
        int n;
        cin >> n;
        if (!n) return 0;

        cout << dp[n] << " " << oddp[n] << "\n";
    }
}