#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <string>

using namespace std;

const double PI = 3.14159265358979;

int G[101][101];
int visited[101];
int n;

int houxuan[101];
int father[101];

int prim() {

	for (int i = 0; i < n; i++)	{
		houxuan[i] = INT_MAX;
		father[i] = -1;
	}
	houxuan[0] = 0;

	int sum = 0;
	while (true) {

		int minx = INT_MAX;
		int u = -1;
		for (int i = 0; i < n; i++) {

			if (!visited[i] && houxuan[i] < minx) {
				minx = houxuan[i];
				u = i;
			}
		}
		if (u == -1) break;

		visited[u] = 1;
		sum += minx;

		for (int i = 0; i < n; i++) {
			if (!visited[i] && G[u][i] != -1) {
				if (houxuan[i] > G[u][i]) {
					houxuan[i] = G[u][i];
					father[i] = u;
				}
			}
		}
	}	

	return sum;
}

int main() {
	
	
	cin >> n;

	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++)	{
			cin >> G[i][j];
		}
	}
	
	cout << prim() << endl;

	return 0;
}

