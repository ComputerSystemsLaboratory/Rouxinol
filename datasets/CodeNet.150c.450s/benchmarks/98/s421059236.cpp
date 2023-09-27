#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,s,e) for (int i=s;i<(e);i++)
#define All(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define fi first
#define se second
#define int long long
using namespace std;
typedef long long llint;
typedef pair<int, int> P;
const int MOD = (int)1e9 + 7;
const int INF = (int)1e18 * 2;

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    while(!(n==0 && m==0)){
        vector<int> t(n);
        vector<int> h(m);
        int t_sum=0, h_sum=0;
        REP(i, n){
            cin >> t[i];
            t_sum += t[i];
        }
        REP(j, m){
            cin >> h[j];
            h_sum += h[j];
        }
        P ans = mp(INF, INF);
        REP(i, n)REP(j, m){
            if(t_sum-t[i]+h[j] == h_sum-h[j]+t[i]){
                if(ans.fi+ans.se > t[i]+h[j]){
                    ans = mp(t[i], h[j]);
                }
            }
        }
        if(ans.fi == INF) cout << -1 << "\n";
        else cout << ans.fi << " " << ans.se << "\n";

        cin >> n >> m;
    }
    return 0;
}
