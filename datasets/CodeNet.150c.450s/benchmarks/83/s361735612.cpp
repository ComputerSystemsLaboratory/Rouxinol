#include<iostream>
#include<algorithm>

using namespace std;
int dp[105][10005];
int n,W;
int v[1005],w[1005];
void solve(){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=W; j++){
            if(j<w[i]){
                dp[i][j]=dp[i+1][j];
            }else {
                dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
            }
        }
    }
    cout<<dp[0][W]<<endl;
}
int main(){
    cin>>n;
    cin>>W;
    for(int i=0; i<n; i++){
        cin>>v[i]>>w[i];
    }
    
    solve();
    return 0;
}