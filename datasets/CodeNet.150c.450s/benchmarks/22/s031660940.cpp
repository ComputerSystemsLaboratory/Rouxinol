#include <iostream>
#include <vector>
#include <queue>
#define INF 1500000000
using namespace std;

struct edge{ int from,to,cost; };

int main(){
	int V,E,r;
	cin >> V >> E >> r;
	vector<edge> es;
	int d[V];
	for(int i = 0;i < V;i++) d[i] = INF;
	for(int i = 0;i < E;i++){
		int a,b,c;
		cin >> a >> b >> c;
		es.push_back({a,b,c});
	}
	d[r] = 0;
	for(int i = 0;i < V;i++){
		bool update = false;
		for(int j = 0;j < E;j++){
			edge e = es[j];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
				d[e.to] = d[e.from] + e.cost;
				update = true;
				if(i == V - 1) {
					cout << "NEGATIVE CYCLE" << endl;
					return 0;
				}
			}
		}
		if(!update) break;
	}
	for(int i = 0;i < V;i++) {
		if(d[i] == INF) cout << "INF" << endl;
		else cout << d[i] << endl;
	}
	return 0;
}