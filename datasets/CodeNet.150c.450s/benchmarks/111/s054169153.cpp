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

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    ull dp[110][30];
    for (auto &e:dp)for (auto &f:e)f = 0;
    dp[1][a[0]] = 1;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j <= 20; j++) {
            if (j + a[i] <= 20) dp[i + 1][j + a[i]] += dp[i][j];
            if (j - a[i] >= 0) dp[i + 1][j - a[i]] += dp[i][j];
        }
    }
    cout << dp[n - 1][a[n - 1]] << endl;
}
