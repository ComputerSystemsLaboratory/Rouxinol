#include <iostream>
#include <cstring>
using namespace std;

int main(){
    long long dp[110][25];
    int sum[110];
    int n;
    cin >> n;
    for(int i=1; i <= n; i++) cin >> sum[i];
    memset(dp, 0, sizeof(dp));

    dp[1][sum[1]] = 1;
    for(int i=2; i < n; i++){
        for(int j=0; j <= 20; j++){
            if(j+sum[i] <= 20)dp[i][j+sum[i]] += dp[i-1][j];
            if(0 <= j-sum[i]) dp[i][j-sum[i]] += dp[i-1][j];
        }
    }
    cout << dp[n-1][sum[n]] << endl;
}