#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<long double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

template<typename T> void chmin(T &a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T &a, T b) { if (a < b) a = b; }

int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }
#define INF 1LL<<60

int main() {
    int N;
    cin >> N;
    vector<P> dim(N);
    REP(i, N) cin >> dim[i].first >> dim[i].second;

    vector< vector<int> > dp(N, vector<int>(N, 1e9));
    vector< vector<P> > mat_size(N, vector<P>(N));
    REP(i, N)
        FOR(j, i, N-1) mat_size[i][j] = make_pair(dim[i].first, dim[j].second);
    REP(i, N) dp[i][i] = 0;
    FOR(l, 1, N - 1) {
        REP(i, N - l) {
            FOR(j, 0, l-1)
                dp[i][i + l] = min(dp[i][i + l],  mat_size[i][i+j].second * mat_size[i][i+j].first * mat_size[i+j+1][i+l].second  + dp[i][i+j] + dp[i+j+1][i+l]);
        }
    }

    // REP(i, N) {
    //     REP(j, N) cerr << dp[i][j] << " ";
    //     cerr << endl;
    // }

    cout << dp[0][N-1] << endl;
    return 0;
}
