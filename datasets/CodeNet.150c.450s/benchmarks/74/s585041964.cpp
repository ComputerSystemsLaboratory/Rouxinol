#include <algorithm>
#include <array>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v;
    for (int i = 0; i < m; ++i) {
        int c;
        cin >> c;
        v.push_back(c);
    }

    vector<int> dp(50001, numeric_limits<int>::max());
    dp[0] = 0;

    for (int i : v) {
        for (int j = 0; j + i < dp.size(); ++j) {
            dp[j + i] = min(dp[j + i], dp[j] + 1);
        }
    }
    cout << dp[n] << endl;
}