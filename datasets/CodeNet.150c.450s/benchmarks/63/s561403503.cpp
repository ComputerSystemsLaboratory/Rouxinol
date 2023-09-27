#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
using namespace std;

const int INF = 1 << 30;
const int V = 100000;
const int E = 500000;
struct Edge{ int to, cost; };
vector<Edge> list[E];
typedef pair<int, int> P;
int d[V];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int v, e, r;
	cin >> v >> e >> r;
	
	int a, b, c;
	for(int i = 0; i < e; ++i){
		cin >> a >> b >> c;
		list[a].push_back(Edge{b, c});
	}
	
	priority_queue<P, vector<P>, greater<P>> pque;
	pque.push(P(0, r));
	fill(d, d + v, INF);
	d[r] = 0;
	
	while(!pque.empty()){
		P p = pque.top();
		pque.pop();
		int v1 = p.second;
		if(d[v1] < p.first) continue;
		
		for(int i = 0; i < list[v1].size(); ++i){
			Edge e1 = list[v1][i];
			if(d[e1.to] > d[v1] + e1.cost){
				d[e1.to] = d[v1] + e1.cost;
				pque.push(P(d[e1.to], e1.to));
			}
		}
	}
	
	for(int i = 0; i < v; ++i){
		if(d[i] != INF)
			cout << d[i] << endl;
		else
			cout << "INF" << endl;
	}
	
	return 0;
}