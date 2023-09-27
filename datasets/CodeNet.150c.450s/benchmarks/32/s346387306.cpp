#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

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

int m, n1, n2;
void solve() {
    int p[202];
    rep(i, m) cin >> p[i];
    int ans = n1;
    for (int i = n1; i <= n2; i++) {
        if (p[i - 1] - p[i] >= p[ans - 1] - p[ans]) {
            ans = i;
        }
    }
    cout << ans << endl;
}
int main() {
    while (cin >> m >> n1 >> n2) {
        if (m == 0) break;
        solve();
    }
    return 0;
}