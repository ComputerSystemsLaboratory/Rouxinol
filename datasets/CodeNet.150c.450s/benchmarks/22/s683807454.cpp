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

struct edge{
  int to,cost,from;
  edge(int f, int t, int c){
    from = f;
    to = t;
    cost = c;
  }
};
vector<ll> d;
vector<bool> is_pass;
vector<edge> edges;
int V,E,r;
ll INF = 5000000000;

bool berm(){
  for(int ct=0;ct<V;ct++){
    for(int i=0;i<E;i++){
      int v = edges[i].to;
      int u = edges[i].from;
      int c = edges[i].cost;
      if(is_pass[u])is_pass[v] = is_pass[u];
      if(d[u] + c < d[v]){
	d[v] = d[u] + c;
	if(ct == V-1&&is_pass[u]){
	  return false;
	  }
      }
    }
  }
  return true;
}
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> V >> E >> r;//V is number of edgent,E is number of hen,r is defedgent
  d.resize(V,INF);
  is_pass.resize(V,false);
  is_pass[r] = true;
  d[r] = 0;
  edges.resize(E,edge(0,0,0));
  REP(i,E){
    int from,to,cost;
    cin >> from >> to >> cost;
    edges[i] = edge(from,to,cost);
  }
  if(berm()){
    REP(i,V)
      if(!is_pass[i])cout << "INF" << endl;
      else cout << d[i] << endl;
  }else{
    cout << "NEGATIVE CYCLE" << endl;
  }
  return 0;
}