//#define LOCAL

#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cstring>
#include <climits>
#include <set>

//#define int long long
//typedef long long ll;
using ll = long long;
//using R = double;

//#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,bg,ed) for(ll i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)

#define MOD 1000000007

const int INF = int(1e9);

using namespace std;

typedef vector<int> V;
typedef vector<V> VV;

int N, W;
int v[110], w[110];
int dp[100][10001];

signed main()
{
    cin >> N >> W;
    REP(i,N) cin >> v[i] >> w[i];

    REP(i,W+1) {
        if (i >= w[0]) dp[0][i] = v[0];
    }
    for (int i=1; i<N; i++) {
        REP(j,W+1) {
            if (w[i] <= j) {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    /*
    REP(i,N) {
        REP(j,W+1) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    */

    cout << dp[N-1][W] << endl;

    return 0;
}