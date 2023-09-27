#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <string.h>
#define INF 1000000001

using namespace std;

ifstream in("ssspne.in");

const int MAXV = 10005;
const int MAXE = 2005;

typedef struct edge{
	int x;
	int y;
	int c;
}edge;

int v, e, s, x, y, c;
edge g[MAXV];
int cost[MAXV];

int Bellman_Ford(){
	for(int i = 0; i < v; i++){
		cost[i] = INF;
	}
	cost[s] = 0;
	//relax edges repeatedly
	for(int j = 0; j < v; j++){
		bool update = false;
		for(int i = 0; i < e; i++){
			int u = g[i].x;
			int n = g[i].y;
			int w = g[i].c;
			if(cost[u] != INF && cost[n] > cost[u] + w){
				cost[n] = cost[u] + w;
				update = true;
			}
		}
		if(!update) return true;
	}	
	return false;

	/* checking if negative cycle is present
	for(int i = 0; i < e; i++){
		int u = g[i].x;
		int n = g[i].y;
		int w = g[i].c;
		if(cost[n] > cost[u] + w){
			cout << "NEGATIVE CYCLE" << '\n';
			return;
		}
	}*/
}

int main(){	
	cin >> v >> e >> s;
	for( int i = 0; i < e; ++i){
		cin >> g[i].x >> g[i].y >> g[i].c;
	}

	if(Bellman_Ford()){
		for(int i = 0; i < v; i++){
			if(cost[i] == INF){
				cout << "INF" << '\n';
				continue;
			}
			else 
			cout << cost[i] << '\n';
		}
	}else{
			cout << "NEGATIVE CYCLE" << '\n';
	} 		

  return 0;
}

