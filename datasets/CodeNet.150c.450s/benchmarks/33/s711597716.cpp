#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
using ll = long long;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int x, y, s;
int f(int i, int j, int z) { return i * (100 + z) / 100 + j * (100 + z) / 100; }
void solve() {
    int ans = 0;
    rep(i, s + 1) rep(j, s + 1) if (i && j && f(i, j, x) == s) {
        // cout << i << ", " << j << ": " << f(i,j,y) << endl;
        ans = max(ans, f(i, j, y));
    }
    cout << ans << endl;
}
int main() {
    while (cin >> x >> y >> s, x) {
        solve();
    }
    return 0;
}