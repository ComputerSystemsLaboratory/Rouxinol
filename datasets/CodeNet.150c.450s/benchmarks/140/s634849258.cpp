#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(vec) vec.begin(),vec.end()
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef tuple<ll,ll,ll> tlll;
typedef tuple<int,int,int> tiii;
const ll mod=1e9+7;
const int inf=1<<30;

struct unionfind{
  vector<int> par;
  vector<int> rank;
  unionfind(int n=1){
    init(n);
  }
  void init(int n=1){
      par.resize(n); rank.resize(n);
      for(int i=0;i<n;++i) par[i]=i,rank[i]=0;
  }
  int root(int x){
    if(par[x]==x){
      return x;
    }
    else{
      int r=root(par[x]);
      return par[x]=r;
    }
  }
  bool issame(int x,int y){
    return root(x)==root(y);
  }
  bool merge(int x,int y){
    x=root(x); y=root(y);
    if(x==y) return false;
    if(rank[x]<rank[y]) swap(x,y);
    if(rank[x]==rank[y]) ++rank[x];
    par[y]=x;
    return true;
  }
};

struct edge{int u,v,cost;};

bool comp(const edge& e1,const edge& e2){
  return e1.cost<e2.cost;
}

ll kruskal(int n,int m,vector<edge>& es){
  sort(es.begin(),es.end(),comp);
  unionfind uf(n);
  ll res=0;
  rep(i,m){
    if(!uf.issame(es[i].u,es[i].v)){
      uf.merge(es[i].u,es[i].v);
      res+=es[i].cost;
    }
  }
  return res;
}

int main(){
  int n,m; cin >> n >> m;
  vector<edge> es(m);
  rep(i,m){
    int a,b,c;
    cin >> a >> b >> c;
    es[i]={a,b,c};
  }
  cout << kruskal(n,m,es) << endl;
  
}
