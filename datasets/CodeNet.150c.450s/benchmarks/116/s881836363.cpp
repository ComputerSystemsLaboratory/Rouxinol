#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n,k;
  while(cin>>n>>k,n){
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int s[n+1];
    s[0]=0;
    for(int i=0;i<n;i++) s[i+1]=s[i]+a[i];
    int ans=s[k];
    for(int i=0;i<n-k;i++) ans=max(ans,s[i+k]-s[i]);
    cout<<ans<<endl;
  }
  return 0;
}