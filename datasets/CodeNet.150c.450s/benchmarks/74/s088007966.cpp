#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <climits>
#include <cassert>

using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())

#define pb push_back
#define mp make_pair


int main(){
    int n, m;
    cin >> n >> m;

    vector<int> cs(m);
    REP(i,m) cin >> cs[i];

	  // ?????????
    // [????¨???????] = ????°??????°
	  int INF = 1e9;
    vector<int> dp(n+1, INF);
    dp[0] = 0;

	FOR(i, 1, m+1) {
        auto c = cs[i-1];
        FOR(j, c, n+1) {
            dp[j] = min(dp[j], dp[j - c] + 1);
        }

        // for(auto e : dp) cout << e << ",";
        // cout << endl;
    }

    cout << dp[n] << endl;

    return 0;
}