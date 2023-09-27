#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int dp[n+1];
    int M[m];
    for(int i=0;i<m;i++)cin>>M[i];
    fill(dp,dp+n+1,1e8);
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+M[j]<=n){
                dp[i+M[j]]=min(dp[i+M[j]],dp[i]+1);
            }
        }
    }
    cout<<dp[n]<<endl;
}