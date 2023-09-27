#include <iostream>
#include <limits>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        int r, c;
        cin >> r >> c;
        v.emplace_back(r, c);
    }

    vector<vector<int>> dp(n, vector<int>(n, numeric_limits<int>::max()));

    for (int i = 0; i < n; ++i) {
        dp[i][i] = 0;
    }

    auto cost = [&v](int i, int k, int j) {
        return v[i].first * v[k].second * v[j].second;
    };

    // auto p = [&dp, n] {
    //    for (int i = 0; i < n; ++i) {
    //        for (int j = 0; j < n; ++j) {
    //            cout << dp[i][j] << ' ';
    //        }
    //        cout << endl;
    //    }
    //    cout << endl;
    //};
    for (int l = 2; l <= n; ++l) {
        for (int i = 0; i < n - l + 1; ++i) {
            int j = i + l - 1;
            for (int k = i; k < j; ++k) {
                dp[i][j] =
                    min(dp[i][j], dp[i][k] + dp[k + 1][j] + cost(i, k, j));
            }
        }
    }
    cout << dp[0][n - 1] << endl;
}