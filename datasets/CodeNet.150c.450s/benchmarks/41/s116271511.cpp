#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;
int main()
{
    int V, E;
    cin >> V >> E;

    vector<vector<ll>> dp(V, vector<ll>(V, INF));

    rep(i, E) {
        int s, t, d;
        cin >> s >> t >> d;
        dp[s][t] = d;        
    }

    rep(i, V) dp[i][i] = 0;

    rep(k, V) {
        rep(i, V) {
            rep(j, V) {
                if (dp[i][k] == INF || dp[k][j] == INF) continue;
                chmin(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    bool flag = true;
    rep(i, V) if (dp[i][i] < 0) flag = false;
    if (!flag) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    } 
    rep(i, V) {
        rep(j, V) {
            if (dp[i][j] == INF) {
                cout << "INF";
            }
            else cout << dp[i][j];
            if (j != V - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
