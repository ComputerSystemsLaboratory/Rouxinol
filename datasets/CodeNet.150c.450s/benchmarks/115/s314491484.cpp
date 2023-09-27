#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    string str1, str2;

    cin >> n;

    for(int cnt = 0; cnt < n; ++cnt) {

        cin >> str1 >> str2;

        int dp[str1.size() + 1][str2.size() + 1];

        for(int i = 0; i <= str1.size(); ++i) {
            dp[i][0] = 0;
        }

        for(int i = 0; i <= str2.size(); ++i) {
            dp[0][i] = 0;
        }

        for(int i = 1; i <= str1.size(); ++i) {
            for(int j = 1; j <= str2.size(); ++j) {
                if(str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        cout << dp[str1.size()][str2.size()] << endl;

    }

}