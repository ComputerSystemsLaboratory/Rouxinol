#include<iostream>
#include<algorithm>
using namespace std;
long long dp[6000],n,a[6000],i,maxm;
int main(){
  while(1){
    cin>>n;
    if(n==0)break;
    for(int i=1;i<=n;i++)cin>>a[i];
    dp[1]=maxm=a[1];
    for(int i=2;i<=n;i++){
      if(dp[i-1]>=0)dp[i]=dp[i-1]+a[i];
      else dp[i]=a[i];
       
      maxm=max(dp[i],maxm);
    }
    cout<<maxm<<endl;
  }
  return 0;
}
