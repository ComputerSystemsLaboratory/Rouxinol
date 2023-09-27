#include <bits/stdc++.h>
using namespace std;

//------------------
using pii = pair<int,int>;
template<class T> inline bool chmax(T& a, T b) {if(a<b) {a=b;return true;} return false;}

struct LevenshteinDistance {
    int LD(string& s, string& t) {
        int ns = s.size(), nt = t.size();
        vector<vector<int>> dp(ns+1, vector<int>(nt+1));
        vector<vector<pii>> prev;
        dp[0][0] = 0;
        for ( int i = 0; i < ns; i++ ) {
            dp[i+1][0] = i+1;
        }
        for ( int j = 0; j < nt; j++ ) {
            dp[0][j+1] = j+1;
        }
        for ( int i = 0; i < ns; i++ ) {
            for ( int j = 0; j < nt; j++ ) {
                int c = s[i] == t[j] ? 0 : 1;
                dp[i+1][j+1] = min({dp[i][j+1] + 1, dp[i+1][j] + 1, dp[i][j] + c});
            }
        }
        return dp[ns][nt];
    }
};

//-----------------------
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_E&lang=jp
int solve() {
    string S, T;
    cin >> S >> T;
    LevenshteinDistance ld;
    int ans = ld.LD(S,T);
    return ans;
}

int main() {
    auto ans = solve();
    cout << ans << "\n";
    return 0;
}
