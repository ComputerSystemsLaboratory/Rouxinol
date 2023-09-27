#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

struct union_find{
  int par[10000],rank[10000];
  union_find(int n){
    for(int i=0;i<n;i++){
      par[i] = i;
      rank[i] = 1;
    }
  }
  int find(int x){
    if(par[x]==x) return x;
    else return par[x] = find(par[x]);
  }
  void unite(int x,int y){
    x = find(x);
    y = find(y);
    if(x==y) return;
    if(rank[x]>rank[y]) par[y] = x;
    else{
      if(rank[x]==rank[y]) rank[y]+=rank[x];
      par[x] = y;
    }
  }
  bool same(int x,int y){return find(x)==find(y);}
};

int main(){
  int v,e;
  scanf("%d %d",&v,&e);
  union_find uf(v);
  vector<pair<int,pair<int,int> > > E;
  for(int i=0;i<e;i++){
    int s,t,w;
    scanf("%d %d %d",&s,&t,&w);
    E.push_back(make_pair(w,make_pair(s,t)));
  }
  sort(E.begin(),E.end());
  int ans = 0;
  //bool used[v];
  //fill(used,used+v,false);
  for(int i=0;i<E.size();i++){
    int s = E[i].second.first;
    int t = E[i].second.second;
    int w = E[i].first;
    if(!uf.same(s,t)){
      ans+=w;
      uf.unite(s,t);
    }
  }
  printf("%d\n",ans);
  return 0;
}