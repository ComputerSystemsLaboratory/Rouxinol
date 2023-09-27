#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cassert>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = ll(1e9) + 7;
const ll INF = LLONG_MAX;
const ll MAX_N = 1 << 12;
const double EPS = 10e-8;
const double PI = 3.14159265359;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int main() {
    while (1) {
        int n,a[1001];
        cin >> n;
        if(n==0)break;
        REP(i,n)cin >> a[i];
        sort(a,a+n);
        int ans = 99999999;
        REP(i,n-1)ans = min(ans,a[i+1]-a[i]);
        cout << ans << endl;
    }
    return 0;
}

