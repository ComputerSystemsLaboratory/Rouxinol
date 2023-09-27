#include <bits/stdc++.h>

#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, ll, ll> t4;
typedef tuple<ll, ll, ll, ll, ll> t5;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

using namespace std;

static const ll INF = 1e15;


int main() {
    int n;
    cin >> n;
    vector<P> ps(n);
    rep(i, n) {
        //y,x
        cin >> ps[i].first >> ps[i].second;
    }
    vector<vector<ll>> dp(n, vector<ll>(n, INF));
    rep(i, n) {
        dp[i][i] = 0;
    }
    for (int len = 1; len < n; len++) {
        for (int left = 0; left < n-len; left++) {
            int right = left + len;
            for (int middle = left; middle < right; middle++) {
                ll add1 = ps[left].first * ps[middle].second * ps[right].second;
                ll u1 = dp[left][middle] + dp[middle+1][right] + add1;
                dp[left][right] = min(dp[left][right], u1);
            }
        }
    }
    cout << dp[0][n - 1] << endl;
    return 0;
}
