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
#define INF 2147483647
 
using namespace std;

int main(void)
{
	int n, k, u, v;
	int G[101][101];

	cin >> n;

	memset(G, 0, sizeof(G));

	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			G[u][v] = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << G[i][j];  
			if (n != j)cout << " "; 
		}
		cout << endl;
	}

	return (0);
}