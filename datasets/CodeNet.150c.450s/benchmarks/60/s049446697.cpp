#include <iostream>
#include <cstdio>

#define MAX 100

using namespace std;

int adjacencyList[MAX + 1][MAX + 1];

int main(void)
{

	int n;
	int u;
	int k;
	int v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> u >> k;

		for (int j = 0; j < k; j++) {
			cin >> v;
			adjacencyList[u][v] = 1;
		}

	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j > 1) {
				putchar(' ');
			}
			
			printf("%d",adjacencyList[i][j]);
		}

		putchar('\n');

	}


	return 0;
}