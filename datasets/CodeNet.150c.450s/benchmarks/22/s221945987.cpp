#include "bits/stdc++.h"

using namespace std;

typedef pair<int, int> P;
#define int long long
#define ll long long
#define mod 1000000007
#define INF (1LL<<60)

#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;


struct edge { int to, cost; };
vector<vector<edge>> g;
vector<int> dist;

bool shortest_path(int s){
	int N = g.size();
	dist.assign(N, INF);
	dist[s] = 0;

	bool negative_cycle = false;

	for (int i = 0; i < N; i++){
		for (int v = 0; v < N; v++){
			for (edge e : g[v]){

				if (dist[v] != INF && dist[e.to] > dist[v] + e.cost){
					dist[e.to] = dist[v] + e.cost;
					// n回目にも更新があれば負サイクルあり
					if (i == N - 1){
						dist[e.to] = -INF;
						negative_cycle = true;
					}
				}
			}
		}
	}
	return negative_cycle;
}

signed main(){

	int V, E, s;
	cin >> V >> E >> s;
	g.assign(V, vector<edge>());
	for (int i = 0; i < E; i++){
		int a, b, c;
		cin >> a >> b >> c;
		g[a].push_back(edge{ b, c });
	}
	bool negative_cycle = shortest_path(s);

	if (negative_cycle){
		cout << "NEGATIVE CYCLE" << endl;
	}
	else{
		for (int i = 0; i < V; i++)
			if (dist[i] == INF) cout << "INF" << endl;
			else cout << dist[i] << endl;
	}


	return 0;
}
