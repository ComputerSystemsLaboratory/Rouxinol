#include <iostream>
#include <vector>
#include <queue>
#define INF 1500000000
using namespace std;

struct edge{ int to,cost; };
typedef pair<int,int> P;

int main(){
	int V,E,r;
	cin >> V >> E >> r;
	vector<edge> graph[V];
	priority_queue<P,vector<P>,greater<P> > que;
	int d[V];
	for(int i = 0;i < V;i++) d[i] = INF;
	for(int i = 0;i < E;i++){
		int a,b,c;
		cin >> a >> b >> c;
		graph[a].push_back({b,c});
	}
	d[r] = 0;
	que.push(make_pair(0,r));
	while(!que.empty()){
		P p = que.top();que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		for(int i = 0;i < graph[v].size();i++){
			edge e = graph[v][i];
			if(d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que.push(make_pair(d[e.to],e.to));
			}
		}
	}
	for(int i = 0;i < V;i++) {
		if(d[i] == INF) cout << "INF" << endl;
		else cout << d[i] << endl;
	}
	return 0;
}