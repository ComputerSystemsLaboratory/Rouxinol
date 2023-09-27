#include <iostream>
#include <algorithm>
using namespace std;

void DP(int i, int j, long long dp[101][101], int r[], int c[]){
    if(i == j) dp[i][j] = 0;
    else if (j - i == 1){
        dp[i][j] = r[i] * c[i] * c[j];
    } else {
        int tmp = i;
        dp[i][j] = dp[i][tmp] + dp[tmp+1][j] + r[i] * r[tmp+1] * c[j];
        // cout <<  "i: "<< i <<" tmp: " << tmp <<" " << r[i] * r[tmp+1] * c[j] <<endl;
        tmp++;
        while(tmp != j){
            dp[i][j] = min(dp[i][j], dp[i][tmp] + dp[tmp + 1][j] + r[i] * r[tmp+1] * c[j]);
            // cout <<  "i: "<<i<<" tmp: " << tmp <<" " << r[i] * r[tmp+1] * c[j] <<endl;
            tmp++;
        }
    }
    
    // cout << "i, j: " << i << ", " << j << " " <<  dp[i][j] << endl;
}

void solve(){
    int n; cin >> n;
    int r[n+1], c[n+1];
    r[0] = 0; c[0] = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> r[i] >> c[i];
    }
    long long dp[101][101] = {};
 
    for(int i = 1; i < n; i ++){
        int tmp = 1;
        for(int j = i + tmp; j <= n; j++, tmp++){
            DP(tmp, j, dp, r, c);
        }
    }
    cout << dp[1][n] << endl;
}

int main (){
    solve();
    return 0;
}
