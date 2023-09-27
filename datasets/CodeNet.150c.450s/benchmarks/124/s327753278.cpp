#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 1050000000
 
using namespace std;

#define MAX_V 101

int d[MAX_V][MAX_V];  // d[u][v]は辺e=(u,v)のコスト(存在しない場合はINF、ただしd[i][i]=0とする)
int V;                // 頂点数
void warshall_floyd(int n) {
	V = n;

	for (int i = 0; i < V; i++)
		for (int j = 0; j < V; j++) 
			for (int k = 0; k < V; k++)
				d[0][j] = min(d[0][j], d[0][k] + d[k][j]);
}

int main(void)
{
	int n, u, v, k, c;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) d[i][j] = 0; 
			else d[i][j] = INF;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v >> c;
			d[u][v] = c;
		}
	}
	
	warshall_floyd(n);

	for (int i = 0; i < n; i++) {
		cout << i << " " << d[0][i] << endl;
	}


	return (0);
}