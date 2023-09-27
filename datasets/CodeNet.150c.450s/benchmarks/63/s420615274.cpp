#include "bits/stdc++.h"
#define int long long
#define range(i, a, b) for(auto i = a; i < b; i++)
#define rep(i, a) range(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
using vi = vector <int>;
using vvi = vector <vi>;


class Dijkstra{
private:
	struct edge{int to, cost;};
	int V;
	vector <vector <edge>> G;
	vector <int> d;
	priority_queue <pair <int, int>, vector <pair <int, int>>, greater <pair <int, int>>> que;

public:
	Dijkstra(int v, int maxv){
		V = v;
		G = vector <vector <edge>> (maxv);
		d = vector <int> (maxv);
	}

	void addEdge(int s, int t, int c){
		G[s].push_back({t, c});
	}

	int dist(int n){
		return d[n];
	}

	void execute(int s){
		for (int i = 0; i < V; i++)
			d[i] = INF;
		d[s] = 0;
		que.push({0 , s});
		while(!que.empty()){
			pair <int, int> p = que.top(); que.pop();
			int v = p.second;
			if(d[v] < p.first)continue;
			for(int i = 0; i < G[v].size(); i++){
				edge e = G[v][i];
				if(d[e.to] > d[v] + e.cost){
					d[e.to] = d[v] + e.cost;
					que.push({d[e.to], e.to});
				}
			}
		}
	}
};

signed main(){
	int v, e, r;
	cin >> v >> e >> r;
	Dijkstra dijkstra(v, 100000);

	rep(i, e){
		int s, t, d;
		cin >> s >> t >> d;
		dijkstra.addEdge(s, t, d);
	}

	dijkstra.execute(r);

	rep(i, v){
		if(dijkstra.dist(i) == INF)
			cout << "INF" << endl;
		else
			cout << dijkstra.dist(i) << endl;
	}
}