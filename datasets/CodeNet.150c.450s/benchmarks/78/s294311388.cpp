#include <algorithm>
#include <array>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    array<int, 1000001> dp = {};
    fill(begin(dp), end(dp), numeric_limits<int>::max());
    dp[0] = 0;
    auto dp2 = dp;
    auto tetrahedral = [](int n) { return n * (n + 1) * (n + 2) / 6; };
    for (int i = 1; tetrahedral(i) < dp.size(); ++i) {
        const auto t = tetrahedral(i);
        for (int j = 0; j + t < dp.size(); ++j) {
            dp[j + t] = min(dp[j + t], dp[j] + 1);
        }
        if (t % 2 == 1) {
            for (int j = 0; j + t < dp2.size(); ++j) {
                dp2[j + t] = min(dp2[j + t], dp2[j] + 1);
            }
        }
    }

    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            return 0;
        }

        cout << dp[n] << ' ' << dp2[n] << endl;
    }
}