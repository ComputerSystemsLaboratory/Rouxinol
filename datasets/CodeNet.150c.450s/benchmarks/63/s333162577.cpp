#include <bits/stdc++.h>
using namespace std;
#define inf 999999999
typedef pair<int, int> P;
int V, E, r;
int d[100000];
vector<P> edges[100000];
priority_queue<P, vector<P>, greater<P> > q;

void solve(){
	P start = P(0, r);
	d[r] = 0;
	q.push(start);

	while(!q.empty()){
		P p = q.top(); q.pop();
		if(d[p.second] < p.first) continue;

		for(int i = 0; i < edges[p.second].size(); i++){
			P edge = edges[p.second][i];
			P next = P(p.first + edge.second, edge.first);
			if(d[next.second] < next.first) continue;

			d[next.second] = next.first;
			q.push(next);
		}
	}

	return;
}

int main(){
	fill_n(d, 100000, inf);
	cin >> V >> E >> r;
	for(int i = 0; i < E; i++){
		int A, B, cost;
		cin >> A >> B >> cost;
		edges[A].push_back(P(B, cost));
	}

	solve();
	for(int i = 0; i < V; i++){
		if(d[i] == inf){
			cout << "INF" << endl;
		}else{
			cout << d[i] << endl;
		}
	}
}