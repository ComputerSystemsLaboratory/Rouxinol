#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;
typedef pair<int,int> P;

class Dijkstra{
public:
	vector<int> d;
	vector<vector<P> > G;
	int V;
	void init(int n){
		V = n;
		d.resize(n);
		G.resize(n);
	}
	void connect(int s, int t, int c){
		G[s].push_back(P(t, c));
	}
	void calc(int s){
		priority_queue<P, vector<P>, greater<P> > q;
		fill(d.begin(), d.end(), inf);
		d[s] = 0;
		q.push(P(0, s));
		
		while(!q.empty()){
			P p = q.top();q.pop();
			int from = p.second;
			if(d[p.second] < p.first)continue;
			
			for(int i = 0;i < G[from].size();i++){
				int to = G[from][i].first;
				int cost = G[from][i].second;
				
				if(d[to] > d[from]+cost){
					d[to] = d[from]+cost;
					q.push(P(d[to], to));
				}
			}
		}
	}
};

int main(){
	Dijkstra D;
	int n, m, s;
	scanf("%d%d%d", &n, &m, &s);
	D.init(n);
	for(int i = 0;i < m;i++){
		int x, y, c;
		scanf("%d%d%d", &x, &y, &c);
		D.connect(x, y, c);
	}
	D.calc(s);
	for(int i = 0;i < n;i++){
		int ans = D.d[i];
		if(ans == inf)printf("INF\n");
		else printf("%d\n", ans);
	}
	return 0;
}
