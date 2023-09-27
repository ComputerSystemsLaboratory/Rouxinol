#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
typedef pair<ll, pair<ll, ll> > P3;

const ll MOD = ll(1e9 + 7);
const ll LLINF = LLONG_MAX;
const int IINF = INT_MAX;
const int MAX_N = int(1e5) + 5;
const double EPS = 1e-8;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int dp[1005][1005]{};

int main() {
    string s,t;
    cin >> s >> t;
    REP(i,s.size()+1)fill(dp[i],dp[i]+t.size()+1,999999);
    REP(i,s.size()+1)dp[i][0] = i;
    REP(j,t.size()+1)dp[0][j] = j;
    REP(i,s.size()){
        REP(j,t.size()){
            if(s[i]==t[j])dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j]);
            dp[i+1][j+1] = min(dp[i+1][j+1],dp[i+1][j]+1);
            dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j+1]+1);
            dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j]+1);
        }
    }
    cout << dp[s.size()][t.size()] << endl;
    return 0;
}

