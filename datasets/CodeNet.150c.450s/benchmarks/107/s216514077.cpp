#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int dp[1001][1001];
    int len1 = (int)a.size(), len2 = (int)b.size();
    for(int i = 0; i < 1001; i++) dp[i][0] = dp[0][i] = i;

    for(int i = 1; i <= len1; i++){
        for(int j = 1; j <= len2; j++){
            if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
            // printf("dp[%d][%d] = %d\n", i, j, dp[i][j]);
        }
    }

    cout << dp[len1][len2] << '\n';
    return 0;
}

