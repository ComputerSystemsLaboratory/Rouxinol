#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
  int n;cin>>n;
  map<int,int> m;
  int ans=0;
  while(n--){
    int a;cin>>a;ans+=a;
    m[a]++;
  }
  int q;cin>>q;
  while(q--){
    int b,c;cin>>b>>c;
    ans+=(c-b)*m[b];
    m[c]+=m[b];
    m[b]=0;
    cout<<ans<<endl;
  }
}
