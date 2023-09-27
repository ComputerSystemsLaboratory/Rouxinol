#include <iostream>
#include <queue>
#define INF 1000000000
using namespace std;

struct edge{ int to,cost; };
typedef pair<int,int> P;

int main(){
	int n;
	vector<edge> es[100];
	priority_queue<P,vector<P>,greater<P> > que;
	int d[100];
	cin >> n;
	for(int i = 0;i < n;i++){
		int now,m;
		cin >> now >> m;
		for(int j = 0;j < m;j++){
			int a,b;
			cin >> a >> b;
			es[now].push_back({a,b});
		}
		d[i] = INF;
	}
	d[0] = 0;
	que.push(make_pair(0,0));
	while(!que.empty()){
		P p = que.top();
		que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		for(int i = 0;i < es[v].size();i++){
			edge e = es[v][i];
			if(d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que.push(make_pair(d[e.to],e.to));
			}
		}
	}
	for(int i = 0;i < n;i++) cout << i << " " << d[i] << endl;
	return 0;
}