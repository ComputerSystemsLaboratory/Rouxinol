#include <bits/stdc++.h>
using namespace std;

using ll=long long;
void chmin(ll &a,ll b){
  if(a>b)a=b;
}

int main(){
  int t;cin>>t;
  while(t--){
    int n,ans=0;cin>>n;
    vector<ll>v(n),now;
    for(int i=0;i<n;i++)cin>>v[i];
    string s;cin>>s;
    for(int i=n-1;i>=0;i--){
      for(ll p:now)chmin(v[i],v[i]^p);
      if(v[i])
        if(s[i]=='0')now.push_back(v[i]);
        else ans=1;
    }
    cout<<ans<<endl;
  }
}
