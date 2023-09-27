#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
#include <sstream>
#include <queue>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

int main() {
    int N, W;
    cin >> N >> W;
    vector<vector<int>> dp(N+1, vector<int>(W+1,0));
    vector<pair<int,int>> vw;
    REP(i,N) {
        int v, w;
        cin >> v >> w;
        vw.push_back(make_pair(v,w));
    }
    
    REP(i,N) {
        REP(j, W+1) {
            if (j < vw[i].second) dp[i+1][j] = dp[i][j];
            else dp[i+1][j] = max(dp[i][j], dp[i][j-vw[i].second] + vw[i].first);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}