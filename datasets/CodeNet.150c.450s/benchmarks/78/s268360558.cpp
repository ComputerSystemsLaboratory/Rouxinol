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
int n;
int dp1[1000005], dp2[1000005];
vector<int> sei5, sei5_odd;
/**********************************************/

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    for(int i = 1; ; i++){
        int x = i * (i+1) * (i+2) / 6;
        if(x > 1000000) break;
        sei5.pb(x);
        if(x % 2 == 1) sei5_odd.pb(x);
    }

    REP(i, 1000001){
        dp1[i] = INF;
        dp2[i] = INF;
    }
    dp1[0] = 0;
    dp2[0] = 0;
    FOR(i, 1, 1000001){
        REP(j, sei5.size()){
            if(i-sei5[j] < 0) break;
            dp1[i] = min(dp1[i], dp1[i-sei5[j]] + 1);
        }
    }
    FOR(i, 1, 1000001){
        REP(j, sei5_odd.size()){
            if(i-sei5_odd[j] < 0) break;
            dp2[i] = min(dp2[i], dp2[i-sei5_odd[j]] + 1);
        }
    }
    while(cin >> n, n){
        cout << dp1[n] << " " << dp2[n] << endl;
    }
}

