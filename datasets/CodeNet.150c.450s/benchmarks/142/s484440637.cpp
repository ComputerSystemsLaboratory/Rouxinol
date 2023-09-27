#include <bits/stdc++.h>
using namespace std; 
#define int int64_t
#define itn int
#define fi first
#define se second 
signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,k,b,ans=0,sum=0;
  vector<int> a;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>b;
    a.push_back(b);
  }
  for(int i=0;i<k;i++){
    sum+=a[i];
  }
  for(int i=k;i<n;i++){
    if(sum<sum+a[i]-a[i-k]) cout<<"Yes\n";
    else cout<<"No\n";
  }
}
  
