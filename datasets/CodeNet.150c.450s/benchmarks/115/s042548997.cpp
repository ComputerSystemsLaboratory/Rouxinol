#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lcs(const string & a, const string & b)
{
    vector<vector<int> > dp(a.size(), vector<int>(b.size()));

    for (size_t i = 0; i < dp.size(); ++i) {
        for (size_t j = 0; j < dp[0].size(); ++j) {
            if (a.at(i) == b.at(j)) {
                dp[i][j] = ((i == 0 || j == 0) ? 0 : dp[i - 1][j - 1]) + 1;
            } else {
                dp[i][j] = max(i == 0 ? 0 : dp[i - 1][j],
                               j == 0 ? 0 : dp[i][j - 1]);
            }
        }
    }

    return dp[a.length() - 1][b.length() - 1];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        cout << lcs(a, b) << endl;
    }

    return 0;
}