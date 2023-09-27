#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

const ll AMAX=100100;
const ll INF=1e10;

ll d[AMAX],color[AMAX];
vector<pair<ll,ll>> M[AMAX];
ll n;

void dijk(ll s){
  
  rep(i,n){
    d[i]=INF;
    color[i]=0;
  }
  d[s]=0;
  
  priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> p;
  p.push({0,s});
  
  pair<ll,ll> u;
  while(!p.empty()){
    u=p.top(); p.pop();
    color[u.second]=2;
    
    if(d[u.second]<u.first) continue;
    
    for(auto v:M[u.second]){
      if(color[v.first]!=2){
        if(d[u.second]+v.second<d[v.first]){
          d[v.first]=d[u.second]+v.second;
          color[v.first]=1;
          p.push({d[v.first],v.first});
        }
      }
    }
  }

}

int main(){
  ll m,r;
  cin>>n>>m>>r;
  
  ll a,b,w;
  rep(i,m){
    cin>>a>>b>>w;
    M[a].push_back({b,w});
  }
  
  dijk(r);
  
  rep(i,n){
    if(d[i]!=INF) cout<<d[i]<<endl;
    else cout<<"INF"<<endl;
  }
      
  return 0;
}
