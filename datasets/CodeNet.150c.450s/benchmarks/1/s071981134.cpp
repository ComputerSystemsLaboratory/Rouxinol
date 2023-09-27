#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a[100000];
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  int dp[100000];
  int inf=1111111111;
  for(int i=0;i<100000;i++)dp[i]=inf;
  int ans=0;
  for(int i=0;i<n;i++){
    int lb=-1,ub=99999;
    while(ub-lb>1){
      int m=(lb+ub)/2;
      if(dp[m]<a[i])lb=m;
      else ub=m;
    }
    dp[ub]=a[i];
    ans=max(ans,ub);
  }
  cout<<ans+1<<endl;
  return 0;
}
