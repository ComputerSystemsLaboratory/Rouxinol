#include <bits/stdc++.h>
using namespace std;
#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define _repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define _rep(i,n) _repl(i,0,n)
#define rep(...) GET_MACRO(__VA_ARGS__, _repl, _rep)(__VA_ARGS__)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define uniq(x) sort(all(x)),(x).erase(unique(all(x)),end(x))
#define fi first
#define se second
#define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
void _dbg(string){cout<<endl;}
template<class H,class... T> void _dbg(string s,H h,T... t){int l=s.find(',');cout<<s.substr(0,l)<<" = "<<h<<", ";_dbg(s.substr(l+1),t...);}
template<class T,class U> ostream& operator<<(ostream &o, const pair<T,U> &p){o<<"("<<p.fi<<","<<p.se<<")";return o;}
template<class T> ostream& operator<<(ostream &o, const vector<T> &v){o<<"[";for(T t:v){o<<t<<",";}o<<"]";return o;}

#define INF 1120000000
#define long long long // for codeforces

class UnionFind {
public:
  vector<int> par, rank;
  // if par is negative, it is a root, of which tree size is the abs-value.
  // rank represents depth
  UnionFind(int sz) : par(sz, -1), rank(sz, 0){}
  int find(int x){
    if(par[x]<0) return x;
    else return par[x] = find(par[x]);
  }
  void unite(int x, int y){
    x=find(x); y=find(y);
    if(x==y) return;
    if(rank[x] < rank[y]) swap(x,y);
    par[x] += par[y];
    par[y] = x;
    if(rank[x]==rank[y]) rank[x]++;
  }
  inline bool same(int x, int y){ return find(x) == find(y); }
  inline int size(int x){ return -par[find(x)]; }
};

int main(){
  int n,q;
  cin>>n>>q;

  UnionFind uf(n);

  rep(i,q){
    int t,x,y;
    cin>>t>>x>>y;
    if(t==0) uf.unite(x,y);
    else cout << (uf.same(x,y)?1:0) << "\n";
  }

  return 0;
}