#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int m = s.size(); int n = t.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1,0));
    for(int i=0; i<m+1; ++i) dp[0][i] = i;

    for(int i=0; i<n; ++i){
        dp[i+1][0] = i+1;
        for(int j=0; j<m; ++j){
            int cost = (t[i]==s[j]) ? 0 : 1;
            dp[i+1][j+1] = min(dp[i+1][j]+1, min(dp[i][j+1]+1, dp[i][j]+cost));
        }
    }

    cout << dp[n][m]<< endl;
    
}
