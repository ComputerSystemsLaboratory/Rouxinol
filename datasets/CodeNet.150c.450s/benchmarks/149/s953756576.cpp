#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define PB push_back
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
const ll INF = (1ll << 60);
typedef pair<ll,ll> pii;
using namespace std;
struct UnionFind {
  ll size,*par,*rk;
  UnionFind(ll sz){
    size=sz;
    par=new ll[size]; REP(i,size) par[i]=i;
    rk=new ll[size]; REP(i,size) rk[i]=0;
  }
  ll find(ll x){
    if(par[x]==x) return x;
    else return par[x]=find(par[x]);
  }
  void unite(ll x,ll y){
    x=find(x); y=find(y);
    if(rk[x]>rk[y]) par[y]=x;
    else if(rk[x]<rk[y]) par[x]=y;
    else {par[x]=y;rk[y]++;}
  }
  bool same(ll x,ll y) {
    return find(x)==find(y);
  }
};

int main() {
  int n, q; cin >> n >> q;
  UnionFind uf(n);
  for(int i = 0; i < q; i++) {
    int com, x, y; cin >> com >> x >> y;
    if(com == 0) uf.unite(x, y);
    else cout << (uf.same(x, y) ? 1 : 0) << endl;
  }

}

// verified