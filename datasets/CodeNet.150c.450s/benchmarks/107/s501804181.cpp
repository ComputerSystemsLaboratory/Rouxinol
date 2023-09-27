#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;    cin >> s >> t;
    int dp[1001][1001] = {0};
    int ls = s.size(), lt = t.size();

    for (int i = 0; i <= ls; i++)
        dp[i][0] = i;
    for (int j = 0; j <= lt; j++)
        dp[0][j] = j;
    
    for (int i = 0; i < ls; i++) {
        for (int j = 0; j < lt; j++) {
            if (s[i] == t[j])
                dp[i+1][j+1] = min(dp[i][j], min(dp[i][j+1]+1, dp[i+1][j]+1));
            else 
                dp[i+1][j+1] = min(dp[i][j], min(dp[i][j+1], dp[i+1][j])) + 1;
        }
    }

    cout << dp[ls][lt] << endl;

    return 0;
}
