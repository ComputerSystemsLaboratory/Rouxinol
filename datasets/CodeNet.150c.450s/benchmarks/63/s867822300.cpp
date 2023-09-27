#include<iostream>
#include<vector>
#include<queue>
#include<string.h>

using namespace std;

const int inf = 1e9;

struct edge{int to,cost;};
typedef pair<int,int> P;

int V;
vector<edge> g[100000];
int d[100000];

int main(){
	int e,r;
	cin >> V >> e >> r;
	for(int i = 0;i < e;i++){
		int f;
		edge te;
		cin >> f >> te.to >> te.cost;
		g[f].push_back(te);
	}

	priority_queue<P,vector<P>,greater<P> > que;
	fill(d,d + V,inf);
	d[r] = 0;
	que.push(P(0,r));
	
	while(!que.empty()){
		P p = que.top();que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		for(int i = 0;i < g[v].size();i++){
			edge e = g[v][i];
			if(d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to],e.to));
			}
		}
	}

	for(int i = 0;i < V;i++){
		if(d[i] == inf) cout << "INF" << endl;
		else cout << d[i] << endl;
	}
	
	return 0;
}