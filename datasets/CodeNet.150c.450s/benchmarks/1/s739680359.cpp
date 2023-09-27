#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define FORR(x, arr) for (auto& x : arr)
#define ITR(x, c) for (__typeof(c.begin()) x = c.begin(); x != c.end(); x++)
#define ALL(a) (a.begin()), (a.end())
#define ZERO(a) memset(a, 0, sizeof(a))
#define MINUS(a) memset(a, 0xff, sizeof(a))
//-------------------------------------------------------

int N;
ll dp[114514];

void solve() {
    cin >> N;

    REP(i, N) dp[i] = 1LL << 60;

    long int ans = 0;

    REP(i, N) {
        ll x;
        cin >> x;
        auto iter = lower_bound(dp, dp + N, x);
        *iter = x;

        ans = max(ans, (iter - dp) + 1);
    }

    cout << ans << endl;
}

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

