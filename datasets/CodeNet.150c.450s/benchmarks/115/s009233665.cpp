#include<iostream>
using namespace std;
#include<string>

string s, t;
int dp[1001][1001];
int main()
{
    int p;
    cin >> p;
    while(p>0)
    {
        p--;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        for (int i = 1; i <= n; i++)
            dp[i][0] = 0;
        for (int i = 1; i <= m; i++)
            dp[0][i] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else if (dp[i - 1][j] >= dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }
        cout << dp[n][m] << endl;
    }

}