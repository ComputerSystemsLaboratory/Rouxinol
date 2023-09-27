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

const int INF = 1e9;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> v;
    PUSH(m,v);
    vector<vector<int>> dp(m+1,vector<int>(n+1,INF));
    REP(i,m+1) dp[i][0] = 0;
    REP(i,m) {
        REP(j,v[i]) dp[i+1][j] = dp[i][j];
        FOR(j,v[i],n+1) {
            dp[i+1][j] = min(dp[i][j], dp[i+1][j-v[i]]+1);
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}