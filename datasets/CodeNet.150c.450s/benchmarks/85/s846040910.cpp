#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define debug(x) cerr << #x << ": " << x << endl;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

ll dp[110][110];

int main() {
    ll N;
    cin >> N;
    vll p;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        if(i == 0) p.emplace_back(a);
        p.emplace_back(b);
    }

    rep(i, 110) rep(j, 110) dp[i][j] = INF;
    rep(i, 100) dp[i][i] = 0;

    for(ll l = 2; l <= N; l++) rep(i, N-l+1) {
        ll j = i + l - 1;
        for(ll k = i; k < j; k++) chmin(dp[i][j], dp[i][k] + dp[k+1][j] + p[i] * p[k+1] * p[j+1]);
    }
    cout << dp[0][N-1] << endl;
}

