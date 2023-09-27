#include<bits/stdc++.h>
using namespace std;
int n,ans,a[50000];
int main(){
  while(cin>>n&&n){
    ans=1e9;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)ans=min(ans,a[i]-a[i-1]);
    cout<<ans<<endl;
  }
  return 0;
}