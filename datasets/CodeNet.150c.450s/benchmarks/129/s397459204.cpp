#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int r,c,graph[101][101];
	cin >> r >> c;

	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			graph[i][j] = 0;
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
				cin >> graph[i][j];
		}
		for (int j = 0; j < c; j++) {
			graph[i][c] += graph[i][j];
		}
	}

	for (int j = 0; j < c+1; j++) {
		for (int i = 0; i < r; i++) {
			graph[r][j] += graph[i][j];
		}
	}

	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			printf("%d",graph[i][j]);
			if (j != c) printf(" ");
		}
		printf("\n");
	}

	return 0;
}