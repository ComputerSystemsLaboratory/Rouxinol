#include <bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
const long long LINF = 1e18;
#define dump(x)  cout << 'x' << ' = ' << (x) << ` `;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define FOREACH(x,a) for(auto& (x) : (a) )
typedef long long ll;
using namespace std;
typedef pair<ll, ll> P;

const int MAX_N = 1333;
int dp[MAX_N][MAX_N];

int LD(string &s, string &t) {
    int n=s.length(); int m=t.length();
    if (!n||!m) return 0;

    rep(i,MAX_N) rep(j,MAX_N) dp[i][j]=INF;
    rep(i,MAX_N) dp[i][0]=i;
    rep(i,MAX_N) dp[0][i]=i;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int change_cost=0;
            if (s[i-1]!=t[j-1]) change_cost=1;
            dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+change_cost});
        }
    }

    return dp[n][m];
}

int main(int argc, char const *argv[]) {
    string s,t;
    cin>>s>>t;
    cout << LD(s,t) << endl;
    return 0;
}
