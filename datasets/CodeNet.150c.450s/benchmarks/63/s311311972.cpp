#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, int> pll;

vector<pll> graph[100100];
ll dist[100100];
int v,e;

#define INF (1ll << 60)

void dijkstra(int s){
	int from,i,to;
	ll d,l;
	pll tmp;
	priority_queue<pll, vector<pll>, greater<pll> > pq;
	fill(dist,dist+v,INF);
	dist[s]=0;
	pq.push(pll(dist[s],s));
	while(!pq.empty()){
		tmp = pq.top();
		pq.pop();
		from = tmp.second;
		d = tmp.first;
		for(i=(graph[from].size()-1); i>=0; i--){
			to = graph[from][i].second;
			l = graph[from][i].first;
			if(dist[to] > d+l){
				dist[to] = d+l;
				pq.push(pll(dist[to],to));
			}
		}
	}
}

int main(void){
	int i,s,t,r;
	ll d;
	cin >> v >> e >> r;
	for(i=0; i<e; i++){
		cin >> s >> t >> d;
		graph[s].push_back(pll(d,t));
	}
	dijkstra(r);
	for(i=0; i<v; i++){
		if(dist[i] == INF){
			cout << "INF" << endl;
		}else{
			cout << dist[i] << endl;
		}
	}
	return 0;
}