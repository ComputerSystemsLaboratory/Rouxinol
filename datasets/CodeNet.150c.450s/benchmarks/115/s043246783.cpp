#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int lcs(string& a, string& b)
{
    vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));

    for (size_t i = 1; i < dp.size(); ++i)
    {
        for (size_t j = 1; j < dp[0].size(); ++j)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[a.size()][b.size()];
}

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; ++i)
    {
        string a, b;
        cin >> a >> b;

        cout << lcs(a, b) << endl;
    }
    return 0;
}