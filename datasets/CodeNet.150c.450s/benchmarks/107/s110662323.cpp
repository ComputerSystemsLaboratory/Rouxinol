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

void solve()
{
    using namespace std;

    constexpr int inf = 1 << 30;

    string str1, str2;
    string s;
    cin >> s; str1 = "-" + s;
    cin >> s; str2 = "-" + s;

    vec<vec<int>> dp(str1.size(), vec<int>(str2.size(), inf));

    //初期化
    for (int i = 0; i < str1.size(); ++i) dp[i][0] = i;
    for (int i = 0; i < str2.size(); ++i) dp[0][i] = i;

    for (int i = 1; i < str1.size(); ++i)
        for (int j = 1; j < str2.size(); ++j)
        {
            dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + (str1[i] == str2[j] ? 0 : 1));
        }

    cout << dp[str1.size() - 1][str2.size() - 1] << endl;
}

int main()
{
    solve();
    return 0;
}
