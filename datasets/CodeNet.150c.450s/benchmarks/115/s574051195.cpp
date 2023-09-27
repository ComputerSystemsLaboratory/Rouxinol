#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
    int n;
    cin >> n;
    rep(i,n){
        string a,b;
        cin >> a >> b;
        int n1 = a.size();
        int n2 = b.size();
        int dp[n1+1][n2+1];
        rep(i,n1+1)rep(j,n2+1)dp[i][j] = 0;
        rep(i,n1)rep(j,n2){
            if(a[i] == b[j]&&dp[i+1][j] == dp[i][j+1]&&dp[i][j] ==dp[i+1][j])dp[i+1][j+1] = dp[i+1][j]+1;
            else dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
        }
        cout << dp[n1][n2] << endl;
    }
    return 0;
}
