#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int dp[1001][1001];
 
int main() {
    
    cin >> s1 >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
 
    memset(dp,-1,sizeof(dp));
 
    for (int i=0; i<=len1; i++) dp[i][0] = i;
    for (int i=0; i<=len2; i++) dp[0][i] = i;
 
    for (int i=1; i<=len1; i++) {
        for (int j=1; j<=len2; j++) {
            int a = 1;
            if (s1[i-1] == s2[j-1]) a = 0;
            
            dp[i][j] = dp[i-1][j-1] + a;
            dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
            dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
        }
    }
 
    cout << dp[len1][len2] << endl;
}