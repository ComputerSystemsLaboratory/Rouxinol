#include<iostream>
using namespace std;

int a[5000];
int dp[5000];
int k,n;
int main(){
  while(1){
    cin>>n;
    if(n==0) break;
    for(int i=0;i<n;i++)cin>>a[i];
    dp[0]=a[0];
    for(int i=1;i<n;i++)dp[i]=max(dp[i-1]+a[i],a[i]);
    int ans=-9999999;
    for(int i=0;i<n;i++)ans=max(ans,dp[i]);
    cout<<ans<<"\n";
  }
}

