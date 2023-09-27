#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int len1 = str1.length();
    int len2 = str2.length();
    int dp[2][len1 + 1];
    memset(dp, 0, sizeof dp);
    for (int i = 0; i <= len1; i++) dp[0][i] = i;
    for (int i = 1; i <= len2; i++) {
        for (int j = 0; j <= len1; j++) {
            if (j == 0) dp[i % 2][j] = i;
            else if (str1[j - 1] == str2[i - 1]) {
                dp[i % 2][j] = dp[(i - 1) % 2][j - 1];
            }
            else {
                dp[i % 2][j] = 1 + min(dp[(i - 1) % 2][j], min(dp[i % 2][j - 1], dp[(i - 1) % 2][j - 1]));
            }
        }
    }
    cout << dp[len2 % 2][len1] << endl;
    return 0;
}

