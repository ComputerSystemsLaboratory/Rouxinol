#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main(){
  int n,m,b,ans=0;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(all(a));
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>b;
    if(b==*lower_bound(all(a),b))ans++;
  }
  cout<<ans<<endl;
  return 0;
}