#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<queue>
#include<stack>
#include<numeric>
using namespace std;
#define INF (1 << 30) - 1
#define LINF 1LL << 60
const int MOD = 1000000007;
using ll = long long;
using P = pair<int, int>;

struct Edge{
	int from, to;
	ll cost;
	Edge(int from, int to, ll cost) : from(from), to(to), cost(cost){}
};

int n, m;

int ng = 0;

vector<Edge> es;
vector<int> dist;
void bellman_ford(int s){
	dist[s] = 0;
	for(int i = 0; i < n; ++i){
		for(auto e : es){
			if(dist[e.from] == INF)continue;
			if(dist[e.from] + e.cost < dist[e.to]){
				dist[e.to] = dist[e.from] + e.cost;
				if(i == n - 1){
					ng = 1;
					break;
				}
			}
		}
	}
}

int main(){
  int s;
  cin >> n >> m >> s;
  for(int i = 0; i < m; ++i){
  	int a, b, c;
  	cin >> a >> b >> c;
  	es.push_back(Edge(a, b, c));
  }

  dist.assign(n, INF);
  bellman_ford(s);
  if(ng){
  	cout << "NEGATIVE CYCLE" << endl;
  	return 0;
  }
  for(int i = 0; i < n; ++i){
  	if(dist[i] == INF)cout << "INF" << endl;
  	else cout << dist[i] << endl;
  }
  return 0;
}

