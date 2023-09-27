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
const int INF = (int)1e18 * 5;

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, r;
    cin >> n >> r;
    while(!(n==0 && r==0)){
        vector<int> a(n);
        REP(i, n) a[i] = n-i;
        REP(i, r){
            int p, c;
            cin >> p >> c;
            p--;
            vector<int> a_cp(a);
            REP(i, n){
                if(i < c) a_cp[i] = a[p+i];
                else if(i < c+p) a_cp[i] = a[i-c];
                else a_cp[i] = a[i];
            }
            copy(All(a_cp), a.begin());
        }
        cout << a[0] << "\n";
        cin >> n >> r;
    }
    return 0;
}
