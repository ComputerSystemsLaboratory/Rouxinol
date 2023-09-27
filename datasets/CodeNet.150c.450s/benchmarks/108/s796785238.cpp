#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int n ,dist[128];
bool rel[128][128];

int main() {
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		int u, k;
		scanf("%d %d", &u, &k);
		
		dist[u] = INT_MAX;
		for(int j = 1; j <= n; j++){
			rel[u][j] = false;
		}
		while(k--){
			int v;
			scanf("%d", &v);
			rel[u][v] = true;
		}
	}
	
	queue<int> visit;
	visit.push(1);
	dist[1] = 0;
	
	while(visit.size()){
		for(int i = 1; i <= n; i++){
			if(rel[visit.front()][i] && 1 + dist[visit.front()] < dist[i]){
				visit.push(i);
				dist[i] = 1 + dist[visit.front()];
			}
		}
		visit.pop();
	}
	
	for(int i = 1; i <= n; i++){
		printf("%d %d\n", i, dist[i]==INT_MAX ? -1 : dist[i]);
	}
	return 0;
}