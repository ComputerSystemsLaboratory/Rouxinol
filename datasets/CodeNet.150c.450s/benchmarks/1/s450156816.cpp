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
// #include <boost/multiprecision/cpp_dec_float.hpp>
// #include <boost/multiprecision/cpp_int.hpp>

///////////////////////////////////////////////////////////////
// namespace
///////////////////////////////////////////////////////////////
using namespace std;
// namespace mp = boost::multiprecision;

///////////////////////////////////////////////////////////////
// types
///////////////////////////////////////////////////////////////
using pii = pair<int, int>;
using ll = long long int;
using ld = long double;
// using mpi = mp::cpp_int;
// using mpf = mp::number<mp::cpp_dec_float<1024>>;

///////////////////////////////////////////////////////////////
// mod https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a
///////////////////////////////////////////////////////////////
// ll MOD = 1000000007;
// ll mod(long long val) {
//     long long res = val % MOD;
//     if (res < 0) res += MOD;
//     return res;
// }
// ll modinv(ll a) {
//     ll b = MOD, u = 1, v = 0;
//     while (b) {
//         ll t = a / b;
//         a -= t * b; swap(a, b);
//         u -= t * v; swap(u, v);
//     }
//     u %= MOD;
//     if (u < 0) u += MOD;
//     return u;
// }

int N;
vector<int> a;
vector<int> dp;

// dp[i]: LIS for the first i elements [v0, ..., v_i-1] using a_i
// int lis() {
//     dp = vector<int>(N + 1, 0);
//     for (int i = 0; i < a.size(); ++i) {
//         dp[i] = 1;
//         for (int j = 0; j < i; ++j)
//             if (a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
//     }
//     return *max_element(dp.begin(), dp.end());
// }

// dp[L]: Minimum element value of subarray whose length is L
// dp[l + 1] = min(dp[l + 1], dp[l] + 1) if dp[l] < a[i]
int lis() {
    dp = vector<int>(N + 1, INT_MAX);
    for (int i = 0; i < a.size(); ++i) *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    return lower_bound(dp.begin(), dp.end(), INT_MAX) - dp.begin();
}

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    int ans = lis();
    cout << ans << endl;

    return 0;
}

