#include<bits/stdc++.h>
using namespace std;

int main() {

    while(1){
        int n;
        cin >> n;
        if (!n) return 0;
        vector<long long> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i - 1] + (i > 1 ? dp[i - 2] : 0) + (i > 2 ? dp[i - 3] : 0);
        }
        cout << (dp[n] + 3650 - 1) / 3650 << "\n";
    }
}

