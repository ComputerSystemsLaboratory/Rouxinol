#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;
typedef pair<int,int> P;
#define INF 1e9

struct edge{
	int to,cost;
	edge(int to, int cost): to(to),cost(cost){}
};


int main() {
	int v,e,r;
	vector<edge> g[100100];
	int ans[100100];
	priority_queue<P, vector<P>, greater<P> > q;


	cin>>v>>e>>r;
	for (int i=0;i<e;i++) {
		int s,t,d;
		cin>>s>>t>>d;
		g[s].push_back(edge(t,d));
	}

	fill(ans,ans+v+1,INF);
	ans[r]=0;
	q.push(P(0,r));
	while (!q.empty()) {
		P x = q.top();
		q.pop();
		if (ans[x.second] < x.first) continue;
		for (int i=0;i<g[x.second].size();i++){
			edge e = g[x.second][i];
			//cout<<ans[e.to] <<endl;
			if (ans[e.to] > ans[x.second]+e.cost) {
				//cout<<e.to<<endl;
				ans[e.to] = ans[x.second]+e.cost;
				q.push(P(ans[e.to],e.to));
			}
		}
	}

	for (int i=0;i<v;i++) {
		if (ans[i]==1e9) {
			cout<<"INF"<<endl;
		} else {
			cout<< ans[i] <<endl;
		}
	}
	
	return 0;
}
