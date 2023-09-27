#include <bits/stdc++.h>
using namespace std;

int main(){
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        int dp[n + 1][m + 1];
        for(int j = 0; j <= m; j++){
                for(int i = 0; i <= n; i++){
                        if(i == 0) dp[i][j] = j;
                        else if(j == 0) dp[i][j] = i;
                        else if(a[i - 1] == b[j - 1]) dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1] + 1, dp[i - 1][j] + 1));
                        else dp[i][j] = min(dp[i - 1][j - 1] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j] + 1));
                }
        }
        cout << dp[n][m] << endl;
        return 0;
}

