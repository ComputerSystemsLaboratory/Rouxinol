#include <bits/stdc++.h>
using namespace std;
using ll=long;
#define V v[i]

int main(){
  ll t;cin>>t;
  while(t--){
    ll n,Q=0;cin>>n;
    vector<ll>v(n),N;
    for(ll &p:v)cin>>p;
    string s;cin>>s;
    for(ll i=n-1;i>=0;i--){
      for(ll p:N)V=min(V,V^p);
      N.push_back(V);
      Q|=s[i]=='1'&&V;
    }
    cout<<Q<<endl;
  }
}
