#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

int main() {
  ll v,e;
  cin >> v >> e;
  vector<map<ll,ll>> E(v);
  for(ll i=0;i<e;i++) {
    ll s,t,dis;
    cin >> s >> t >> dis;
    E[s][t]=dis;
    E[t][s]=dis;
  }
  set<ll> al;
  al.insert(0);
  priority_queue<pll,vector<pll>,greater<pll>> q;
  for(auto p:E[0]) {
    q.push(pll(p.second,p.first));
  }
  ll ans=0;
  while(al.size()<v) {
    auto p=q.top();
    q.pop();
    if(al.count(p.second)) continue;
    ans+=p.first;
    al.insert(p.second);
    for(auto pp:E[p.second]) {
      q.push(pll(pp.second,pp.first));
    }
  }
  cout << ans << endl;
}
