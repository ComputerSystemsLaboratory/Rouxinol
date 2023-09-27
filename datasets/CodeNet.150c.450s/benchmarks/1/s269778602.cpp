#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <bitset>
#include <valarray>
#include <utility>
#include <tuple>
#include <cmath>
#include <random>

using ll = long long;

//各種nil
template <class T>
constexpr T nil = static_cast<T>(-1);

constexpr int nil_i = nil<int>;
constexpr int nil_ll = nil<ll>;
constexpr double nil_d = nil<double>;

//vector
template <class T>
using vec = std::vector<T>;

struct Item
{
    int weight, value;
};

void solve()
{
    using namespace std;

    constexpr int inf = 1 << 30;
    
    int n;
    cin >> n;
    vec<int> a(n, 0);
    for (auto& x : a) cin >> x;
    
    ////この方法ではO(n^2)
    ////dp[i + 1]  a[i]を最終要素とした増加部分列の長さ
    //vec<int> dp(n + 1, 1);

    //for (int i = 0; i < n; ++i)
    //    for (int j = 0; j < i; ++j)
    //        if (a[j] < a[i])
    //            dp[i + 1] = max(dp[i + 1], dp[j] + 1);

    //dp[i]  長さがi + 1となる増加部分列の最終要素の最小値
    vec<int> dp(n, inf);

    for (int i = 0; i < n; ++i)
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];

    cout << distance(dp.begin(), lower_bound(dp.begin(), dp.end(), inf)) << endl;
}

int main()
{
    solve();
    return 0;
}
