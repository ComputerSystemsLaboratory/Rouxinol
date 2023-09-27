//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <queue>

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

struct Edge{
  int to, cost;

  Edge(int t, int c): to(t), cost(c)
  {}
  bool operator>(const Edge& rhs) const{
	return cost > rhs.cost;
  }
};
typedef vector< vector<Edge> > Graph;

void Dijkstra(const Graph& edges, vector<int>& d, int s){
  const int V = edges.size();
  priority_queue<PII, vector<PII>, greater<PII> > pq;
  fill(d.begin(), d.end(), 123456789);
  d[s] = 0;
  pq.push(MP(0,s));

  while(!pq.empty()){
	PII pii = pq.top(); pq.pop();
	int v = pii.second;
	if(d[v] < pii.first) continue;
	for(int i=0;i<edges[v].size();++i){
	  const Edge& e = edges[v][i];
	  if(d[e.to] > d[v] + e.cost){
		d[e.to] = d[v] + e.cost;
		pq.push(MP(d[e.to], e.to));
	  }
	}
  }
}

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
int main(){
  int H, W, N; cin >> H >> W >> N;
  cin.ignore();
  vector<string> vs(H);
  REP(i,H) getline(cin, vs[i]);
  Graph G(H*W);
  vector<int> p(N+1);
  REP(y,H) REP(x,W){
	int id_f = y*W + x;
	if(vs[y][x] == 'X') continue;
	if(vs[y][x] == 'S') p[0] = id_f;
	if('1' <= vs[y][x] && vs[y][x] <= '9')
	  p[vs[y][x]-'0'] = id_f;
	
	REP(i,4){
	  int tx = x + dx[i], ty = y + dy[i];
	  int id_t = ty*W + tx;
	  if(tx < 0 || W <= tx || ty < 0 || H <= ty) continue;
	  if(vs[ty][tx] != 'X')
		G[id_f].PB(Edge(id_t, 1));
	}
  }

  int ans = 0;
  VI dist(H*W);
  REP(i,N){
	Dijkstra(G, dist, p[i]);
	ans += dist[p[i+1]];
  }
  cout << ans << endl;
  
  return 0;
}