#ifdef BUILT_LOCAL

#include "niklib.h"

#endif

#include <iostream>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <cstdio>
#include <map>
#include <cmath>
#include <set>
#include <list>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef __int128 lll;
constexpr ll mod = 1000000007;

int n, r[100], c[100];
ll dp[101][101];

ll rec(int s, int t) {
    if (s + 1 == t) return 0;
    if (dp[s][t] == 0) {
        dp[s][t] = INT32_MAX;
        for (int i = s + 1; i < t; i++) {
            dp[s][t] = min(dp[s][t], rec(s, i) + rec(i, t) + r[s] * r[i] * c[t - 1]);
        }
    }
    return dp[s][t];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> r[i] >> c[i];
    cout << rec(0, n) << endl;
}

