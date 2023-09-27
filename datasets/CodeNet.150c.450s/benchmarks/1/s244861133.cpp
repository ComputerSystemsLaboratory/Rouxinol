#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
const ll INF = (1ll << 60);


vi lis(vi a){
  ll size=a.size();
  vi v(size,INF);
  for(ll i:a){
    auto it=lower_bound(v.begin(),v.end(),i);
    *it=i;
  }
  vi ret; for(ll i:v) if(i==INF) break; else ret.push_back(i);
  return ret;
}

int main(){
  ll n; cin>>n;
  vi a(n); REP(i,n) cin>>a[i];
  cout<<lis(a).size()<<endl;
}