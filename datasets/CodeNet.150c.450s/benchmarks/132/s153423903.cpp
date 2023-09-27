#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,s,e) for (int i=s;i<(e);i++)
#define All(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define int long long
using namespace std;
typedef long long llint;
typedef pair<int, int> P;
const int MOD = (int)1e9 + 7;
const int INF = (int)1e18 * 5;

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, p;
    cin >> n >> p;
    while(!(n == 0 && p == 0)){
        vector<int> st(n, 0);
        int rem = 0;
        bool game = true;
        while(game){
            REP(i, n){
                if(p > 0){
                    if(st[i]++ == 0) rem++;
                    if(--p == 0 && rem == 1){
                        game = false;
                        break;
                    }
                }else{      // p == 0
                    p = st[i];
                    if(st[i] > 0) rem--;
                    st[i] = 0;
                }
            }
        }
        REP(i, n){
            if(st[i] > 0){
                cout << i << "\n";
                break;
            }
        }
    
        cin >> n >> p;
    }
    return 0;
}
