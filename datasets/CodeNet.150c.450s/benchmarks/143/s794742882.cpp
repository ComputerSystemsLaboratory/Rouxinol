#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  map<int,long long> mp;
  long long ans=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    ans+=a[i];
    mp[a[i]]++;
  }
  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    int b,c;
    cin>>b>>c;
    mp[c]+=mp[b];
    ans-=b*mp[b];
    ans+=c*mp[b];
    mp[b]=0;
    cout<<ans<<endl;
  }
  return 0;
}
