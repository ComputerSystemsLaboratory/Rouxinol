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

int n, m;
int s1[102], s2[102];
bool ok(int a, int b) {
    swap(s1[a], s2[b]);
    int sum1 = 0, sum2 = 0;
    rep(i, n) sum1 += s1[i];
    rep(i, m) sum2 += s2[i];
    swap(s1[a], s2[b]);
    return sum1 == sum2;
}
void solve() {
    int ans[2] = {-1, -1};
    int mini = INF;
    rep(i, n) rep(j, m) {
        if (ok(i, j)) {
            if (mini > s1[i] + s2[j]) {
                ans[0] = s1[i];
                ans[1] = s2[j];
                mini = s1[i] + s2[j];
            }
        }
    }
    if (ans[0] == -1)
        cout << "-1" << endl;
    else
        cout << ans[0] << " " << ans[1] << endl;
}
int main() {
    while (cin >> n >> m, n) {
        rep(i, n) cin >> s1[i];
        rep(i, m) cin >> s2[i];
        solve();
    }
    return 0;
}