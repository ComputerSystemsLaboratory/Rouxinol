#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for(int i = init; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define fi first
#define se second

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int dp[1010][1010];

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s1, s2;
    cin >> s1 >> s2;

    int len1 = s1.size() + 1, len2 = s2.size() + 1;

    REP(i, len1) REP(j, len2) dp[i][j] = iINF;

    REP(i, len1) dp[i][0] = i;   
    REP(i, len2) dp[0][i] = i;

    FOR(i, 1, len1)
    {
        FOR(j, 1, len2)
        {
            int cost = s1[i - 1] == s2[j - 1] ? 0 : 1;

            dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + cost});
        }
    }

    cout << dp[len1 - 1][len2 - 1] << endl;

    return 0;
}
