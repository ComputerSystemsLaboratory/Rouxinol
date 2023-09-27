#include <algorithm>
#include <bitset>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define MOD 1000000007
#define INF 1e9
#define PIE 3.14159265358979323

template <class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
T GCD(T a, T b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
template <class T>
inline T LCM(T a, T b) {
    return (a * b) / GCD(a, b);
}

using namespace std;
//#inculude <bits/stdc++.h>
//#define int long long

signed main() {
    int n;
    cin >> n;
    vector<pair<int, int>> m(n);
    int a, b;
    rep(i, n) {
        cin >> a >> b;
        m[i] = make_pair(a, b);
    }
    vector<vector<int>> dp(n, vector<int>(n, INF));
    rep(i, n) dp[i][i] = 0;
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i < n; i++) {
            int j = i + len - 1;
            if (j >= n)
                continue;
            for (int k = i; k < j; k++) {
                chmin(dp[i][j], dp[i][k] + dp[k + 1][j] +
                                    m[i].first * m[k].second * m[j].second);
            }
        }
    }
    cout << dp[0][n - 1] << endl;
}
