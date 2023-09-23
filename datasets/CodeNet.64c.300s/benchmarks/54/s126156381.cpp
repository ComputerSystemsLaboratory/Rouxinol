#include <bits/stdc++.h>
using namespace std;

long long  dp[110][25];
int s[110];

int main(){
    int n;
    cin >> n;
    for(int i=1; i <= n; i++) cin >> s[i];

    for(int i=0; i < 110; i++)for(int j=0; j < 25; j++) dp[i][j] = 0;

    dp[1][s[1]] = 1;
    for(int i=2; i < n; i++){
        for(int j=0; j <= 20; j++){
            if(j+s[i] <= 20)
                dp[i][j+s[i]] += dp[i-1][j];
            if(0 <= j-s[i])
                dp[i][j-s[i]] += dp[i-1][j];
        }
    }
    cout << dp[n-1][s[n]] << endl;
}