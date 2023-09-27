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
	vector< int > min_cost;
	vector< Edge > edge;
	bool negative = false;
	
	cin >> v >> e >> r;
	edge.resize(e);
	min_cost.resize(v);
	
	for(int i = 0; i < v; ++i){
		min_cost[i] = INF;
	}
	
	for(int i = 0; i < e; ++i){
		cin >> s >> t >> d;
		edge[i].source = s;
		edge[i].dist = t;
		edge[i].cost = d;
	}
	
	min_cost[r] = 0;
	
	for(int i = 0; i < v; ++i){
		for(int k = 0; k < e; ++k){
			int source = edge[k].source;
			int dist = edge[k].dist;
			int cost = min_cost[source] + edge[k].cost;
			if(min_cost[source] != INF && min_cost[dist] > cost){
				min_cost[dist] = cost;
			}
		}
	}
	
	for(int k = 0; k < e; ++k){
		if(min_cost[edge[k].source] != INF && min_cost[edge[k].source] + edge[k].cost < min_cost[edge[k].dist]){
			negative = true;
			break;
		}
	}
	
	if(negative){
		cout << "NEGATIVE CYCLE" << endl;
	}else{
		for(int i = 0; i < v; ++i){
			if(min_cost[i] == INF) cout << "INF" << endl;
			else cout << min_cost[i] << endl;
		}
	}
	return 0;
}