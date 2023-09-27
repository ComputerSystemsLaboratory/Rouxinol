#include <bits/stdc++.h>
using namespace std;

using VI = vector<int>;
using VVI = vector<VI>;
using PII = pair<int, int>;
using LL = long long;
using VL = vector<LL>;
using VVL = vector<VL>;
using PLL = pair<LL, LL>;
using VS = vector<string>;

#define ALL(a)  begin((a)),end((a))
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SORT(c) sort(ALL((c)))
#define RSORT(c) sort(RALL((c)))
#define UNIQ(c) (c).erase(unique(ALL((c))), end((c)))

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define FF first
#define SS second
template<class S, class T>
istream& operator>>(istream& is, pair<S,T>& p){
  return is >> p.FF >> p.SS;
}
template<class S, class T>
ostream& operator<<(ostream& os, const pair<S,T>& p){
  return os << p.FF << " " << p.SS;
}
template<class T>
void maxi(T& x, T y){
  if(x < y) x = y;
}
template<class T>
void mini(T& x, T y){
  if(x > y) x = y;
}


const double EPS = 1e-10;
const double PI  = acos(-1.0);
const LL MOD = 1e9+7;
const int INF = 1e9;

struct Edge{
  int to, cost;

  Edge(int t, int c = 0): to(t), cost(c)
  {}
  bool operator>(const Edge& rhs) const{
	return cost > rhs.cost;
  }
  bool operator<(const Edge& rhs) const{
	return cost < rhs.cost;
  }

};
using Graph =  vector< vector<Edge> >;

void Dijkstra(const Graph& G, vector<int>& d, int s){
  using Type = pair<int,int>;
  priority_queue<Type, vector<Type>, greater<Type> > pq;
  fill(d.begin(), d.end(), INF);
  d[s] = 0;
  pq.push(MP(0,s));

  while(!pq.empty()){
	Type pii = pq.top();
	pq.pop();
	int v = pii.second;
	if(d[v] < pii.first) continue;
	for(const auto& e: G[v]){
	  if(d[e.to] > d[v] + e.cost){
		d[e.to] = d[v] + e.cost;
		pq.push(MP(d[e.to], e.to));
	  }
	}
  }
}


int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int V, E, R;
  cin >> V >> E >> R;
  Graph G(V);
  for(int i=0;i<E;++i){
	int s, t, d;
	cin >> s >> t >> d;
	G[s].emplace_back(t, d);
  }

  vector<int> dist(V);
  Dijkstra(G, dist, R);
  REP(i,V){
	if(dist[i] == INF) cout << "INF" << endl;
	else cout << dist[i] << endl;
  }
  
  return 0;
}