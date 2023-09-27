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

int main(){
	
	int V, E;
	cin >> V >> E;
	
	long long int d[V][V];
	
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			d[i][j] = INF;
		}
		d[i][i] = 0;
	}
	
	for(int i = 0; i < E; i++){
		int u, v, cost;
		cin >> u >> v >> cost;
		d[u][v] = cost;
	}
	
	for(int k = 0; k < V; k++){
		for(int i = 0; i < V; i++){
			for(int j = 0; j < V; j++){
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	
	bool flag = false;
	for(int k = 0; k < V; k++){
		for(int i = 0; i < V; i++){
			for(int j = 0; j < V; j++){
				if(d[i][j] > d[i][k] + d[k][j]){
					flag = true;
				}
			}
		}
	}
	
	if(flag){
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			if(d[i][j] > 1e11){
				cout << "INF";
			}else{
				cout << d[i][j];
			}
			printf("%c", j == V - 1 ? '\n' : ' ');
		}
	}
	
	return 0;
}
