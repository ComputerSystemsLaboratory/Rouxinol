#include "bits/stdc++.h"
#include "math.h"
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<int> vin;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define rep(i,a,b) for(ll i=(a);i<(b);++i)
#define drep(i,a,b) for(ll i=(a);i>=(b);--i)
#define SIZE(a) int((a).size())
#define out(a) cout<<(a)<<endl;
const int MAX = 510000;
const ll MOD = 10000000007;
ll fac[MAX], finv[MAX], inv[MAX];

int main(){
  ll v,e,r,cnt=0;cin>>v>>e>>r;
  vvll g(e,vll(3));vll dis(v,MOD);
  rep(i,0,e){
    ll s,t,d;cin>>s>>t>>d;
    
    g[i][0]=s; g[i][1]=t; g[i][2]=d;
  }
  dis[r]=0;
  
  while(cnt<v){
    bool end=true;
    for(vll u:g){
      if(dis[u[0]]!=MOD&&dis[u[0]]+u[2]<dis[u[1]]){
        dis[u[1]]=dis[u[0]]+u[2];
        end=false;
      }
    }
    if(end)break;
    cnt++;
  }
  if(cnt==v){out("NEGATIVE CYCLE");}
  else{
    rep(i,0,v){
      if(dis[i]!=MOD){out(dis[i]);}
      else{out("INF");}
    }
  }
  return 0;
}



