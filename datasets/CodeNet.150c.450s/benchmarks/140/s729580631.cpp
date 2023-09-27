#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef pair<LL, LL> PLL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define FF first
#define SS second
template<class S, class T>
istream& operator>>(istream& is, pair<S,T>& p){
  return is >> p.FF >> p.SS;
}

const double EPS = 1e-10;
const double PI  = acos(-1.0);
const LL MOD = 1e9+7;

class UnionFind{
private:
  vector<int> par, rank;
public:
  UnionFind(int n){
	par.assign(n, 0);
	rank.assign(n, 0);
	for(int i=0;i<n;++i)
	  par[i] = i;
  }

  //find root of x
  int find(int x){
	if(par[x] == x)
	  return x;
	return (par[x] = find(par[x]));
  }

  void unite(int x, int y){
	x = find(x);
	y = find(y);
	if(x == y) return;

	if(rank[x] < rank[y])
	  par[x] = y;
	else{
	  par[y] = x;
	  if(rank[x] == rank[y])
		++rank[x];
	}
  }

  bool same(int x, int y){
	return find(x) == find(y);
  }
};

struct Edge{
  int to, cost;

  Edge(int t, int c): to(t), cost(c)
  {}
  bool operator>(const Edge& rhs) const{
	return cost > rhs.cost;
  }
  bool operator<(const Edge& rhs) const{
	return cost < rhs.cost;
  }
};
typedef vector< vector<Edge> > Graph;

void add_edge(Graph& graph, int u, int v, int cost){
  graph[u].push_back(Edge(v,cost));
  graph[v].push_back(Edge(u,cost));
}

int kruskal(const Graph& G){
  int N = SZ(G);
  UnionFind uf(N);
  vector<pair<Edge,int>> edges;
  REP(i,N) for(auto& e:G[i]){
	edges.push_back(MP(e, i));
  }
  sort(ALL(edges));

  int res = 0;
  for(int i=0,n=1;n<N;++i){
	auto& e = edges[i].first;
	int v = edges[i].second;
	if(!uf.same(e.to,v)){
	  uf.unite(e.to, v);
	  res += e.cost;
	  ++n;
	}
  }
  return res;
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int V, E; cin >> V >> E;
  Graph G(V);
  REP(i,E){
	int a, b, c; cin >> a >> b >> c;
	add_edge(G, a, b, c);
  }

  cout << kruskal(G) << endl;

  return 0;
}