#include <bits/stdc++.h>
using namespace std;

int main(){
  bool flag=true;
  int n,k;
  cin>>n>>k;
  while(flag){
    vector<long long> a(n+1);
    a[0]=0;
    for(int i=0;i<n;i++){
      long long x;
      cin>>x;
      a[i+1]=a[i]+x;
    }
    long long ans=0;
    for(int i=0;i<=n-k;i++){
      ans=max(ans,a[k+i]-a[i]);
    }
    cout<<ans<<endl;
    cin>>n>>k;
    if(n==0&&k==0) flag=false;
  }
}
    
