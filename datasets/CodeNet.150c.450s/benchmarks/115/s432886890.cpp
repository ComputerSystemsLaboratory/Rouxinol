#include <iostream>

using namespace std;

int max_length(string x, string y)
{
    int n = x.size();
    int m = y.size();
    int dp[n+1][m+1];
    for(int i = 0; i <= m; ++i)
    {
        dp[0][i] = 0;
    }
    for(int i = 1; i <= n; ++i)
    {
        dp[i][0] = 0;
        for(int j = 1; j <= m; ++j)
        {
            if(x[i-1] == y[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string str1;
    string str2;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> str1 >> str2;
        cout << max_length(str1, str2) << endl;
    }
}