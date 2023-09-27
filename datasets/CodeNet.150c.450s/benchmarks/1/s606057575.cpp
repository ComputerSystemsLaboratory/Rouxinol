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

int n;
int a[100000];
int dp[100010];

signed main()
{
    cin >> n;
    REP(i,n) cin >> a[i];

    fill(dp, dp + n, INT_MAX);
    for (int i=0; i<n; i++) {
        *lower_bound(dp, dp + n, a[i]) = a[i];
    }

    cout << lower_bound(dp, dp + n, INT_MAX) - dp << endl;

    return 0;
}