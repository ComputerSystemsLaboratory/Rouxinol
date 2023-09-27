#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
#define MAX 10000000

int b[110];
bool used[110];
struct edge{int from, to, cost;};

int solve(int a[110][110], int n){
	b[0] = 0;
	//used[0] = true;
	while(1){
		int v = -1;
		for(int i = 0;i < n;i++){
			if(!used[i] && (v == -1 || b[v] > b[i]))v = i;
		}
		if(v == -1)break;
		used[v] = true;
		for(int i = 0;i < n;i++){
			if(a[v][i] != -1)b[i] = min(b[i], b[v] + a[v][i]);
		}
	}
	return 0;
}

int main(){
	int a[110][110], n;
	fill((int*)a, (int*)(a+110), -1);
	fill(b, b+110, MAX);
	fill(used, used, false);
	cin >> n;
	for(int i = 0;i < n;i++){
		int u, k, c, d;
		cin >> u >> k;
		for(int j = 0;j < k;j++){
			cin >> c >> d;
			a[u][c] = d;
		}
	}
	
	solve(a, n);
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