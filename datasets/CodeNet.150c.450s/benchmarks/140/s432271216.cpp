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
priority_queue< P, vector<P>, greater<P> > que;
bool used[10000];


int main(void){
	cin >> V >> E;

	for(int i = 0;i < V;i++){
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


	que.push(P(0, 0));
	long long int res = 0;

	while(!que.empty()){

		P a = que.top();
		que.pop();
		if(used[a.second]) continue;
		used[a.second] = true;
		res += a.first;

		for(int u = 0;u < e[a.second].size();u++){
			if(!used[e[a.second][u].to])
				que.push(P(e[a.second][u].cost, e[a.second][u].to));
		}
	}
	cout << res << endl;
}