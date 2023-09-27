#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int dp[1001][1001] = {};

int getLCS(string X, string Y)
{
    int m = 0;
    for (int i = 1; i <= X.size(); i++)
    {
        for (int j = 1; j <= Y.size(); j++)
        {
            dp[i][j] = X[i - 1] == Y[j - 1] ? dp[i - 1][j - 1] + 1 : max(dp[i - 1][j], dp[i][j - 1]);
            m = max(m, dp[i][j]);
        }
    }
    return m;
}

int main()
{
    int q;
    string X, Y;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> X >> Y;
        cout << getLCS(X, Y) << "\n";
    }
    return 0;
}
