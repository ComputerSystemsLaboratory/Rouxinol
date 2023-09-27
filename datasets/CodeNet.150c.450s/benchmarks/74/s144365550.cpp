#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int dp[60000]={};
    for(int i=0;i<=n;i++) dp[i]=1e9;
    dp[0]=0;

    for(int i=0;i<=n;i++){
        
        for(int j=0;j<m;j++){
            if(i-a[j]>=0){
                dp[i]=min(dp[i],dp[i-a[j]]+1);
            }
        }
    }
    cout<<dp[n]<<endl;

}
