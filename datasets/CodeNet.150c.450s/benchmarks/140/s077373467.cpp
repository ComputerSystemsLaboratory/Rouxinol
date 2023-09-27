#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std; typedef long long ll; int an=0; const ll INF = 1e18; const ll MOD = 1e9+7;
typedef pair<int,int> P; const int xx[4]={1,-1,0,0}, yy[4]={0,0,1,-1}; struct tp{int x,y; ll cs;};
struct unf {
  vector<int> v; unf(int n){v.resize(n); for(int i=0;i<n;i++) v[i]=i;}
  int root(int x) { if (v[x]==x) return x; return v[x]=root(v[x]);}
  void unite(int x,int y) {int p=root(x), q=root(y); if (p==q) return; v[p]=q;}
  bool same(int x, int y) {return root(x)==root(y);}
  void print() {for(int x:v) cout<<x<<" "; cout<<endl;}
};

int main(){
  int n,m; cin>>n>>m; //if (m==0) return puts("0")*0;
  tp t[m]; for(int i=0;i<m;i++) cin>>t[i].x>>t[i].y>>t[i].cs;
  sort(t,t+m,[](tp a, tp b){return a.cs<b.cs;});

  unf u(n); ll an=0;
  for(int i=0;i<m;i++) {
    //cout<<t[i].x<<" "<<t[i].y<<" "<<t[i].cs<<endl;
    if (!u.same(t[i].x, t[i].y)) {an+=t[i].cs; u.unite(t[i].x, t[i].y);}
  }
  cout<<an<<endl;
}
