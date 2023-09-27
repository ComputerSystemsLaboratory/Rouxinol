#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;

typedef pair<long long int, long long int> P;
long long int INF = 1e18;
long long int MOD = 1000000007;

using namespace std;

#define MAX_E 100000
#define MAX_V 100000

struct edge{
	int from, to;
	long long int cost;
};

edge es[MAX_E];
long long int d[MAX_V];
int V, E;// Vは頂点数、Eは辺数

// O(VE)、負の閉路がある場合 true を返す
bool shortest_path(int s){
	for(int i = 0; i < V; i++){
		d[i] = INF;
	}
	d[s] = 0;
	bool update = false;
	for(int loop = 0; loop < V; loop++){
		update = false;
		for(int i = 0; i < E; i++){
			edge e = es[i];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if(!update){
			break;
		}
	}
	return update;
}

int main(){
	
	int s;
	cin >> V >> E >> s;
	
	for(int i = 0; i < E; i++){
		cin >> es[i].from >> es[i].to >> es[i].cost;
	}
	
	bool ret = shortest_path(s);
	
	if(ret){
		cout << "NEGATIVE CYCLE" << endl;
	}else{
		for(int i = 0; i < V; i++){
			if(d[i] == INF){
				cout << "INF" << endl;
			}else{
				cout << d[i] << endl;
			}
		}
	}
	
	return 0;
}
