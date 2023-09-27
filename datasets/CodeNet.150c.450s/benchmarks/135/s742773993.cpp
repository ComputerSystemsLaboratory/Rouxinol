#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using P = pair<int, int>;
using Tapris = tuple<int, int, int>;

#define REP(i, n) for(LL i = 0; i < n; ++i)
#define FOR(i, a, n) for(LL i = a; i < n; ++i)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e15;
const int MOD = 1e9 + 7;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

//#define int long long

/*************** using variables ***************/
int n, m;
vector<int> h, w;
/**********************************************/

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin >> n >> m, n != 0 || m != 0){
        h.resize(n);
        w.resize(m);
        REP(i, n) cin >> h[i];
        REP(i, m) cin >> w[i];

        map<int, int> mph, mpw;
        REP(i, n){
            int curh = 0;
            for(int j = i; j < n; j++){
                curh += h[j];
                mph[curh]++;
            }
        }
        
        REP(i, m){
            int curw = 0;
            for(int j = i; j < m; j++){
                curw += w[j];
                mpw[curw]++;
            }
        }
        LL ans = 0;
        for(auto x: mph){
            if(mpw[x.first] != 0) ans += mph[x.first] * mpw[x.first];
        }
        cout << ans << endl;
    }
}

