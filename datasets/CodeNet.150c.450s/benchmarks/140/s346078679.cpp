#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;
struct edge{int cost,u,v;};
int INF = 100000000;
int V,E;
bool comp(const edge& e1, const edge& e2){
  return e1.cost < e2.cost;
}
vector<edge> es;
vector<int> par;
vector<int> depth;
void init(){
  par.resize(V);
  depth.resize(V,0);
  REP(i,V)par[i] = i;
}

int find(int x){
  if(x == par[x]){
    return x;
  }else{
    return par[x] = find(par[x]);
  }
}

void unite(int x, int y){
  x = find(x);
  y = find(y);
  if(x==y)return;
  if(depth[x] < depth[y]){
    par[x] = y;
  }else{
    par[y] = x;
    if(depth[x] == depth[y])depth[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}

int kruskal(){
  sort(es.begin(),es.end(),comp);
  init();
  int res = 0;
  for (int i = 0;i<E;i++){
    edge e = es[i];
    if(!same(e.u,e.v)){
      unite(e.u,e.v);
      res += e.cost;
    }
  }
  return res;
}
  
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> V >> E;
  es.resize(E);
  REP(i,E){
    int s,t,c;
    cin >> s >> t >> c;
    es[i].u = s;es[i].v = t;
    es[i].cost = c;
  }
  cout << kruskal() << endl;
  
  return 0;
}