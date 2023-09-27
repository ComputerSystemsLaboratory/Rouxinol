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

int dy[]={0, -1, 0, 1};
int dx[]={-1, 0, 1, 0};

//#define int long long

/*************** using variables ***************/
int N;
vector<int> n, d;
P coordinates[201];
/**********************************************/

void solve(){
    coordinates[0] = P(0, 0);
    REP(i, N-1){
        int cur = i+1;
        int y = coordinates[n[i]].first + dy[d[i]];
        int x = coordinates[n[i]].second + dx[d[i]];
        coordinates[cur] = P(y, x);
    }
    
    int x_max_num = -INF; 
    int y_max_num = -INF; 
    int x_min_num = INF; 
    int y_min_num = INF; 
    REP(i, N){
        x_max_num = max(x_max_num, coordinates[i].second);
        x_min_num = min(x_min_num, coordinates[i].second);
        y_max_num = max(y_max_num, coordinates[i].first);
        y_min_num = min(y_min_num, coordinates[i].first);
    }

    cout << x_max_num - x_min_num + 1 << " " << y_max_num - y_min_num + 1 << endl;
    return;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(cin >> N, N){
        n.resize(N-1);
        d.resize(N-1);
        REP(i, N-1) cin >> n[i] >> d[i];
        solve();
    }

}

