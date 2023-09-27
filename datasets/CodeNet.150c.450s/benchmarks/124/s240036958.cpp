#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#define MAX_V 200000

typedef pair<long long int, long long int> P;
long long int INF = 1e18;

struct edge{
	int to;
	long long int cost;
};

vector<edge> G[MAX_V];
long long int d[MAX_V];

// 速さはO(|E|log|V|)

void shortest_path(int s, int V){ // Vは頂点数
	
	priority_queue<P, vector<P>, greater<P> > que;
	
	for(int i = 0; i < V; i++){
		d[i] = INF;
	}
	d[s] = 0;
	
	que.push(P(0, s));
	
	while(!que.empty()){
		
		P p = que.top();
		que.pop();
		
		int v = p.second;
		
		if(d[v] < p.first){
			continue;
		}
		
		for(int i = 0; i < G[v].size(); i++){
			edge e = G[v][i];
			if(d[e.to] > e.cost + d[v]){
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		} // 頂点への最小コストを更新
	}
}

int main(){
	
	int V;
	cin >> V;
	
	for(int i = 0; i < V; i++){
		int u, num;
		cin >> u >> num;
		for(int j = 0; j < num; j++){
			edge e;
			cin >> e.to >> e.cost;
			G[u].push_back(e);
		}
	}
	
	shortest_path(0, V);
	
	for(int i = 0; i < V; i++){
		cout << i << " " << d[i] << endl;
	}
	
	return 0;
}
