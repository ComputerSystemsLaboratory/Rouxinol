#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = ~(1 << 31);

class Edge{
public:
	int source, dist, cost;
	Edge() : source(-1), dist(-1), cost(INF) {}
};

int main(){
	int v, e, r, s, t, d;
	vector< vector< int > > min_cost;
	vector< Edge > edge;
	bool negative = false;
	
	cin >> v >> e;
	edge.resize(e);
	min_cost.resize(v);
	
	for(int i = 0; i < v; ++i){
		min_cost[i].resize(v);
		for(int j = 0; j < v; ++j) min_cost[i][j] = INF;
	}
	
	for(int i = 0; i < e; ++i){
		cin >> s >> t >> d;
		edge[i].source = s;
		edge[i].dist = t;
		edge[i].cost = d;
	}
	
	
	
	for(int r = 0; r < v; ++r){
		min_cost[r][r] = 0;
		for(int i = 0; i < v; ++i){
			for(int k = 0; k < e; ++k){
				int source = edge[k].source;
				int dist = edge[k].dist;
				int cost = min_cost[source][r] + edge[k].cost;
				if(min_cost[source][r] != INF && min_cost[dist][r] > cost){
					min_cost[dist][r] = cost;
				}
			}
		}
	}
	
	for(int r = 0; r < v; ++r){
		for(int k = 0; k < e; ++k){
			if(min_cost[edge[k].source][r] != INF && min_cost[edge[k].source][r] + edge[k].cost < min_cost[edge[k].dist][r]){
				negative = true;
				break;
			}
		}
		if(negative) break;
	}
	
	if(negative){
		cout << "NEGATIVE CYCLE" << endl;
	}else{
		for(int r = 0; r < v; ++r){
			for(int i = 0; i < v; ++i){
				if(i != 0) cout << " ";
				if(min_cost[i][r] == INF) cout << "INF";
				else cout << min_cost[i][r];
			}
			cout << endl;
		}
	}
	return 0;
}