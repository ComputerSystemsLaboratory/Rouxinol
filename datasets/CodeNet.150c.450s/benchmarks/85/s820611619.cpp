#include <iostream>
#include <cstdio>
#include <cstring>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <sstream>
#include <numeric>

// namespace
using namespace std;

// int mcm(const vector<int> &p, int i, int j) { // i-th matrix has the size (p[i], p[i+1])
//     if (i == j) return 0;
//     int m = INT_MAX;
//     for (int k = i; k < j; ++k) {
//         m = min(m, mcm(p, i, k) + mcm(p, k + 1, j) + p[i] * p[k + 1] * p[j + 1]);
//     }
//     return m;
// }

// int mcm(const vector<int> &p, int i, int j, vector<vector<int>> &dp) { // i-th matrix has the size (p[i], p[i+1])
//     if (i == j) return 0;
//     if (dp[i][j] < INT_MAX) return dp[i][j];
//     int m = INT_MAX;
//     for (int k = i; k < j; ++k) {
//         m = min(m, mcm(p, i, k, dp) + mcm(p, k + 1, j, dp) + p[i] * p[k + 1] * p[j + 1]);
//     }
//     return dp[i][j] = m;
// }

int mcm(const vector<int> &p) { // i-th matrix has the size (p[i], p[i+1])
    int n = p.size() - 1;
    vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
    for (int i = 0 ; i < n; ++i) dp[i][i] = 0;
    for (int l = 1; l < n; ++l)
        for (int i = 0, j; (j = i + l) < n; ++i)
            for (int k = i; k < j; ++k)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + p[i] * p[k + 1] * p[j + 1]);
    return dp[0][n-1];
}

int main() {
    int n, r, c;
    cin >> n;
    vector<int> p;
    for (int i = 0; i < n; ++i) {
        cin >> r >> c;
        p.push_back(r);
    }
    p.push_back(c);
    auto ans = mcm(p);
    cout << ans << endl;
    return 0;
}

