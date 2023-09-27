//   _/                _/                 _/_/_/   _/
//_/_/_/_/   _/_/   _/_/_/_/   _/_/    _/       _/_/
// _/     _/    _/   _/     _/    _/  _/_/_/     _/
//_/     _/    _/   _/     _/    _/  _/    _/   _/
// _/_/   _/_/       _/_/   _/_/      _/_/     _/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;
using ll=long long;
const int MOD=1e9+7;
const double pi=3.14159265358979323846;
const int inf=1e9;
const ll INF=1e18;
using P=pair<int,int>;
int par[100005]={};
int find(int x) {
  if(par[x]==x) {
    return x;
  }
  return par[x]=find(par[x]);
}
bool same(int x,int y) {
  return par[x]==par[y];
}
void unit(int x,int y) {
  x=find(x),y=find(y);
  if(x!=y) {
    par[x]=y;
  }
}
int main() {
  cin.tie(0),cout.tie(0);
  ios::sync_with_stdio(false);
  int n,m,s,t,q;
  cin >> n >> m;
  for(int i=0; i<n; i++) {
    par[i]=i;
  }
  for(int i=0; i<m; i++) {
    cin >> s >> t;
    unit(s,t);
  }
  cin >> q;
  while(q--) {
    cin >> s >> t;
    if(find(s)==find(t)) {
      cout << "yes" << "\n";
    }
    else {
      cout << "no" << "\n";
    }
  }
}
