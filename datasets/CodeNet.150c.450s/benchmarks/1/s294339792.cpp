#include<bits/stdc++.h>
using namespace std;
#define MAX_N 111111
int n,a[MAX_N],dp[MAX_N];

int Lis(){
  dp[0]=a[0];
  int ans=1;
  for(int i=1;i<n;i++){
    if(dp[ans-1]<a[i])dp[ans++]=a[i];
    else *lower_bound(dp,dp+ans,a[i])=a[i];
  }
  return ans;
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  cout<<Lis()<<endl;
  return 0;
}

