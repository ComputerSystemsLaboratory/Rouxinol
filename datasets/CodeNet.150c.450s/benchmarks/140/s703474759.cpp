// I SELL YOU...! 
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<queue>
#include<chrono>
#include<iomanip>
#include<map>
#include<set>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
void init_io(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << setprecision(10);
}
class union_find{
  int n;
  vector<int> par,rk,size;
  public:
  union_find(int max_n){
    n = max_n+1;
    for(int i=0;i<=n;i++){
      par.emplace_back(i);
      rk.emplace_back(0);
      size.emplace_back(1);
    }
  }
  int root(int x){
    vector<int> nodes;
    while(x!=par[x]){
      nodes.emplace_back(x);
      x = par[x];
    }
    for(auto v:nodes){
      par[v] = x;
    }
    return x;
  }
  void unite(int x,int y){
    x = root(x);
    y = root(y);
    if(x==y) return;
    if(rk[x]<rk[y]){
      par[x] = y;
      size[y] += size[x];
    }else{
      par[y] = x;
      if(rk[x]==rk[y]) rk[x]++;
      size[x] += size[y];
    }
  }
  bool same(int x,int y){
    return root(x)==root(y);
  }
  int treesize(int x){
    return size[root(x)];
  }
};
using TP = tuple<ll,ll,ll>;
signed main(){
  init_io();
  ll v,e,s,t,w,ans=0;
  cin >> v >> e;
  priority_queue<TP,vector<TP>,greater<TP>> que;
  union_find uf(v);
  for(int i=0;i<e;i++){
    cin >> s >> t >> w;
    que.push(TP(w,s,t));
  }
  while(!que.empty()){
    TP tmp = que.top();
    que.pop();
    s = get<1>(tmp);
    t = get<2>(tmp);
    if(!uf.same(s,t)){
      ans += get<0>(tmp);
      uf.unite(s,t);
    }
  }
  cout << ans << endl;
}

