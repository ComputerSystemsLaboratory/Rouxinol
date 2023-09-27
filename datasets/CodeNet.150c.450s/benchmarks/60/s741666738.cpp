#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <climits>

using namespace std;


int main() {
	int n;
	int u, v;
	int Adj[101][101];
	int deg;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			Adj[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		cin >> u;
		cin >> deg;
		for (int j = 1; j <= deg; j++) {
			cin >> v;
			Adj[u][v] = 1;
		}
	}
	for(int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d", Adj[i][j]);
			if (j != n) {
				printf(" ");
			}
		}
		printf("\n");
	}
}