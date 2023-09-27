#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;

struct Edge{
		int to;
		int cost;
	};
	
typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
typedef pair<int ,int > P;

void dijkstra(Graph &G,vector<int> &d,int r){
	priority_queue < P,vector<P>,greater<P> > que;
	P p;
	d[r]=0;
	que.push(P(r,0));
	
	while(!que.empty()){
		p=que.top();
		que.pop();
		if(p.second>d[p.first]){
			continue;
		}
		d[p.first]=p.second;
		for(int i=0;i<G[p.first].size();i++){
			Edge e = G[p.first][i];
			if(d[e.to]>d[p.first]+e.cost){
				d[e.to] = d[p.first]+e.cost;
				que.push(P(e.to,d[e.to]));
			}
		}
	}
}

int main(){
	int V,E,r;
	cin >> V >> E >> r;
	Graph G(V);
	
	int s;
	for(int i=0;i<E;i++){
		Edge e;
		cin >> s >> e.to >> e.cost;
		G[s].push_back(e);
	}
	
	vector<int> d(V,INT_MAX);
	dijkstra(G,d,r);
	
	for (int i=0;i<V;i++){
		if(d[i]==INT_MAX){
			cout << "INF" << endl;
		}else{
			cout << d[i] << endl;
		}
	}
	return 0;
}