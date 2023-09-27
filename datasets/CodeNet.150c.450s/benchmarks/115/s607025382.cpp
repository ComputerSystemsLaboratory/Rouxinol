#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(a)-1;i>=b;i--)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define printV(v) for(auto x : v){cout << x << " ";} cout << endl
#define printVS(vs) for(auto x : vs){cout << x << endl;}
#define printVV(vv) for(auto v : vv){for(auto&& x : v){cout << x << " ";}cout << endl;}
#define printP(p) cout << p.first << " " << p.second << endl
#define printVP(vp) for(auto p : vp) printP(p);

typedef long long ll;
typedef pair<int, int> Pii;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<Pii> vp;
typedef vector<vector<int>> Graph;
const int inf = 1e9;
const int mod = 1e9 + 7;

int LCS(string s, string t) {
    int n = s.size();
    int m = t.size();
    s = "#" + s;
    t = "#" + t;

    vvi dp(n + 1, vi(m + 1));
    dp[0][0] = 0;

    rep2(i, 1, n + 1) {
        rep2(j, 1, m + 1) {
            if (s[i] == t[j]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
            dp[i][j] = max(dp[i][j], dp[i][j - 1]);
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }

    return dp[n][m];
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int q;
    cin >> q;
    rep(i, q) {
        string s, t;
        cin >> s >> t;
        cout << LCS(s, t) << endl;
    }

}