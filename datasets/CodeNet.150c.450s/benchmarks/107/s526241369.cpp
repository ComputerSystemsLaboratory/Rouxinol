#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for (ll(i) = (m); (i) < (n); ++(i))
#define REP(i, n) FOR(i, n, 0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

ll dp[1005][1005];

int main()
{
    string S, T;
    cin >> S >> T;
    REP(i, S.length() + 1)
    {
        dp[i][0] = i;
    }
    REP(i, T.length() + 1)
    {
        dp[0][i] = i;
    }

    REP(i, S.length())
    {
        REP(j, T.length())
        {
            if (S[i] == T[j])
                dp[i + 1][j + 1] = dp[i][j];
            else
                dp[i + 1][j + 1] = std::min(dp[i][j], std::min(dp[i + 1][j], dp[i][j + 1])) + 1;
        }
    }
    cout << dp[S.length()][T.length()] << endl;
    return 0;
}
