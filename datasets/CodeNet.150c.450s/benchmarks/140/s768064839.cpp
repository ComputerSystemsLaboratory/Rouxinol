#include<bits/stdc++.h>

using namespace std;

const int sz = 1e4 + 13;

typedef pair<int, int> pii;

int n, r, q;

vector<vector<pii> > g (sz);
vector<vector<pii> > t (sz);

vector<int> C (sz);

struct edge{
  int u, v, cost;
};

struct edgeCmp{
  int operator() (const edge& a, const edge& b){return a.cost > b.cost;}
};

int find(int x){return (x == C[x] ? x : C[x] = find(C[x]) );}

bool same( int x, int y){return find(x) == find(y);}

void merge(int x, int y){C[find(x)] = C[find(y)];}

int mst(){
  for(int i = 0; i < n; ++i)
    C[i] = i;
  vector<edge> T;
  priority_queue<edge, vector<edge>, edgeCmp> E;

  for(int i = 0; i < n; ++i){
    for(auto j : g[i]){
        edge e;
        e.u = i;
        e.v = j.first;
        e.cost = j.second;
        E.push(e);
    }
  }

  int weight = 0;

  while(T.size() < n - 1 && !E.empty()){
    edge cur = E.top(); E.pop();
    if(!same(cur.u, cur.v)){
      T.push_back(cur);
      weight += cur.cost;
      merge(cur.u, cur.v);
    }
  }

  for(auto e : T){
    t[e.u].push_back({e.v, e.cost});
    t[e.v].push_back({e.u, e.cost});
  }
  return weight;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifdef Larra
  freopen("in","r",stdin);
  freopen("out","w",stdout);
  #endif
  cin>>n>>r;
  for(int i = 0; i < r; ++i){
    int a,b,c;
    cin>>a>>b>>c;
    g[a].push_back({b,c});
    g[b].push_back({a,c});
  }
  int weight = mst();
  cout<<weight<<endl;
}

