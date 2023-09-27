#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

const int SIZE = 1010;
int dp[SIZE][SIZE];

int editDistance(string s, string t){
    rep(i, 0, SIZE) rep(j, 0, SIZE) dp[i][j] = 0;
    rep(i, 0, SIZE) dp[i][0] = i;
    rep(i, 0, SIZE) dp[0][i] = i;
    rep(i, 0, s.size()){
        rep(j, 0, t.size()){
            int cost = (s[i] == t[j]) ? 0 : 1;
            dp[i + 1][j + 1] = min(dp[i][j] + cost, min(dp[i + 1][j] + 1, dp[i][j + 1] + 1));
        }
    }
    return dp[s.size()][t.size()];
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    cout << editDistance(s, t) << endl;
}