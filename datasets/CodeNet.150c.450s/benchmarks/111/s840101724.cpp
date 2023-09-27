#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <iomanip>
#include <fstream>
#include <bitset>
#include <array>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define erep(i, n) for (int i = 0; i <= (int)(n); ++i)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define clr(a, x) memset(a, x, sizeof(a))
#define sz(a) ((int)(a).size())
#define mp(a, b) make_pair(a, b)
#define ten(n) ((long long)(1e##n))

const int INF = -1;

typedef long long ll;
typedef pair<int, int> pii;

int n;
ll a[101], ans, r;

ll dp[101][21];

int main() {
    cin >> n;
    rep(i,n) cin >> a[i];

    dp[0][a[0]] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= 20; ++j) {
            if (j + a[i] <= 20) {
                dp[i][j + a[i]] += dp[i-1][j];
            }
            if (j - a[i] >= 0) {
                dp[i][j - a[i]] += dp[i - 1][j];
            }
        }
    }

    cout << dp[n-2][a[n-1]] << endl;

    return 0;
}