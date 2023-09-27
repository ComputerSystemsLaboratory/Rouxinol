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

int dp[105][10005]{};

int main() {
    int n,W,v[105],w[105];
    cin >> n >> W;
    REP(i,n)cin >> v[i] >> w[i];
    REP(i,n){
        REP(j,W+1){
            if(j>=w[i])dp[i+1][j]=max(dp[i+1][j],dp[i][j-w[i]]+v[i]);
            dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
        }
    }
    cout << dp[n][W] << endl;
    return 0;
}

