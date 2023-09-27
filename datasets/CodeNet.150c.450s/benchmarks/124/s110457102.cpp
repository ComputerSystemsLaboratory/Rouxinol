#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
#define MAX 10000000

int b[110];

int solve(int a[110][110], int n){
	b[0] = 0;
	for(int i = 0;i < n;i++){
		for(int j = 1;j < n;j++){
			//if(j == 4)cout << b[4] << i << " " << endl;
			if(a[i][j] != -1)b[j] = min(b[j], a[i][j]+b[i]);
			//if(j == 4)cout << b[4] << i << " " << endl;
		}
	}
	//cout << endl;
	return 0;
}

int main(){
	int a[110][110], n;
	fill((int*)a, (int*)(a+110), -1);
	fill(b, b+110, MAX);
	cin >> n;
	for(int i = 0;i < n;i++){
		int u, k, c, d;
		cin >> u >> k;
		for(int j = 0;j < k;j++){
			cin >> c >> d;
			a[u][c] = d;
		}
	}
	
	
	
	for(int i = 0;i < 2*n;i++)solve(a, n);
	//solve(a, n);
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