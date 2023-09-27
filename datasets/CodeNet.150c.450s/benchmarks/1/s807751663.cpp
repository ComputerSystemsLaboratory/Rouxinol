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
// #define INF 1LL<<60

const int INF = 1e9;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    REP(i, N) cin >> v[i];

    vector<int> dp(N+1, INF);
    int ans = 0;

    REP(i, N) {
        auto itr = lower_bound(dp.begin(), dp.end(), v[i]);
        *itr = min(*itr, v[i]);
        ans = max(ans, int(itr - dp.begin()));
    }

    cout << ans + 1 << endl;

    return 0;
}
