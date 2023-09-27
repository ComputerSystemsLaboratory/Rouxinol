#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int dp[1010][1010];

int main() {
    string s, t; cin >> s >> t;
    int slen = s.length();
    int tlen = t.length();
    for(int i = 0; i <= slen+1; ++i) {
        for(int j = 0; j <= tlen+1; ++j) {
            dp[i][j] = 1e9;
        }
    }
    dp[0][0] = 0;
    for(int i = 0; i <= slen; ++i) {
        for(int j = 0; j <= tlen; ++j) {
            chmin(dp[i+1][j], dp[i][j]+1);
            chmin(dp[i][j+1], dp[i][j]+1);
            if(i < slen && j < tlen) {
                if(s[i] != t[j]) chmin(dp[i+1][j+1], dp[i][j]+1);
                else chmin(dp[i+1][j+1], dp[i][j]);
            }
        }
    }
    cout << dp[slen][tlen] << endl;
}
