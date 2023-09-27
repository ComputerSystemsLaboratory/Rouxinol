#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

typedef pair<int,int> pii;
const int INF =  1000000000;

int par[10000],rnk[10000];

void init(int n){
  for(int i=0;i<n;i++){
    par[i] = i;
    rnk[i] = 1;
  }
}
int find(int x){
  if(par[x]==x) return x;
  else return par[x] = find(par[x]);
}
bool same(int x,int y){
  return find(x)==find(y);
}
void unite(int x,int y){
  x = find(x);
  y = find(y);
  if(rnk[x]>rnk[y]) par[y] = x;
  else{
    par[x] = y;
    if(rnk[x]==rnk[y]) rnk[y]++;
  }
  return;
}

int main(){
  int V,E;
  vector<pair<int,pii> > es;
  scanf("%d %d",&V,&E);
  for(int i=0;i<E;i++){
    int s,t,w;
    scanf("%d %d %d",&s,&t,&w);
    es.push_back(make_pair(w,pii(s,t)));
  }
  int ans = 0;
  int cost[10000];
  fill(cost,cost+V,INF);
  sort(es.begin(),es.end());
  cost[0] = 0;
  init(V);
  for(int i=0;i<es.size();i++){
    if(!same(es[i].second.first,es[i].second.second)){
      ans += es[i].first;
      unite(es[i].second.first,es[i].second.second);
    }
  }
  printf("%d\n",ans);
  return 0;
}