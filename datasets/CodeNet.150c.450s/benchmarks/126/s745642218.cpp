#include <bits/stdc++.h>
//#define int long long

using namespace std;
using LL = long long;
using P = pair<int, int>;
using Tapris = tuple<int, int, int>;

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)

#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e15;
const int MOD = 1e9 + 7;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

/*************** using variables ***************/
int a, b, n;
int x[45], y[45];
int dp[20][20];
/**********************************************/

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin >> a >> b, a != 0 || b != 0){
        cin >> n;
        REP(i, n) cin >> x[i] >> y[i];
        
        REP(i, 20) REP(j, 20) dp[i][j] = 0;
        REP(i, n) dp[x[i]][y[i]] = -1;
        
        dp[1][1] = 1;
        FOR(i, 1, a+1){
            FOR(j, 1, b+1){
                if(i == 1 && j == 1) continue;
                if(dp[i][j] == -1) continue;

                dp[i][j] = (dp[i-1][j] != -1 ? dp[i-1][j] : 0) + (dp[i][j-1] != -1 ? dp[i][j-1] : 0);
            }
        }
        cout << dp[a][b] << endl;
    }

}

