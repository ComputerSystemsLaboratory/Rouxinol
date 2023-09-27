#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int INF = 1000000000;

int editDistance(const string& s1, const string& s2) {
    int len1 = s1.size();
    int len2 = s2.size();
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, INF));
    for (int i = 0; i <= len2; i++) {
        dp[0][i] = i;
    }
    for (int i = 0; i < len1; i++) {
        dp[i][0] = i;
    }
    
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
            dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (s1[i - 1] == s2[j - 1]? 0 : 1));
        }
    }
    
    return dp[len1][len2];
    
}

int main() {
    
    string s1, s2;
    cin >> s1 >> s2;
    
    int ans = editDistance(s1, s2);
    
    cout << ans << endl;
    
    return 0;
}