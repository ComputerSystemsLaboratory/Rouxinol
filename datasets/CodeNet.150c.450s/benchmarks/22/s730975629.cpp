#include <iostream>
#include <algorithm>
using namespace std;

struct Edge { int from, to, cost; };
const int INF = 1 << 17;
const int V = 1001;
const int E = 2001;
int d[V];
Edge edge[E];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int v, e, r;
	cin >> v >> e >> r;
	
	int a, b, c;
	for(int i = 0; i < e; ++i){
		cin >> a >> b >> c;
		edge[i] = Edge{ a, b, c };
	}
	
	fill(d, d + v, INF);
	d[r] = 0;
	
	int cnt = 0;
	while(true){
		bool update = false;
		for(int i = 0; i < e; ++i){
			Edge e1 = edge[i];
			if(d[e1.from] != INF && d[e1.to] > d[e1.from] + e1.cost){
				d[e1.to] = d[e1.from] + e1.cost;
				update = true;
			}
		}
		cnt ++;
		if(!update)
			break;
		if(cnt == v - 1){
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}
	
	for(int i = 0; i < v; ++i){
		if(d[i] == INF)
			cout << "INF";
		else
			cout << d[i];
		cout << endl;
	}
	
	return 0;
}