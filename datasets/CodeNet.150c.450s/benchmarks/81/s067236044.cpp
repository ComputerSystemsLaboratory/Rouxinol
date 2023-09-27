#include <cstdio>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

const int max_n = 10, INF = 100000000;
struct edge{ int to, cost; };
typedef pair<int, int> P;

int n;
vector<edge> g[max_n];
int d[max_n];
bool exi[max_n];

void dijkstra(int s){
	//priority_que
	priority_queue<P, vector<P>, greater<P> > que;
	fill(d, d + max_n, INF);
	d[s] = 0;
	que.push(P(0, s));//コスト、ノードの順
	
	while(!que.empty()){
		P p = que.top(); que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;//もともと入っていたやつの方が低コスト
		for(int i = 0; i < g[v].size(); i++){
			edge e = g[v][i];
			if(d[e.to] > p.first + e.cost){
				d[e.to] = p.first + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
}

int main(){
	int res, ans, pos;
	
	while(true){
		scanf("%d", &n);
		if(n == 0) return 0;
		fill(exi, exi + max_n, false);
		for(int i = 0; i < max_n; i++){
			g[i].clear();
		}
		for(int i = 0; i < n; i++){
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			edge p1, p2;
			p1.to = b; p1.cost = c;
			p2.to = a; p2.cost = c;
			g[a].push_back(p1);
			g[b].push_back(p2);
			exi[a] = true; exi[b] = true;
		}
		
		ans = INF;
		pos = 0;
		for(int i = 0; i < 10; i++){
			if(!exi[i]) continue;
			res = 0;
			dijkstra(i);
			for(int j = 0; j < 10; j++){
				if(d[j] != INF){
					res += d[j];
				}
			}
			if(ans > res){
				pos = i;
				ans = res;
			}
		}
		
		printf("%d %d\n", pos, ans);
	}
}