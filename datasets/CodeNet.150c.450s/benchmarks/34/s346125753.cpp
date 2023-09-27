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

ll dp[31];
int N;

void solve() {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= 30; ++i) dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
}

int main() {
    clr(dp, -1);
    solve();
    while (cin >> N, N) {
        cout << (dp[N]/10)/365+bool(dp[N]%3650) << endl;
    }
    return 0;
}