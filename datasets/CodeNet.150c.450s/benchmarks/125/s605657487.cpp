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

bool rel[128][128];
int disc[128];
int comp[128];
int n, turn = 0;

void dfs(int visit, vector<int> &log){
	if(find(log.begin(), log.end(), visit) == log.end()){
		log.push_back(visit);
		disc[visit] = ++turn;
		for(int i = 1; i <= n; i++){
			if(rel[visit][i] && find(log.begin(), log.end(), i) == log.end()) dfs(i, log);
		}
		comp[visit] = ++turn;
	}
}

int main() {
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		int u, k;
		scanf("%d %d", &u, &k);
		
		for(int j = 1; j <= n; j++){
			rel[u][j] = false;
		}
		while(k--){
			int v;
			scanf("%d", &v);
			rel[u][v] = true;
		}
	}
	
	vector<int> visited;
	for(int i = 1; i <= n; i++){
		dfs(i, visited);
	}
	
	for(int i = 1; i <= n; i++){
		printf("%d %d %d\n", i, disc[i], comp[i]);
	}
	return 0;
}