#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F first
#define S second
#define pii pair<int, int>
#define eb emplace_back
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep3(i, l, n) for (int i = l; i < (n); ++i)
#define sz(v) (int)v.size()
#define inf (int)(1e9+7)
#define abs(x) (x >= 0 ? x : -(x))
#define ceil(a, b) a / b + !!(a % b)
template<typename T1, typename T2> inline void chmin(T1 &a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1 &a, T2 b) { if (a < b) a = b; }
ll pow(ll a, int b) { return b ? pow(a * a, b / 2) * (b % 2 ? a : 1) : 1; }
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }



int main() {
    
    
    string s1, s2;
    cin >> s1 >> s2;
    
    int dp[sz(s1) + 2][sz(s2) + 2];
    fill_n(*dp, (sz(s1) + 2) * (sz(s2) + 2), inf);
    dp[0][0] = 0;
    
    rep(i, sz(s1) + 1) {
        dp[i][0] = i;
    }
    rep(i, sz(s2) + 1) {
        dp[0][i] = i;
    }
    
    rep(i, sz(s1) + 1) rep(j, sz(s2) + 1) {
        chmin(dp[i + 1][j], dp[i][j] + 1);
        chmin(dp[i][j + 1], dp[i][j] + 1);
        
        if (s1[i] == s2[j]) {
            chmin(dp[i + 1][j + 1], dp[i][j]);
        } else {
            chmin(dp[i + 1][j + 1], dp[i][j] + 1);
        }
    }
    
    cout << dp[sz(s1)][sz(s2)] << endl;
    
    // rep(i, sz(s1) + 1) { rep(j, sz(s2) + 1) cout << dp[i][j] << " "; cout << endl; }
}

