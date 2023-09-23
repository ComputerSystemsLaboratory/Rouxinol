#include "bits/stdc++.h"
using namespace std;
using ll = long long; using pii = pair<int, int>;
#define FOR(i,a,b) for(int (i)=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

ll dp[40];

int main() {
    int n;
    while (cin >> n, n) {
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        rep(i, n) {
            FOR(j, 1, 4) dp[i + j] += dp[i];
        }
        ll day = (dp[n] + 10 - 1) / 10;
        cout << (day + 365 - 1) / 365 << "\n";
    }

    return 0;
}

