#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)
#define rrep(i, n) for(int i=n-1; i>=0; i--)
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define ALL(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
const int INF = 1e9;
const ll LLINF = 1e18;
const ll MOD = 1e9+7;
const double EPS = 1e-10;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int dp[1010][1010];

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length(), n2 = s2.length();

    rep(i, n1+1) rep(j, n2+1) dp[i][j] = INF;
    rep(i, n1+1) dp[i][0] = i;
    rep(i, n2+1) dp[0][i] = i;

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            int cost = (s1[i-1] == s2[j-1] ? 0 : 1);
            chmin(dp[i][j], dp[i-1][j] + 1);
            chmin(dp[i][j], dp[i][j-1] + 1);
            chmin(dp[i][j], dp[i-1][j-1] + cost);
        }
    }
    cout << dp[n1][n2] << endl;
}

