// https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/1/DPL_1_D
// 最長増加部分列 (LIS: Longest Increasing Subsequence)
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;
#define int long long
constexpr int INF = 1000000000+8;

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> dp(n, INF);

    for (int i = 0; i < n; i++) {
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }

    const int ans = lower_bound(dp.begin(), dp.end(), INF) - dp.begin();
    cout << ans << endl;
}

