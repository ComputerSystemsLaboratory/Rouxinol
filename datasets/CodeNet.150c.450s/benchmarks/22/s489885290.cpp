#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>

#define INF 1000000000000000

using namespace std;

typedef long long int lli;
typedef pair<int, int> P;

struct edge{
	int from, to, cost;
};

int V, E, r;
edge e[2000];
lli d[1000];

bool solve(int s){
	fill(d, d+V, INF);
	d[s] = 0;
	for(int i = 0;i < V;i++){
		bool update = false;
		for(int j = 0;j < E;j++){
			if(d[e[j].from] != INF && d[e[j].to] > d[e[j].from] + e[j].cost){
				d[e[j].to] = d[e[j].from] + e[j].cost;
				update = true;
			}
		}
		if(!update) break;
		if(i == V-1 && update){
			return false;
		}
	}
	return true;
}

int main(void){
	cin >> V >> E >> r;
	for(int i = 0;i < E;i++){
		cin >> e[i].from >> e[i].to >> e[i].cost;
	}
	if(solve(r)){
		for(int i = 0;i < V;i++){
			if(d[i] != INF)
				cout << d[i] << endl;
			else
				cout << "INF" << endl;
		}
	}else{
		cout << "NEGATIVE CYCLE" << endl;
	}
	return 0;
}