#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T &a, T b) { if (a<b) {a=b; return 1;} return 0;}
template<class T> inline bool chmin(T &a, T b) { if (b<a) {a=b; return 1;} return 0;}

int dp[1010][1010];

int main() {
    string s, t;
    cin >> s >> t;
    rep(i, s.size()+1) dp[i][0] = i;
    rep(j, t.size()+1) dp[0][j] = j;

    rep(i, s.size()) {
        rep(j, t.size()) {
            int c = (s[i] == t[j] ? 0 : 1);
            dp[i+1][j+1] = min({dp[i][j+1]+1, dp[i+1][j]+1, dp[i][j] + c});
        }
    }
    cout << dp[s.size()][t.size()] << endl;
}
