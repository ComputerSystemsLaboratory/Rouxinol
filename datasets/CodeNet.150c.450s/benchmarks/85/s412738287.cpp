#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
// #define int long long

template <class T>
bool INRANGE(T x, T a, T b) { return a <= x && x <= b; }

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define RREP(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define RFOR(i, a, b) for (int i = (a); i >= (b); --i)
#define ALL(v) (v).begin(), (v).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
                      << " " << __FILE__ << endl;
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vi p(102);
    REP(i, n) cin >> p[i] >> p[i+1];
    vvi dp(102, vi(102, 0));

    FOR(l, 2, n+1){           // 対象とする行列の数
        FOR(i, 1, n-l+2){     
            int j = i + l - 1;   
            dp[i][j] = (1 << 20); // dp[i][j] := [Mi, Mj]の最小回数
            FOR(k, i, j){
	            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1] * p[k] * p[j]);
            }
        }
    }

  cout << dp[1][n] << endl;

    
}
