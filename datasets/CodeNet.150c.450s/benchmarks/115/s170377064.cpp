#include<iostream>
#include<string>

using namespace std;

int main() {
    int a;
    string s,t;
    cin >> a;

    for(int ai = 0; ai < a; ai++) {
        cin >> s >> t;
        int n = s.length(), m = t.length();

        int dp[n+1][m+1];
        fill_n(dp[0], (n+1)*(m+1), 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(s[i] == t[j]) {
                    dp[i+1][j+1] = dp[i][j] + 1;
                } else {
                    dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }

        cout << dp[n][m] << endl;
    }
}
