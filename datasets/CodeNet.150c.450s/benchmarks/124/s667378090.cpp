#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
#define MAX 10000000

int b[110];
struct edge{int from, to, cost;};

int solve(edge a[10010], int n, int nn){
	b[0] = 0;
	while(1){
		int update = 0;
		for(int i = 0;i < nn;i++){
			if(b[a[i].from] != MAX && b[a[i].to] > b[a[i].from] + a[i].cost){
				b[a[i].to] = b[a[i].from] + a[i].cost;
				update = 1;
			}
		}
		if(update == 0)break;
	}
	return 0;
}

int main(){
	int n, nn = 0;
	edge a[10010];
	fill(b, b+110, MAX);
	cin >> n;
	for(int i = 0;i < n;i++){
		int u, k, c, d;
		cin >> u >> k;
		for(int j = 0;j < k;j++){
			cin >> c >> d;
			a[nn].from = u;
			a[nn].to = c;
			a[nn++].cost = d;
		}
	}
	
	solve(a, n, nn);
	for(int i = 0;i < n;i++){
		cout << i << " " << b[i] << endl;
	}
	
	return 0;
}
/*
5
0 3 2 3 3 1 1 2
1 2 0 2 3 4
2 3 0 3 3 1 4 1
3 4 2 1 0 1 1 4 4 3
4 2 2 1 3 3
*/