#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for (ll i=0; i<n; ++i)
#define all(c) begin(c),end(c)
template<typename T1, typename T2>
bool chmax(T1 &a,T2 b){if(a<b){a=b;return true;}else return false;}
template<typename T1, typename T2>
bool chmin(T1 &a,T2 b){if(a>b){a=b;return true;}else return false;}
/*

*/

vector<vector<ll>> G;
vector<bool> seen;
queue<ll> Q;
struct UnionFind{
  vector<ll> par,siz;
  
  UnionFind(ll N):par(N+1),siz(N+1,1){
    for(int i=0; i<=N; i++)
      par[i]=i;
  }
  
  void mkpar(ll n, ll set){//親はset=根
    for(auto next_n: G[n]){
      if (seen[next_n]) continue;
      seen[next_n]=true;
      par[next_n]=set;
      mkpar(next_n, set);
    }
  }

  void mkpar2(){//親は1個上、引数1個
    while (!Q.empty()){
      ll n = Q.front(); Q.pop();
      for(auto next_n: G[n]){
        if (seen[next_n]) continue;
        seen[next_n] = true;
        par[next_n] = n;
        Q.push(next_n);
      }
    }
  }

  ll root(ll x){
    if(par[x]==x)
      return x;
    return par[x]=root(par[x]);
  }
  
  void unite(ll x, ll y){
    ll rx=root(x), ry=root(y);
    if(rx==ry)
      return;
    par[ry]=rx;
    siz[rx]+=siz[ry];    
  }
  
  bool issame(ll x, ll y){
    return root(x)==root(y);
  }
  
  ll size(ll x){
    return siz[root(x)];
  }
};

int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);

  ll N, M; cin >> N >> M;
  G.assign(N+1, vector<ll>());
  seen.assign(N+1,false);
  for(int i=0; i<M; i++){
    ll a,b; cin>>a>>b;
    G[a].emplace_back(b);
    G[b].emplace_back(a);
  }
  UnionFind tree(N);
  seen[1]=true;
  Q.push(1);
  tree.mkpar2();
  cout << "Yes" << endl;
  for (ll i=2; i<=N; i++)
    cout<<tree.par[i]<<endl;
}
