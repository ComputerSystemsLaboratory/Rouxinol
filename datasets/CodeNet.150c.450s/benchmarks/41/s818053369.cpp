#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

const int MAX = 100;
const long long INF = 20000000000;

int main() {
	int v, e;
	long long graph[MAX][MAX];

	scanf("%d%d", &v, &e);

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {
			if (i == j)graph[i][j] = 0;
			else graph[i][j] = INF;
		}
	}

	for (int i = 0; i < e; i++) {
		int s, t, d;
		scanf("%d%d%d", &s, &t, &d);
		graph[s][t] = d;
	}

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {
			for (int k = 0; k < v; k++) {
				if (graph[j][i] == INF || graph[i][k] == INF)continue;
				graph[j][k] = min(graph[j][k], graph[j][i] + graph[i][k]);
			}
		}
	}

	for (int i = 0; i < v; i++) {
		if (graph[i][i] < 0) {
			printf("NEGATIVE CYCLE\n");
			return 0;
		}
	}

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {	
			if (j)printf(" ");
			if (graph[i][j] == INF)printf("INF");
			else printf("%d", graph[i][j]);
		}
		printf("\n");
	}

	return 0;
}