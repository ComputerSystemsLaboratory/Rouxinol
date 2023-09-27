#include <iostream>
#include <algorithm>
using namespace std;
int dp[21][50001];
int m, n;
int c[21];

void solve(){
    for(int i=1; i<=n; i++){
        dp[0][i]=i;
    }
    for(int i=1; i<m; i++){
        dp[i][0]=0;
    }
    for(int i=1; i<m;i++){
        for(int j=1; j<=n; j++){
            if(c[i]<=j){
                dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]]+1);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[m-1][n] << endl;
}

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> c[i];
    }
    solve();
    return 0;
}