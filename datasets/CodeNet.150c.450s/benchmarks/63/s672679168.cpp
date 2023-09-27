#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>

#define INF 1000000000000000

using namespace std;

typedef long long int lli;
typedef pair<int, int> P;

int e, v, r;
struct edge{ lli to, cost; };
vector<edge> G[100000];
lli d[100000];

void dijkstra(int s){
	priority_queue< P, vector<P>, greater<P> > que;
	fill(d, d+v, INF);
	d[s] = 0;
	que.push(P(0, s));
	while(!que.empty()){
		P p = que.top(); que.pop();
		if(d[p.second] < p.first) continue;
		for(int i = 0;i < G[p.second].size();i++){
			edge ed = G[p.second][i];
			if(d[ed.to] > d[p.second] + ed.cost){
				d[ed.to] = d[p.second] + ed.cost;
				que.push(P(d[ed.to], ed.to));
			}
		}
	}
}

int main(void){
	cin >> v >> e >> r;
	for(int i = 0;i < e;i++){
		int s, t, d;
		cin >> s >> t >> d;
		edge e;
		e.to = t; e.cost = d;
		G[s].push_back(e);
	}
	dijkstra(r);
	for(int i = 0;i < v;i++){
		if(d[i] != INF)
			cout << d[i] << endl;
		else
			cout << "INF" << endl;
	}
	return 0;
}