#define scanf_s scanf
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

#define MAX 100
//#define MAX_ 1000
int main(void)
{
	int G[MAX][MAX] = { false };
	int n, u, k, v;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d %d", &u, &k);
		for (int j = 0; j < k; ++j) {
			scanf_s("%d", &v);
			G[u - 1][v - 1] = true;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (j != 0) printf(" ");
			printf("%d", G[i][j]);
		}
		printf("\n");
	}
}