#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>

#define INF 1000000000

using namespace std;

typedef long long int lli;
typedef pair<int, int> P;

struct edge{
	int to, cost;
};

int V, E;
vector<edge> e[10000];
int mincost[10000];
bool used[10000];


int main(void){
	cin >> V >> E;

	for(int i = 0;i < V;i++){
		mincost[i] = INF;
		used[i] = false;
	}

	for(int i = 0;i < E;i++){
		int a, b, c;
		cin >> a >> b >> c;
		edge d;
		d.to = b;
		d.cost = c;
		e[a].push_back(d);
		d.to = a;
		e[b].push_back(d);
	}


	mincost[0] = 0;
	long long int res = 0;

	while(true){
		int v = -1;
		for(int u = 0;u < V;u++){
			if(!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
		}

		if(v == -1) break;
		used[v] = true;
		res += mincost[v];

		for(int u = 0;u < e[v].size();u++){
			mincost[e[v][u].to] = min(mincost[e[v][u].to], e[v][u].cost);
		}
	}
	cout << res << endl;
}