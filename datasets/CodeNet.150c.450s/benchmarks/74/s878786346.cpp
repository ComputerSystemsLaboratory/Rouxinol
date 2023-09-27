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

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> dp(n+1,IINF), c(m);
    REP(i,m)cin >> c[i];
    dp[0] = 0;
    REP(i,n+1){
        REP(j,m){
            if(i>=c[j])dp[i] = min(dp[i-c[j]] + 1, dp[i]);
        }
    }
    cout << dp[n] << endl;
    return 0;
}

