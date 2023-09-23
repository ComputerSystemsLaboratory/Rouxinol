#include <bits/stdc++.h>
using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const long long INF = 1LL << 60;

int main()
{
    while (true) {
        int N;
        cin >> N;
        long long dp[N+1];
        if (N == 0) {
            break;
        }
        rep(i, N+1) dp[i] = 0;
        dp[0] = 1;
        repd(i, 1, N + 1) {
            dp[i] += dp[i-1];
            if (i > 1) dp[i] += dp[i-2];
            if (i > 2) dp[i] += dp[i-3];
        }
        int ans = dp[N] / 3650;
        if (dp[N] % 3650) ans++;

        cout << ans << endl;
    }

    return 0;
}
