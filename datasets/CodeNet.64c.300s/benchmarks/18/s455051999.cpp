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

int dp[32];
int main() {
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    rep(i, 32) {
        if (i - 3 >= 0) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
    }
    int n;
    while (cin >> n, n) {
        int ans = ceil(dp[n] / 3650);
        cout << ans + 1 << endl;
    }
    return 0;
}