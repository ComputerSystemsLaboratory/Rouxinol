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
const int INF=INT_MAX;
const int MAX = 510000;
const ll MOD = 1L<<32;
ll fac[MAX], finv[MAX], inv[MAX];
//ワーシャルフロイド法、o(v^3)
int main(){
  ll v,e;cin>>v>>e;
  vvll g(v,vll(v,MOD));
  rep(i,0,e){
    ll s,t,d;cin>>s>>t>>d;
    g[s][t]=d;
  }
  rep(i,0,v){g[i][i]=0;}
  bool ok=true;
  rep(k,0,v){
    rep(i,0,v){
      if(g[i][k]==MOD)continue;
      rep(j,0,v){
        if(g[k][j]==MOD)continue;
        g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
      }
      if(g[i][i]<0)ok=false;//負の閉回路の検出
    }
  }
  if(!ok){
    out("NEGATIVE CYCLE");
  }
  else{
      rep(i,0,v){
    rep(j,0,v){
    
      if(g[i][j]!=MOD){cout<<g[i][j];}
      else{cout<<"INF";}
      if(j!=v-1){cout<<" ";}
    }
    cout<<endl;
  }
  }
  
  
}



