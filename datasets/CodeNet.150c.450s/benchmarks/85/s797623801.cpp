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

int m[128], costs[128][128];
int calc(int s, int e){
	if(s==e) return 0;
	if(costs[s][e] == INT_MAX){
		if(e-s==1) return costs[s][e] = m[s-1] * m[s] * m[e];
		for(int i = s; i < e; i++){
			costs[s][e] = min(costs[s][e], calc(s, i) + calc(i+1, e) + m[s-1] * m[i] * m[e]);
		}
	}
	return costs[s][e];
}

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &m[i], &m[i+1]);
	}
	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			costs[i][j] = INT_MAX;
		}
	}
	
	printf("%d\n", calc(1, n));
	
	return 0;
}